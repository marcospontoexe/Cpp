//Reconstruído em 2026 a partir dos arquivos gerados na pasta build (o código original foi perdido).

#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>

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


void MainWindow::on_btn_salvar_clicked()        //botão salvar
{
    bool idade_ok, peso_ok;
    nome = ui->txt_nome->text();                                            //o texto da lineEdit já é uma QString
    idade = ui->txt_idade->text().toInt(&idade_ok);                         //converte QString para int; 'idade_ok' recebe false se não for um número
    peso = ui->txt_peso->text().replace(',', '.').toDouble(&peso_ok);       //converte QString para double, aceitando vírgula

    if(!idade_ok || !peso_ok)
    {
        QMessageBox::warning(this, "Erro", "Idade e peso precisam ser números!");
        return;
    }

    //QString::number() faz o caminho inverso: converte número para QString
    QMessageBox::information(this, "Variáveis salvas",
                             "Nome: " + nome +
                             "\nIdade: " + QString::number(idade) + " anos" +
                             "\nPeso: " + QString::number(peso) + " kg");
    ui->statusbar->showMessage("Dados de " + nome + " salvos!");
}


void MainWindow::on_btn_limpar_clicked()        //botão limpar
{
    ui->txt_nome->clear();
    ui->txt_idade->clear();
    ui->txt_peso->clear();
    ui->statusbar->clearMessage();
    ui->txt_nome->setFocus();
}
