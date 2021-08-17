#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>          //biblioteca

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
    QString msg, cor = "", transporte = "", comida = "";
    int ntransp;
    msg = "";

    if(ui->radioButton_vermelho->isChecked())
    {
        cor = "vermelho";
    }
    else if(ui->radioButton_verde->isChecked())
    {
        cor = "verde";
    }
    else if(ui->radioButton_azul->isChecked())
    {
        cor = "azul";
    }

    if(ui->radioButton_aviao->isChecked())
    {
        ntransp = 1;
    }
    else if(ui->radioButton_carro->isChecked())
    {
        ntransp = 2;
    }
    else if(ui->radioButton_navio->isChecked())
    {
        ntransp = 3;
    }

    switch (ntransp)
    {
        case 1:
            transporte = "avião";
        break;
        case 2:
            transporte = "carro";
        break;
        case 3:
            transporte = "navio";
        break;
        default:
            transporte = "";
    }

    QVector<bool>rango;               //qvector
    rango.push_back(ui->radioButton_pizza->isChecked());
    rango.push_back(ui->radioButton_arroz->isChecked());
    rango.push_back(ui->radioButton_fuba->isChecked());

    if(rango[0])
    {
        comida = "pizza";
    }
    if(rango[1])
    {
        comida = "arroz";
    }
    if(rango[2])
    {
        comida = "fuba";
    }

    msg = "Cor: " + cor + "\nTransporte: " + transporte + "\nComida: " + comida;
    QMessageBox::information(this, "Botões selecionados;", msg);
}

