#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->statusbar->addPermanentWidget(ui->pushButton_limpar);        //Deixa o botão "Limpar" permanentemente na barra de estatus

}

MainWindow::~MainWindow()
{
    delete ui;

}


void MainWindow::on_pushButton_ok_clicked()         //botão Ok
{
    QString nome, idade;
    nome = ui->lineEdit_Nome->text();
    idade = ui->lineEdit_Idade->text();

    ui->statusbar->showMessage("Nome: " + nome + "| Idade: " + idade);             //mostra na barra de estado

}


void MainWindow::on_pushButton_limpar_clicked()
{
     ui->statusbar->showMessage("");             //limpa a barra de estado
}

