#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>

QVector<int> marcados;              //qvector do tipo int


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


void MainWindow::on_pushButton_Adicionar_clicked()
{
    ui->listWidget->addItem(ui->lineEdit->text());              //adiciona a string do lineedite para o listwidget
    ui->lineEdit->clear();                                      //limpa o line edite
    ui->lineEdit->setFocus();                                   //posiciona o cursor do mouse no lineedite
}


void MainWindow::on_pushButton_Add_clicked()
{
    QListWidgetItem *comida1=new QListWidgetItem("Arroz");          //cria um objeto na classe QListWidGet
    QListWidgetItem *comida2=new QListWidgetItem("Feijão");
    QListWidgetItem *comida3=new QListWidgetItem("Carne");
    QListWidgetItem *comida4=new QListWidgetItem("Suco");
    QListWidgetItem *comida5=new QListWidgetItem("Macarrão");

    ui->listWidget->addItem(comida1);
    ui->listWidget->addItem(comida2);
    ui->listWidget->addItem(comida3);
    ui->listWidget->addItem(comida4);
    ui->listWidget->addItem(comida5);
}


void MainWindow::on_pushButton_Marcar_clicked()
{
    ui->listWidget->currentItem()->setForeground(Qt::lightGray);        //deixa a cor de 1° plano em cinza do item selecionado
    ui->listWidget->currentItem()->setBackground(Qt::darkGreen);        //deixa a cor de fundo em verde do item selecionado
    marcados.push_back(ui->listWidget->currentRow());                   //adiciona a posição atual do item selecionado da listwidget
    qDebug() << "Itens marcados: " << marcados;
}


void MainWindow::on_pushButton_Desmarcar_clicked()
{
    ui->listWidget->currentItem()->setForeground(Qt::black);
    ui->listWidget->currentItem()->setBackground(Qt::white);
    marcados.erase(marcados.begin()+ui->listWidget->currentRow());
    qDebug() << "Itens marcados: " << marcados;
}


void MainWindow::on_pushButton_desmarcarGeral_clicked()
{
    while(!marcados.empty())
    {
        ui->listWidget->setCurrentRow(marcados.last());              //seleciona o ultimo item marcado da lista
        ui->listWidget->currentItem()->setForeground(Qt::black);
        ui->listWidget->currentItem()->setBackground(Qt::white);
        marcados.pop_back();                                         //exclui o item do vetor "marcados"
        qDebug() << "Itens marcados: " << marcados;
    }
}


void MainWindow::on_pushButton_Apagar_geral_clicked()
{
    ui->listWidget->clear();                //apaga todos os itens da listwidget
}


void MainWindow::on_pushButton_Apagar_clicked()
{
    //ui->listWidget->currentItem()->removeItemWidget();
    QListWidget::removeItemWidget(ui->listWidget->currentItem());

}

