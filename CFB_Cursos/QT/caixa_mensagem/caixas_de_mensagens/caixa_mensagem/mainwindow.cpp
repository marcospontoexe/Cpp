#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>      //classe para caixa de mensagem

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
    QMessageBox::about(this, "aviso", "aviso avisado");
}


void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox::aboutQt(this, "sobre o QT");
}


void MainWindow::on_pushButton_3_clicked()
{
    QMessageBox::critical(this, "Erro", "exemplo de erro");
}


void MainWindow::on_pushButton_4_clicked()
{
    QMessageBox::information(this, "Informação", "exemplo de info");
}


void MainWindow::on_pushButton_5_clicked()
{
    QMessageBox::question(this, "question", "Deseja continuar");
}


void MainWindow::on_pushButton_6_clicked()
{
     QMessageBox::warning(this, "perigo", "exemplo de warning");
}

