//Reconstruído em 2026 a partir dos arquivos gerados na pasta build (o código original foi perdido).

#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QPixmap>          //classe para trabalhar com imagens

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


void MainWindow::on_pushButton_clicked()        //botão mostrar
{
    QPixmap foto(":/foto.png");         //':/' indica que a imagem está no arquivo de recursos (recursos.qrc), embutida no executável
    int largura = ui->label->width();
    int altura = ui->label->height();
    ui->label->setPixmap(foto.scaled(largura, altura, Qt::KeepAspectRatio, Qt::SmoothTransformation));       //ajusta a imagem ao tamanho da label sem distorcer
}
