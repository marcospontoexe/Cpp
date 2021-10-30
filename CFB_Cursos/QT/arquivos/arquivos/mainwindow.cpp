#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>        //biblioteca para manipular arquivos
#include <QTextStream>      //biblioteca para manipular arquivo para o 'plainTextEdit'
#include <QFileDialog>
#include <QMessageBox>

QString local = "C:/Users/marco/Documents/GitHub/Repositorios/Cpp/CFB_Cursos/QT/arquivos/testes/";   //substituir as barras por contra-barras
QString nome = "testando.txt";

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


void MainWindow::on_pushButton_gravar_clicked()
{
    QFile arquivo(local+nome);
    //QFile::Append anexa ao arquivo, ao invez de limpar o conteudo antigo e gravar o novo
    if(!arquivo.open(QFile::WriteOnly | QFile::Text))      //retorna true (!) caso não consiga abrir o arquivo de texto (QFile::Text), como modo de leitura (QFile::WriteOnly)
    {
        QMessageBox::warning(this, "ERRO!", "Não foi possível abrir o arquivo!");
    }
    QTextStream saida(&arquivo);            //assossia o objeto 'saida' ao aobjeto 'arquivo'
    QString texto = ui->plainTextEdit->toPlainText();             //'texto' recebe a string escrita no 'plainTextEdit'. toPlainText() converte de 'plainTextEdit' para string
    saida << texto;        //adiciona no arquivo 'saida'
    arquivo.flush();                 //faz a confirmação da operação
    arquivo.close();            //fecha o arquivo
    ui->plainTextEdit->clear();                 //limpa a tela do 'plainTextEdit'
}


void MainWindow::on_pushButton_ler_clicked()
{
    QFile arquivo(local+nome);
    if(!arquivo.open(QFile::ReadOnly | QFile::Text))      //retorna true (!) caso não consiga abrir o arquivo de texto (QFile::Text), como modo de leitura (QFile::ReadOnly)
    {
        QMessageBox::warning(this, "ERRO!", "Não possível abrir o arquivo!");
    }
    QTextStream entrada(&arquivo);            //assossia o objeto 'entrada' ao aobjeto 'arquivo'
    QString texto = entrada.readAll();             //'texto' recebe todo o conteudo do arquivo aberto
    ui->plainTextEdit->setPlainText(texto);        //mostra o conteudo da string 'texto' na tela do 'plainTextEdit'
    arquivo.close();            //fecha o arquivo
}


void MainWindow::on_pushButton_abrir_clicked()
{
    QString tipo_arquivos = "Todos arquivos (*.*) ;; Arquivos de texto (*.txt) ;; arquivos de word (*.doc)";
    QString abrir_arquivo = QFileDialog::getOpenFileName(this, "Abrir arquivo", "C://", tipo_arquivos); //retorna o local e nome do arquivo contidos no 'C:'
    QFile arquivo(abrir_arquivo);
    if(!arquivo.open(QFile::ReadOnly | QFile::Text))      //retorna true (!) caso não consiga abrir o arquivo de texto (QFile::Text), como modo de leitura (QFile::ReadOnly)
    {
        QMessageBox::warning(this, "ERRO!", "Não possível abrir o arquivo!");
    }
    QTextStream entrada(&arquivo);            //assossia o objeto 'entrada' ao aobjeto 'arquivo'
    QString texto = entrada.readAll();             //'texto' recebe todo o conteudo do arquivo aberto
    ui->plainTextEdit->setPlainText(texto);        //mostra o conteudo da string 'texto' na tela do 'plainTextEdit'
    arquivo.close();            //fecha o arquivo

}

