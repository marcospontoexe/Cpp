//Reconstruído em 2026 a partir dos arquivos gerados na pasta build (o código original foi perdido).

#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>
#include <QLocale>          //formatação de números no padrão brasileiro

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


void MainWindow::on_btn_imc_clicked()           //botão IMC
{
    QString nome = ui->txt_nome->text().trimmed();
    bool peso_ok, altura_ok;
    double peso = ui->txt_peso->text().replace(',', '.').toDouble(&peso_ok);          //aceita vírgula ou ponto; 'peso_ok' recebe false se o texto não for um número
    double altura = ui->txt_altura->text().replace(',', '.').toDouble(&altura_ok);

    if(!peso_ok || !altura_ok || peso <= 0 || altura <= 0)
    {
        QMessageBox::warning(this, "Erro", "Digite o peso (kg) e a altura (m) com números positivos.");
        return;
    }
    if(altura > 3)          //altura digitada em centímetros (ex.: 175): converte para metros
    {
        altura = altura / 100;
    }

    double imc = peso / (altura * altura);          //IMC = peso / altura²

    QString classificacao;          //faixas da Organização Mundial da Saúde
    if(imc < 18.5)
        classificacao = "Abaixo do peso";
    else if(imc < 25)
        classificacao = "Peso normal";
    else if(imc < 30)
        classificacao = "Sobrepeso";
    else if(imc < 35)
        classificacao = "Obesidade grau I";
    else if(imc < 40)
        classificacao = "Obesidade grau II";
    else
        classificacao = "Obesidade grau III";

    QString valor = QLocale(QLocale::Portuguese, QLocale::Brazil).toString(imc, 'f', 1);       //formata com vírgula decimal (ex.: 22,9)
    QString saudacao = nome.isEmpty() ? "" : nome + ", ";
    QMessageBox::information(this, "Resultado",
                             saudacao + "seu IMC é " + valor + "\nClassificação: " + classificacao);
    ui->statusbar->showMessage("IMC: " + valor + " (" + classificacao + ")");     //mostra também na barra de status
}


void MainWindow::on_ptb_limpar_clicked()        //botão limpar
{
    ui->txt_nome->clear();
    ui->txt_peso->clear();
    ui->txt_altura->clear();
    ui->statusbar->clearMessage();
    ui->txt_nome->setFocus();
}
