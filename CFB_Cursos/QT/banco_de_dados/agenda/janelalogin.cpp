#include "janelalogin.h"
#include "ui_janelalogin.h"
#include <QMessageBox>      //classe para caixa de mensagem
#include "form_pesquisa.h"

static QSqlDatabase bancoDeDados = QSqlDatabase::addDatabase("QSQLITE");      //o objeto 'bancoDeDados' recebe o tipo de banco de dados a ser trabalhado (Sq lite)


JanelaLogin::JanelaLogin(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::JanelaLogin)
{
    ui->setupUi(this);
    bancoDeDados.setDatabaseName("C:/Users/marco/Documents/GitHub/Repositorios/Cpp/CFB_Cursos/QT/banco_de_dados/data_base/logs.db");
    //.open(), abre o banco de deados
    if(!bancoDeDados.open())        //caso consiga abrir o banco de dados retorna true
    {
        ui->textEdit->setText("Não foi possível abrir o banco de dados!");
    }
    else
    {
         ui->textEdit->setText("Banco de dados aberto com sucesso!");
    }
}

JanelaLogin::~JanelaLogin()
{
    delete ui;
}


void JanelaLogin::on_pushButton_log_clicked()               //boão entrar
{

    QString nome = ui->lineEdit_log->text();
    QString senha = ui->lineEdit_senha->text();
    //.open(), abre o banco de deados
    if(!bancoDeDados.open())        //caso consiga abrir o banco de dados retorna true
    {
        ui->textEdit->setText("Não foi possível abrir o banco de dados!");
    }

    QSqlQuery consuta;
    if(consuta.exec("select * from logs where login = '"+nome+"' and senha = '"+senha+"'"))        //se o parametro de entrada obter um retorno válido, a função 'exec()' retorna true
    {

        int cont = 0;
        while(consuta.next())       //'consuta' está recebendo o resutado da função 'exec()'
        {
            cont++;
            ui->textEdit->setText("botão apertado!");
        }
        if(cont > 0)
        {
            this->close();                       //fecha a janela_login
            form_principal janela_principal;
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

}


void JanelaLogin::on_pushButton_cadastrar_clicked()         //botão para cadastrar novo login
{
    QString mone = ui->lineEdit_nome->text();
    QString log = ui->lineEdit_log->text();
    QString senha = ui->lineEdit_senha->text();
    QSqlQuery adiciona;
    adiciona.prepare("insert into logs (nome,login,senha) values" "('"+mone+"','"+log+"','"+senha+"')");     //isere valores na tabela 'logs'
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
        QMessageBox::critical(this, "Erro", "exemplo de erro");
    }
}


void JanelaLogin::on_pushButton_pesquisar_clicked()     //botão para pesquisar na table
{
    form_pesquisa pesquisa;
    pesquisa.exec();        //abre o form 'form_pesquisa'

}

