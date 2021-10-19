#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>      //Classe para usar message box
#include <QtDebug>          //biblioteca de debug

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QMessageBox::StandardButton resposta = QMessageBox::question(this, "Encerrar", "Deseja continuar?", QMessageBox::Yes | QMessageBox::No);

    if (resposta == QMessageBox::No)
    {
        QMessageBox::about(this, "Até logo", "Programa encerrado!");
        close();        //QApplication::quit(); também encerra a aplicação
    }
    else
    {
        QMessageBox::about(this, "Continuar", "O programa não foi encerrado!");
        qDebug() << "O programa não foi encerrado!";            //mostra a mensagem apenas na tela de debug do programador
    }
}

