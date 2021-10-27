#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDir"             //classe para manipulaçõa de diretorios

QString local = "C:/Users/marco/Documents/GitHub/Repositorios/Cpp/CFB_Cursos/QT/diretorios/testes";      //local onde serão armazenados os diretorios (substituir as barras por contra barra)

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QDir unidades;          //declaração do objeto 'unidades', da classe QDir
    foreach(QFileInfo discos ,unidades.drives())           //foreach(recebe os valores, aonde esta a coleção de dados)
    {
        ui->comboBox->addItem(discos.absoluteFilePath());            //aidciona as unidades de disco na combobox
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_comboBox_currentTextChanged(const QString &arg1)        //arg1 retorna uma string, com oq foi selecionado na combobox
{
    ui->listWidget->clear();                //apaga o conteudo da listwidget antes de imprimir
    QDir conteudo(arg1);
    foreach(QFileInfo discos ,conteudo.entryInfoList())           //foreach(recebe os valores, aonde esta a coleção de dados). entryInfoList buscao nome dos diretórios
    {
        if(discos.isDir())          //retorna true caso seja um diretorio
        {
            ui->listWidget->addItem("Pasta...: " + discos.absoluteFilePath());          //adiciona o caminho do diretorio na listwidget
        }
        else if(discos.isFile())          //retorna true caso seja um arquivo
        {
            ui->listWidget->addItem("Arquivo.: " + discos.absoluteFilePath());          //adiciona o caminho do arquivo na listwidget
        }

    }
}


