#include "form_principal.h"
#include "ui_form_principal.h"
#include <QtSql>
#include <QHeaderView>
#include <QMessageBox>
#include <QRegularExpression>       //classe para validar textos com expressões regulares

form_principal::form_principal(const QString &nome, const QString &login, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::form_principal),
    login(login)
{
    ui->setupUi(this);
    ui->label_usuario->setText("Contatos de " + nome);

    ui->tableWidget->setColumnCount(3);
    ui->tableWidget->setHorizontalHeaderLabels({"Nome", "Telefone", "E-mail"});
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Stretch);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(1, QHeaderView::ResizeToContents);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(2, QHeaderView::Stretch);
    ui->tableWidget->verticalHeader()->setVisible(false);

    carregarContatos();
    atualizarBotoes();
    ui->lineEdit_nome->setFocus();
}

form_principal::~form_principal()
{
    delete ui;
}


void form_principal::carregarContatos()
{
    QString filtro = "%" + ui->lineEdit_busca->text().trimmed() + "%";      //'%' no like procura o texto em qualquer posição
    QSqlQuery consulta;
    consulta.prepare("select id, Nome, Telefone, Email from contatos where Login = :login "
                     "and (Nome like :f_nome or Telefone like :f_telefone or Email like :f_email) order by Nome");
    consulta.bindValue(":login", login);            //o usuário só enxerga os próprios contatos
    consulta.bindValue(":f_nome", filtro);
    consulta.bindValue(":f_telefone", filtro);
    consulta.bindValue(":f_email", filtro);

    ui->tableWidget->blockSignals(true);            //evita disparar 'itemSelectionChanged' enquanto a tabela é refeita
    ui->tableWidget->setRowCount(0);
    if(!consulta.exec())
    {
        ui->tableWidget->blockSignals(false);
        ui->label_status->setText("Erro ao carregar os contatos!");
        return;
    }

    int linha = 0, linhaSelecionada = -1;
    while(consulta.next())
    {
        ui->tableWidget->insertRow(linha);
        QTableWidgetItem *itemNome = new QTableWidgetItem(consulta.value(1).toString());
        itemNome->setData(Qt::UserRole, consulta.value(0).toInt());        //guarda o id do contato "escondido" no item, sem mostrar na tabela
        ui->tableWidget->setItem(linha, 0, itemNome);
        ui->tableWidget->setItem(linha, 1, new QTableWidgetItem(consulta.value(2).toString()));
        ui->tableWidget->setItem(linha, 2, new QTableWidgetItem(consulta.value(3).toString()));
        if(consulta.value(0).toInt() == idSelecionado)
        {
            linhaSelecionada = linha;
        }
        linha++;
    }

    if(linhaSelecionada >= 0)
    {
        ui->tableWidget->selectRow(linhaSelecionada);       //mantém selecionado o contato que estava sendo editado
    }
    ui->tableWidget->blockSignals(false);

    if(idSelecionado >= 0 && linhaSelecionada < 0)          //o contato em edição sumiu do filtro: volta para o modo "novo"
    {
        limparCampos();
    }
    ui->label_status->setText(QString("%1 contato(s)").arg(linha));
}


void form_principal::limparCampos()
{
    idSelecionado = -1;
    ui->lineEdit_nome->clear();
    ui->lineEdit_telefone->clear();
    ui->lineEdit_email->clear();
    ui->tableWidget->blockSignals(true);
    ui->tableWidget->clearSelection();
    ui->tableWidget->blockSignals(false);
    atualizarBotoes();
}


void form_principal::atualizarBotoes()
{
    ui->pushButton_salvar->setText(idSelecionado < 0 ? "Adicionar" : "Salvar alterações");
    ui->pushButton_excluir->setEnabled(idSelecionado >= 0);         //só é possível excluir um contato selecionado
}


