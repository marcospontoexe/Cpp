#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->setCentralWidget(ui->textEdit);       //faz o textEdit ocupar toda a área da lista
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionbrir_triggered()
{

}


void MainWindow::on_actionNovo_triggered()
{
    local = "";                  //limpa a variável global
    ui->textEdit->clear();      //limpa a tela do textedit
    ui->textEdit->setFocus();   //posiciona o mouse na tela do textedit
}

