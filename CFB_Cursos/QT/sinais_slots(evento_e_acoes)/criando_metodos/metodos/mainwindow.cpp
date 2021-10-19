#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(mudatexto())); //definição da conexão entre sinal e slot

}

void MainWindow::mudatexto()   //declaração do método, entre construtor e destrutor
{
    ui->label->setText("Olá");
}


void MainWindow::on_pushButton_2_clicked()
{
    ui->label_2->setText("Oi");
}


MainWindow::~MainWindow()
{
    delete ui;
}


