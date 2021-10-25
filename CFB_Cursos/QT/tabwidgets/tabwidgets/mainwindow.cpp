#include "mainwindow.h"
#include "ui_mainwindow.h"

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


void MainWindow::on_tabWidget_tabCloseRequested(int index)          //a opção 'tabsclosable' deve estar habilitada
{
    ui->tabWidget->removeTab(2);        //'2' é o valor da terceira guia (currentindex, encotrado em qtabwidget)
}


void MainWindow::on_pushButton_clicked()
{
    int nuntabs = ui->tabWidget->count() + 1;       //retorna a quantidade de tabs existentes
    QString ntabs = QString::number(nuntabs);           //converte um inteiro em Qstring
    ui->tabWidget->addTab(new QWidget(), "nova aba: " + ntabs);       //adiciona uma nova tab
}


void MainWindow::on_pushButton_2_clicked()
{
    ui->tabWidget->removeTab(ui->tabWidget->currentIndex());     //remove a tab selecionada (currentIndex())
}

