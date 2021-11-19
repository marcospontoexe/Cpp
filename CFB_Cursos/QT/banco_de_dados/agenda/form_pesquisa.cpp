#include "form_pesquisa.h"
#include "ui_form_pesquisa.h"
#include "ui_janelalogin.h"
#include "janelalogin.h"
#include <QtSql>

form_pesquisa::form_pesquisa(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::form_pesquisa)
{
    ui->setupUi(this);

    QSqlQuery pesq;
    pesq.prepare("select * from logs");         //seleciona todos os elementos da table
    if(pesq.exec())
    {

    }
    else
    {
        ui->textEdit->setText("Erro ao pesquisar usuário!");
        ui->lineEdit_nome->clear();
        ui->lineEdit_nome->setFocus();
    }
}

form_pesquisa::~form_pesquisa()
{
    delete ui;
}
