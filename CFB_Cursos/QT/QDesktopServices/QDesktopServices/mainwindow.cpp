#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDesktopServices>         //para abrir aplicações do sistema opeacional
#include <QUrl>                     //manipula tipos de programas (aplicações, pagina de internet...)

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


void MainWindow::on_pushButton_clicked()        //abre o site do youtube
{
    QString link = "http://www.youtube.com.br";
    QUrl endereco(link);                            //passa uma string para o QUrl
    QDesktopServices::openUrl(endereco);
}


void MainWindow::on_pushButton_2_clicked()          //abre o bloco de notas do windows
{
    QString caminho = "file:///C:/Windows/notepad";
    QUrl endereco(caminho);                            //passa uma string para o QUrl
    QDesktopServices::openUrl(endereco);
}


void MainWindow::on_pushButton_3_clicked()          //abre a calculadora do windows
{
    QString caminho = "file:///C:/Windows/System32/calc.exe";
    QUrl endereco(caminho);                            //passa uma string para o QUrl
    QDesktopServices::openUrl(endereco);
}

