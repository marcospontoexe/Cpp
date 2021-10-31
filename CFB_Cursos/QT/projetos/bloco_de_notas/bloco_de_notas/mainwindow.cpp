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
    QString filtro = "Todos arquivos (*.*) ;; Arquivos de texto (*.txt)";
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


void MainWindow::on_actionSalvar_como_triggered()           //botão de salvar como
{
    QString tipo = "Arquivos de texto (*.txt)";         //habilita a opção de salvar como .txt
    QString nome_arquivo = QFileDialog::getSaveFileName(this, "Salvar como", "C://", tipo); //abre uma caixa de diálogo com o local e nome onde deseja salvar o arquivo
    QFile arquivo(nome_arquivo);
    local = nome_arquivo;
    if(!arquivo.open(QFile::WriteOnly | QFile::Text))      //retorna true (!) caso não consiga abrir o arquivo de texto (QFile::Text), como modo de escrita (QFile::ReadOnly)
    {
        QMessageBox::warning(this, "ERRO!", "O arquivo não pode ser salvo!");
        return;     //finaliza a aplicação
    }
    QTextStream saida(&arquivo);            //assossia o objeto 'saida' ao aobjeto 'arquivo'
    QString texto = ui->textEdit->toPlainText();       //'texto' recebe a string escrita no 'TextEdit'. toPlainText() converte de 'plainTextEdit
    saida << texto;        //adiciona no arquivo 'saida'
    arquivo.flush();                 //faz a confirmação da operação
    arquivo.close();            //fecha o arquivo

}


void MainWindow::on_actionSalvar_triggered()           //botão de salvar
{
    QFile arquivo(local);
    if(!arquivo.open(QFile::WriteOnly | QFile::Text))      //retorna true (!) caso não consiga abrir o arquivo de texto (QFile::Text), como modo de escrita (QFile::ReadOnly)
    {
        QMessageBox::warning(this, "ERRO!", "O arquivo não pode ser salvo!");
        return;     //finaliza a aplicação
    }
    QTextStream saida(&arquivo);            //assossia o objeto 'saida' ao aobjeto 'arquivo'
    QString texto = ui->textEdit->toPlainText();       //'texto' recebe a string escrita no 'TextEdit'. toPlainText() converte de 'plainTextEdit
    saida << texto;        //adiciona no arquivo 'saida'
    arquivo.flush();                 //faz a confirmação da operação
    arquivo.close();
}


void MainWindow::on_actionFechar_triggered()        //botão fechar
{
    close();        //fecha a aplicação
}


void MainWindow::on_actionCopiar_triggered()            //botão copiar
{
    ui->textEdit->copy();               //copia oque esta escrito no textedit
}


void MainWindow::on_actionRecortar_triggered()           //botão recortar
{
    ui->textEdit->cut();                //recorta oque esta escrito no textedit
}


void MainWindow::on_actionColar_triggered()                 //botão colar
{
    ui->textEdit->paste();              //cola dentro do textedit
}


void MainWindow::on_actionDesfazer_triggered()              //botão desfazer
{
    ui->textEdit->undo();
}


void MainWindow::on_actionRefazer_triggered()               //botão refazer
{
    ui->textEdit->redo();
}

