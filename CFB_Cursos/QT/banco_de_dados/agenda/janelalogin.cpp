#include "janelalogin.h"
#include "ui_janelalogin.h"
#include <QMessageBox>      //classe para caixa de mensagem
#include <QStandardPaths>   //classe que informa as pastas padrão do sistema (dados do usuário, documentos...)
#include <QDir>
#include "form_pesquisa.h"
#include "senha.h"          //funções de hash da senha


JanelaLogin::JanelaLogin(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::JanelaLogin)
{
    ui->setupUi(this);

    //o banco fica na pasta de dados do usuário (no Windows: %APPDATA%/agenda), assim funciona em qualquer computador
    QString pasta = QStandardPaths::writableLocation(QStandardPaths::AppDataLocation);
    QDir().mkpath(pasta);           //cria a pasta caso ainda não exista

    QSqlDatabase bancoDeDados = QSqlDatabase::addDatabase("QSQLITE");      //o objeto 'bancoDeDados' recebe o tipo de banco de dados a ser trabalhado (SQLite)
    bancoDeDados.setDatabaseName(pasta + "/logs.db");                      //caso o arquivo não exista, o SQLite cria um novo
    //.open(), abre o banco de dados
    if(!bancoDeDados.open())        //caso consiga abrir o banco de dados retorna true
    {
        ui->textEdit->setText("Não foi possível abrir o banco de dados!");
        return;
    }

    QSqlQuery criaTabela;
    criaTabela.exec("create table if not exists logs (Nome VARCHAR (30), Login VARCHAR (30), Senha TEXT, Acesso VARCHAR (1))");     //cria a tabela de usuários na primeira execução
    criaTabela.exec("create table if not exists contatos (id INTEGER PRIMARY KEY AUTOINCREMENT, Login TEXT NOT NULL, "
                    "Nome TEXT NOT NULL, Telefone TEXT, Email TEXT)");          //cada contato pertence ao usuário (Login) que o cadastrou
    ui->textEdit->setText("Banco de dados aberto com sucesso!");
}

JanelaLogin::~JanelaLogin()
{
    delete ui;
}


void JanelaLogin::on_pushButton_log_clicked()               //botão entrar
{
    QString login = ui->lineEdit_log->text().trimmed();
    QString senha = ui->lineEdit_senha->text();

    if(!QSqlDatabase::database().isOpen())
    {
        ui->textEdit->setText("Não foi possível abrir o banco de dados!");
        return;
    }

    QSqlQuery consulta;
    consulta.prepare("select Nome, Senha from logs where Login = :login");      //':login' é um parâmetro: o texto digitado nunca vira parte do comando SQL (evita SQL injection)
    consulta.bindValue(":login", login);                                  //associa o valor digitado ao parâmetro ':login'
    if(!consulta.exec())
    {
        ui->textEdit->setText("Erro ao consultar o banco de dados!");
        return;
    }

    if(consulta.next() && Senha::verificar(senha, consulta.value(1).toString()))       //'next()' retorna true se encontrou o login; depois compara a senha com o hash salvo
    {
        QString nome = consulta.value(0).toString();
        this->close();                       //fecha a janela_login
        form_principal janela_principal(nome, login);       //a janela principal mostra apenas os contatos deste usuário
        janela_principal.setModal(true);
        janela_principal.exec();
    }
    else
    {
        ui->textEdit->setText("Usuário e senha não encontrados!");
        ui->lineEdit_log->clear();
        ui->lineEdit_senha->clear();
        ui->lineEdit_log->setFocus();
    }
}


void JanelaLogin::on_pushButton_cadastrar_clicked()         //botão para cadastrar novo login
{
    QString nome = ui->lineEdit_nome->text().trimmed();
    QString login = ui->lineEdit_log->text().trimmed();
    QString senha = ui->lineEdit_senha->text();

    if(nome.isEmpty() || login.isEmpty() || senha.isEmpty())
    {
        ui->textEdit->setText("Preencha nome, login e senha para cadastrar!");
        return;
    }

    QSqlQuery existe;
    existe.prepare("select count(*) from logs where Login = :login");     //verifica se o login já está em uso
    existe.bindValue(":login", login);
    if(existe.exec() && existe.next() && existe.value(0).toInt() > 0)
    {
        ui->textEdit->setText("Este login já está cadastrado!");
        ui->lineEdit_log->setFocus();
        return;
    }

    QSqlQuery adiciona;
    adiciona.prepare("insert into logs (Nome, Login, Senha) values (:nome, :login, :senha)");      //insere valores na tabela 'logs' usando parâmetros
    adiciona.bindValue(":nome", nome);
    adiciona.bindValue(":login", login);
    adiciona.bindValue(":senha", Senha::gerarHash(senha));       //salva apenas o hash, nunca a senha digitada
    if(adiciona.exec())        //'adiciona.exec' executa a query 'adiciona.prepare()'
    {
        ui->textEdit->setText("Login inserido com sucesso!");
        ui->lineEdit_nome->clear();
        ui->lineEdit_log->clear();
        ui->lineEdit_senha->clear();
        ui->lineEdit_log->setFocus();
    }
    else
    {
        QMessageBox::critical(this, "Erro", "Não foi possível cadastrar o login!");
    }
}


void JanelaLogin::on_pushButton_pesquisar_clicked()     //botão para pesquisar na tabela
{
    form_pesquisa pesquisa(this);
    pesquisa.exec();        //abre o form 'form_pesquisa'
}
