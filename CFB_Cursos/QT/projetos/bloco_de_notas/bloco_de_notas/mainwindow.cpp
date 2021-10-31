#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->setCentralWidget(ui->textEdit);       //faz o textEdit ocupar toda a área da lista
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionbrir_triggered()
{
    QString filtro = "Todos arquivos (*.*) ;; Arquivos de texto (*.txt) ;; Arquivos Word (*.doc)";
    QString nome_arquivo = QFileDialog::getOpenFileName(this, "Abrir arquivo", "C://", filtro); //abre uma caixa de diálogo com o local e nome do arquivo contidos no 'C:'
    QFile arquivo(nome_arquivo);
    local = nome_arquivo;
    if(!arquivo.open(QFile::ReadOnly | QFile::Text))      //retorna true (!) caso não consiga abrir o arquivo de texto (QFile::Text), como modo de leitura (QFile::ReadOnly)
    {
        QMessageBox::warning(this, "ERRO!", "Não possível abrir o arquivo!");
        return;     //finaliza a aplicação
    }
    QTextStream entrada(&arquivo);            //assossia o objeto 'entrada' ao aobjeto 'arquivo'
    QString texto = entrada.readAll();             //'texto' recebe todo o conteudo do arquivo aberto
    ui->textEdit->setText(texto);        //mostra o conteudo da string 'texto' na tela do 'plainTextEdit'
    arquivo.close();            //fecha o arquivo
}


void MainWindow::on_actionNovo_triggered()
{
    local = "";                  //limpa a variável global
    ui->textEdit->clear();      //limpa a tela do textedit
    ui->textEdit->setFocus();   //posiciona o mouse na tela do textedit
}

