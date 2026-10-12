//Reconstruído em 2026 a partir dos arquivos gerados na pasta build (o código original foi perdido).
//Quatro formas de ligar um sinal (evento) a um slot (resposta):
//  1. pushButton:   conexão feita no Qt Designer (editor de sinais e slots), salva no arquivo mainwindow.ui
//  2. pushButton_2: conexão feita no código com connect(), nas macros SIGNAL() e SLOT()
//  3. pushButton_3: slot automático "Ir para slot...", pelo nome on_<objeto>_<sinal>()
//  4. pushButton_4: connect() com uma função lambda (anônima) no lugar do slot

#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);          //aqui o Qt já liga o pushButton ao close(), conforme definido no designer

    connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(close()));          //quando pushButton_2 emitir 'clicked', a janela executa 'close'

    connect(ui->pushButton_4, &QPushButton::clicked, this, [this]()         //sintaxe moderna: o compilador confere se o sinal existe
    {
        ui->label->setText("Texto alterado por uma lambda!");
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_3_clicked()
{
    close();        //fecha a janela
}
