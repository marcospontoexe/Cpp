#include "janelalogin.h"
#include "ui_janelalogin.h"

JanelaLogin::JanelaLogin(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::JanelaLogin)
{
    ui->setupUi(this);

    QSqlDatabase bancoDeDados = QSqlDatabase::addDatabase("QSQLite");      //o objeto 'bancoDeDados' recebe o tipo de banco de dados a ser trabalhado (Sq lite)
    bancoDeDados.setDatabaseName("C:/Users/marco/Documents/GitHub/Repositorios/Cpp/CFB_Cursos/QT/banco_de_dados/data_base/banco.db");
    //.open(), abre o banco de deados
    if(bancoDeDados.open())        //caso consiga abrir o banco de dados retorna true
    {

    }
}

JanelaLogin::~JanelaLogin()
{
    delete ui;
}

