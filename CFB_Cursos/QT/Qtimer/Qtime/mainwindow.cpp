#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDateTime>                    //biblioteca para trabalhar com da e hora

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    tempo = new QTimer(this);        //instanciando o objeto 'tempo'
    connect(tempo, SIGNAL(timeout()), this, SLOT(relogio()));            //conxão entr um sinal e um slot
    tempo->start(1000);                 //dispara o sinal 'tempo' a cada 1 segundo, executando a função 'funcaoTempo'.
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::relogio()
{
    QTime tempoatual = QTime::currentTime();        //retorna o tempo do sistema operacional
    QString data = tempoatual.toString("hh:mm:ss");       //converte de QString para QString
    ui->textEdit->setText(data);

}

