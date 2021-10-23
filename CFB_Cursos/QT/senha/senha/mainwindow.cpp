#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>              //biblioteca

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->statusbar->showMessage("Usuário: marcos | Senha: 12345 ");                //mostra na barra de status
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()    //botão login
{  //habilitar a opção "Password" da confg EchoMode (QLineEdit), da LineEdit, para não aparecer os caracteres digitados
    QString senha = ui->lineEdit_senha->text();                //12345
    QString login = ui->lineEdit_login->text();               //marcos

    if(login == "marcos" && senha == "12345")
    {
        QMessageBox::information(this, "login", "Login realizado com sucesso!");
    }
    else
    {
        QMessageBox::warning(this, "Erro", "Dados incorretos, tente novamente! ");
    }

}