void form_principal::on_tableWidget_itemSelectionChanged()     //o usuário clicou numa linha da tabela
{
    QModelIndexList linhas = ui->tableWidget->selectionModel()->selectedRows();
    if(linhas.isEmpty())
    {
        idSelecionado = -1;
    }
    else
    {
        int linha = linhas.first().row();
        idSelecionado = ui->tableWidget->item(linha, 0)->data(Qt::UserRole).toInt();
        ui->lineEdit_nome->setText(ui->tableWidget->item(linha, 0)->text());       //copia o contato para os campos, para editar
        ui->lineEdit_telefone->setText(ui->tableWidget->item(linha, 1)->text());
        ui->lineEdit_email->setText(ui->tableWidget->item(linha, 2)->text());
    }
    atualizarBotoes();
}


void form_principal::on_pushButton_novo_clicked()          //botão novo
{
    limparCampos();
    ui->lineEdit_nome->setFocus();
}


void form_principal::on_pushButton_salvar_clicked()        //botão adicionar / salvar alterações
{
    QString nome = ui->lineEdit_nome->text().trimmed();
    QString telefone = ui->lineEdit_telefone->text().trimmed();
    QString email = ui->lineEdit_email->text().trimmed();

    static const QRegularExpression formatoTelefone("^[0-9()+\\-\\s]{8,20}$");       //números, espaços, parênteses, + e -
    static const QRegularExpression formatoEmail("^[^@\\s]+@[^@\\s]+\\.[^@\\s]+$");     //algo@algo.algo

    if(nome.isEmpty())
    {
        ui->label_status->setText("Informe o nome do contato.");
        ui->lineEdit_nome->setFocus();
        return;
    }
    if(!telefone.isEmpty() && !formatoTelefone.match(telefone).hasMatch())
    {
        ui->label_status->setText("Telefone inválido: use de 8 a 20 números, espaços, parênteses, + ou -.");
        ui->lineEdit_telefone->setFocus();
        return;
    }
    if(!email.isEmpty() && !formatoEmail.match(email).hasMatch())
    {
        ui->label_status->setText("E-mail inválido.");
        ui->lineEdit_email->setFocus();
        return;
    }

    QSqlQuery salvar;
    if(idSelecionado < 0)           //nenhum contato selecionado: insere um novo
    {
        salvar.prepare("insert into contatos (Login, Nome, Telefone, Email) values (:login, :nome, :telefone, :email)");
    }
    else                            //contato selecionado: atualiza (o 'Login = :login' impede alterar contato de outro usuário)
    {
        salvar.prepare("update contatos set Nome = :nome, Telefone = :telefone, Email = :email where id = :id and Login = :login");
        salvar.bindValue(":id", idSelecionado);
    }
    salvar.bindValue(":login", login);
    salvar.bindValue(":nome", nome);
    salvar.bindValue(":telefone", telefone);
    salvar.bindValue(":email", email);

    if(!salvar.exec())
    {
        QMessageBox::critical(this, "Erro", "Não foi possível salvar o contato!");
        return;
    }

    QString mensagem = idSelecionado < 0 ? "Contato adicionado!" : "Contato atualizado!";
    limparCampos();
    carregarContatos();
    ui->label_status->setText(mensagem + " " + ui->label_status->text());
    ui->lineEdit_nome->setFocus();
}


void form_principal::on_pushButton_excluir_clicked()       //botão excluir
{
    if(idSelecionado < 0)
    {
        return;
    }

    QMessageBox::StandardButton resposta = QMessageBox::question(this, "Excluir contato",
        "Deseja excluir o contato \"" + ui->lineEdit_nome->text() + "\"?",
        QMessageBox::Yes | QMessageBox::No, QMessageBox::No);       //o botão padrão é 'No', para evitar exclusões acidentais
    if(resposta != QMessageBox::Yes)
    {
        return;
    }

    QSqlQuery excluir;
    excluir.prepare("delete from contatos where id = :id and Login = :login");
    excluir.bindValue(":id", idSelecionado);
    excluir.bindValue(":login", login);
    if(!excluir.exec())
    {
        QMessageBox::critical(this, "Erro", "Não foi possível excluir o contato!");
        return;
    }

    limparCampos();
    carregarContatos();
    ui->label_status->setText("Contato excluído! " + ui->label_status->text());
}


void form_principal::on_lineEdit_busca_textChanged(const QString &texto)      //a busca é feita a cada letra digitada
{
    Q_UNUSED(texto);
    carregarContatos();
}
