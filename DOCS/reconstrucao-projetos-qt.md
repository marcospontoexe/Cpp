# Reconstrução de projetos Qt (2026)

Cinco projetos do curso de Qt só tinham a pasta de build gerada pelo Qt Creator (`build-*-Desktop_Qt_6_1_2_MinGW_64_bit-Debug`). Os arquivos `.pro`, `.h`, `.cpp` e `.ui` tinham se perdido. Em outubro de 2026 eles foram recriados.

## Como foi feito

| Parte | Origem | Fidelidade |
| --- | --- | --- |
| Pasta e nome do projeto | `INCPATH`/`SOURCES` do `Makefile.Debug` (ex.: `-I../imc`) | igual ao original |
| `.ui` (tela) | `ui_*.h` gerado pelo `uic`: widgets, nomes, layouts, tamanhos e textos | igual, com as exceções abaixo |
| `.h` (slots) | lista de slots no `moc_*.cpp` | igual, mais os slots novos citados abaixo |
| `.cpp` (lógica) | não existe nos arquivos gerados | **reescrito**, seguindo o tema de cada aula |

Cada arquivo recriado começa com o comentário `Reconstruído em 2026 a partir dos arquivos gerados na pasta build`.

## Projetos

| Pasta | O que faz | Diferenças em relação ao original |
| --- | --- | --- |
| [CFB_Cursos/QT/projetos/imc/imc](../CFB_Cursos/QT/projetos/imc/imc) | Calcula o IMC e classifica pela tabela da OMS. Aceita vírgula e altura em cm. | título "Calculadora de IMC", textos de exemplo nos campos e um slot novo `on_ptb_limpar_clicked` (o botão Limpar não tinha slot) |
| [CFB_Cursos/QT/variaveis/variaveis](../CFB_Cursos/QT/variaveis/variaveis) | Converte nome/idade/peso (`toInt`, `toDouble`) para membros da classe e mostra os valores | slot novo `on_btn_limpar_clicked` |
| [CFB_Cursos/QT/formularios/objeto_global/fomulario](../CFB_Cursos/QT/formularios/objeto_global/fomulario) | Abre a `janela2` como membro da classe (`new` + `show()`, não modal), em contraste com o `objeto_local` (objeto local + `exec()`) | a janela é criada uma vez só e reaproveitada nos cliques seguintes |
| [CFB_Cursos/QT/imagens/usando_codigo/usando_codigo](../CFB_Cursos/QT/imagens/usando_codigo/usando_codigo) | O botão "Mostrar" carrega `:/foto.png` num `QLabel` | a imagem vem de um `recursos.qrc` que aponta para [CFB_Cursos/QT/imagens/foto.png](../CFB_Cursos/QT/imagens/foto.png). O original não tinha `.qrc` e provavelmente usava um caminho absoluto. |
| [CFB_Cursos/QT/sinais_slots(evento_e_acoes)/sinais_slots](../CFB_Cursos/QT/sinais_slots(evento_e_acoes)/sinais_slots) | Quatro formas de conexão: designer, `connect(SIGNAL/SLOT)`, slot automático e lambda | os textos e larguras dos botões foram ampliados para dizer qual forma cada um usa. A lambda no `pushButton_4` é uma suposição, porque o original não tinha slot para ele. |

## Testes feitos

Cada projeto foi compilado com Qt 6.8.3 + MinGW 13.1 e executado. Os botões foram acionados por UI Automation:

- **IMC:** o resultado aparece em `QMessageBox` e na barra de status.
- **variáveis:** salvar e limpar.
- **formulário:** dois cliques abrem uma única janela.
- **imagem:** a foto aparece no `QLabel`.
- **sinais e slots:** a lambda muda o texto, e cada um dos 3 botões fecha o app.

As pastas `build-*` antigas continuam no repositório como estavam. Elas foram geradas pelo Qt 6.1.2 e não correspondem exatamente aos fontes novos.
