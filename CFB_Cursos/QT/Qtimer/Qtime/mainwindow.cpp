#include "mainwindow.h"
#include "ui_mainwindow.h"

int cont = 0;          //variável global

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    tempo = new QTimer(this);        //instanciando o objeto 'tempo'
    connect(tempo, SIGNAL(timeout()), this, SLOT(funcaoTempo()));            //conxão entr um sinal e um slot
    tempo->start(1000);                 // a função 'funcaoTempo' é executada a cada 1 segundo.
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::funcaoTempo()
{
    ui->textEdit->setText(QString::number(cont));
    cont++;
}

