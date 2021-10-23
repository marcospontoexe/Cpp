#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QPixmap>          //biblioteca

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPixmap img(":/imagens/imagens/foto.png");             //Criação do objeto, com o caminho do arquivo
    ui->label_2->setPixmap(img);                         //insirir a imagem no label_2
}

MainWindow::~MainWindow()
{
    delete ui;
}

