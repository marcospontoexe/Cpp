#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>
#include "janela.h"

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
    janela form2;       //declaração do atributo da classe janela


    QMessageBox::StandardButton resposta;
    resposta = QMessageBox::question(this, "Janela", "Deseja realmente abriar a janela?", QMessageBox::Yes | QMessageBox::No);

    if (resposta == QMessageBox::No)
    {
        QMessageBox::about(this, "Fim", "Até logo!");
        close();        //QApplication::quit(); também encerra a aplicação
    }
    else
    {
        QMessageBox::about(this, "Janela", "Janela aberta!");
        form2.exec();
    }
}

