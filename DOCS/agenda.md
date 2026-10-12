# Agenda (Qt + SQLite): segurança e banco de dados

Projeto: [CFB_Cursos/QT/banco_de_dados/agenda](../CFB_Cursos/QT/banco_de_dados/agenda)

## Banco de dados

- **Local:** `QStandardPaths::AppDataLocation`, que no Windows é `%APPDATA%/agenda/logs.db`. O nome da pasta vem de `setApplicationName("agenda")` em [main.cpp](../CFB_Cursos/QT/banco_de_dados/agenda/main.cpp).
- **Criação:** o construtor de [janelalogin.cpp](../CFB_Cursos/QT/banco_de_dados/agenda/janelalogin.cpp) cria a pasta e as duas tabelas, se ainda não existirem:
  - `logs (Nome VARCHAR (30), Login VARCHAR (30), Senha TEXT, Acesso VARCHAR (1))`: usuários.
  - `contatos (id INTEGER PRIMARY KEY AUTOINCREMENT, Login TEXT NOT NULL, Nome TEXT NOT NULL, Telefone TEXT, Email TEXT)`: contatos. A coluna `Login` indica o dono do contato.
- **Antes de outubro de 2026:** o caminho era absoluto (`C:/Users/marco/.../data_base/logs.db`) e o `QSqlDatabase` era criado numa variável `static`, antes do `QApplication`. O antigo `data_base/logs.db` tinha senhas em texto puro e foi apagado. Elas continuam no histórico do git (4 usuários de teste). O [data_base/banco.db](../CFB_Cursos/QT/banco_de_dados/data_base) foi mantido porque é usado na aula do SQLiteStudio.

## Senhas

Implementação em [senha.h](../CFB_Cursos/QT/banco_de_dados/agenda/senha.h) e [senha.cpp](../CFB_Cursos/QT/banco_de_dados/agenda/senha.cpp):

- **Algoritmo:** PBKDF2-HMAC-SHA256 via `QPasswordDigestor::deriveKeyPbkdf2`, do módulo `network` (por isso o `QT += sql network` no `.pro`).
- **Salt:** 16 bytes de `QRandomGenerator::system()`, diferente para cada usuário.
- **Parâmetros:** 100 000 iterações e saída de 32 bytes.
- **Valor guardado** na coluna `Senha`: `pbkdf2_sha256$<iterações>$<salt base64>$<hash base64>`, no mesmo formato do Django. Como as iterações ficam guardadas, dá para aumentar o número no futuro sem invalidar os hashes antigos.
- **Verificação:** recalcula o hash com o salt e as iterações guardados e compara byte a byte em tempo constante. Um formato desconhecido é sempre recusado.

O hash foi conferido com Python. `hashlib.pbkdf2_hmac("sha256", senha, salt, 100000)` dá exatamente o mesmo resultado que o Qt.

## Consultas

Todas usam `prepare` + `bindValue` com parâmetros nomeados, para que o texto digitado nunca vire parte do SQL:

| Ação | SQL |
| --- | --- |
| Login | `select Nome, Senha from logs where Login = :login`, seguido de `Senha::verificar()` |
| Cadastro | `select count(*) from logs where Login = :login` (recusa duplicado), seguido de `insert into logs (Nome, Login, Senha) values (:nome, :login, :senha)` |
| Pesquisa de usuários | `select Nome, Login from logs where Nome like :nome or Login like :login order by Nome` |
| Listar/buscar contatos | `select id, Nome, Telefone, Email from contatos where Login = :login and (Nome like :f_nome or Telefone like :f_telefone or Email like :f_email) order by Nome` |
| Adicionar contato | `insert into contatos (Login, Nome, Telefone, Email) values (:login, :nome, :telefone, :email)` |
| Editar contato | `update contatos set Nome = :nome, Telefone = :telefone, Email = :email where id = :id and Login = :login` |
| Excluir contato | `delete from contatos where id = :id and Login = :login` |

O `and Login = :login` em editar e excluir garante que um usuário nunca altera o contato de outro, mesmo que o id venha errado.

## Janela de contatos

Implementação em [form_principal.h](../CFB_Cursos/QT/banco_de_dados/agenda/form_principal.h), [form_principal.cpp](../CFB_Cursos/QT/banco_de_dados/agenda/form_principal.cpp) e [form_principal.ui](../CFB_Cursos/QT/banco_de_dados/agenda/form_principal.ui). O login passa o nome e o login do usuário ao construtor.

- **Modo novo ou edição:** a variável `idSelecionado` vale -1 para um contato novo, quando o botão mostra "Adicionar". Clicar numa linha preenche os campos e muda o botão para "Salvar alterações", e só então o botão Excluir é habilitado.
- **Id do registro:** fica guardado no item da coluna Nome com `setData(Qt::UserRole, id)`, sem aparecer na tabela.
- **Busca:** é refeita a cada letra (`textChanged`). Se o contato em edição sair do filtro, a janela volta para o modo novo, para evitar alterar um registro que não está visível.
- **Validação** com `QRegularExpression`:
  - nome obrigatório;
  - telefone `^[0-9()+\-\s]{8,20}$`;
  - e-mail `^[^@\s]+@[^@\s]+\.[^@\s]+$`.
  - Telefone e e-mail são opcionais.
- **Excluir:** pede confirmação, e o botão padrão da pergunta é "No".
- **Enter:** o botão padrão do diálogo é "Adicionar/Salvar", então Enter num campo salva. Os outros botões têm `autoDefault = false`, para que Enter nunca acione "Novo".

## Testes feitos (UI Automation + Python)

- Cadastro de 4 usuários; um login duplicado e campos vazios recusados.
- Senha errada, `' OR '1'='1` e `ana' --` no login: todos recusados.
- Pesquisa de usuários: lista 4. O filtro `ar` retorna 1, e `' OR 1=1 --` retorna 0.
- Login correto: fecha a tela de login e abre a janela de contatos com o nome do usuário.
- No banco, nenhuma senha aparece em texto puro.
- **Contatos:**
  - 4 contatos adicionados (inclusive com acento).
  - Validação recusou nome vazio, e-mail `abc`, telefone `12ab` e telefone `1234`.
  - Edição do telefone confirmada na tabela e no banco.
  - O botão "Novo" limpa a seleção.
  - Busca por `pereira`, `(41)` e `gmail` encontrou 1, 2 e 1 contatos, e `' OR 1=1 --` retornou 0.
  - Excluir com Enter (resposta padrão "No") não apagou nada; com "Yes", apagou.
  - Outro usuário (`bruno`) entra e vê 0 contatos.

## Pendências

- A pesquisa de usuários fica acessível antes do login.
