#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(mudatexto())); //definição da conexão entre botão e label

}

void MainWindow::mudatexto()   //declaração do método, entre construtor e destrutor
{
    ui->label->setText("Olá");
}


MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_2_clicked()
{
    ui->label_2->setText("Oi");
}

