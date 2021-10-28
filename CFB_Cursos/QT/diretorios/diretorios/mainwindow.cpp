#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDir"             //classe para manipulaçõa de diretorios
#include "QMessageBox"



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QDir unidades;          //declaração do objeto 'unidades', da classe QDir
    foreach(QFileInfo discos ,unidades.drives())           //retorna as unidades de disco. foreach(recebe os valores, aonde esta a coleção de dados)
    {
        ui->comboBox->addItem(discos.absoluteFilePath());            //aidciona na combobox, o caminho de cada unidade de disco
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_comboBox_currentTextChanged(const QString &arg1)        //arg1 retorna uma string, com oq foi selecionado na combobox
{
    ui->listWidget->clear();                //apaga o conteudo da listwidget antes de imprimir
    ui->listWidget->addItem(arg1);              //adiciona na listWidget, o caminho da unidade de disco
    QDir conteudo(arg1);
    foreach(QFileInfo discos ,conteudo.entryInfoList())           //foreach(recebe os valores, aonde esta a coleção de dados). entryInfoList busca o nome dos diretórios
    {
        if(discos.isDir())          //retorna true caso seja um diretorio
        {
            ui->listWidget->addItem(discos.absoluteFilePath());          //adiciona o caminho do diretorio na listwidget
        }
        /*
        else if(discos.isFile())          //retorna true caso seja um arquivo
        {
            ui->listWidget->addItem("Arquivo.: " + discos.absoluteFilePath());          //adiciona o caminho do arquivo na listwidget
        }
           */
    }
}



void MainWindow::on_pushButton_criar_clicked()          //botão de criar nava pasta
{
    QString local = ui->listWidget->currentItem()->text(); //local recebe uma string com o caminho selecionado na listWidget
    QString nome = ui->lineEdit->text();                //nome recebe a string escrita no line edite
    QDir novapasta(local + "/" + nome);             //o objeto "novapasta" recebe uma string
    if(novapasta.exists())              //true caso o diretorio ja esteja criado
    {
        QMessageBox::about(this, "Nova pasta", "A pasta já existe!");
    }
    else
    {
        novapasta.mkdir(local + "/" + nome);      //cria uma nova pasta com o nome da estring informada
        ui->listWidget->clear();                //apaga o conteudo da listwidget antes de imprimir
        ui->listWidget->addItem(ui->comboBox->currentText());      //adiciona na combobox, o caminho da unidade de disco
        QDir conteudo(ui->comboBox->currentText());
        foreach(QFileInfo discos ,conteudo.entryInfoList())           //foreach(recebe os valores, aonde esta a coleção de dados). entryInfoList buscao nome dos diretórios
        {
            if(discos.isDir())          //retorna true caso seja um diretorio
            {
                ui->listWidget->addItem(discos.absoluteFilePath());          //adiciona o caminho do diretorio na listwidget
            }
        }
    }

}

void MainWindow::on_pushButton_apagar_clicked()         //botão para remover a pasta selecionada
{
    QString local = ui->listWidget->currentItem()->text(); //local recebe uma string com o caminho selecionado na listWidget
    QDir novapasta(local);             //o objeto "novapasta" recebe uma string

    QMessageBox::StandardButton resposta = QMessageBox::question(this, "Apagar pasta", "Deseja MESMO EXCLUIR ESTA PASTA: " + local + "?", QMessageBox::Yes | QMessageBox::No);
    if(resposta == QMessageBox::Yes)
    {
        QMessageBox::about(this, "Apagar pasta", "Pasta '" + local + "' apagada com sucesso!");
        novapasta.rmdir(local);      //remove uma  pasta
        ui->listWidget->clear();                //apaga o conteudo da listwidget antes de imprimir
        ui->listWidget->addItem(ui->comboBox->currentText());      //adiciona na combobox, o caminho da unidade de disco
        QDir conteudo(ui->comboBox->currentText());
        foreach(QFileInfo discos ,conteudo.entryInfoList())           //foreach(recebe os valores, aonde esta a coleção de dados). entryInfoList buscao nome dos diretórios
        {
            if(discos.isDir())          //retorna true caso seja um diretorio
            {
                ui->listWidget->addItem(discos.absoluteFilePath());          //adiciona o caminho do diretorio na listwidget
            }
        }
    }
    else
    {
        QMessageBox::about(this, "Apagar pasta", "Solicitação cancelada!");
    }
}


void MainWindow::on_listWidget_doubleClicked(const QModelIndex &index)          //duplo clique em um item da listWidget
{
    QString subpasta = ui->listWidget->currentItem()->text(); //subpasta recebe uma string com o caminho selecionado na listWidget
    ui->listWidget->clear();                //apaga o conteudo da listwidget antes de imprimir
    ui->listWidget->addItem(subpasta);              //adiciona na listWidget, o caminho da unidade de disco
    QDir novasubpasta(subpasta);             //o objeto "novasubpasta" recebe uma string
    foreach(QFileInfo discos ,novasubpasta.entryInfoList())           //foreach(recebe os valores, aonde esta a coleção de dados). entryInfoList buscao nome dos diretórios
    {
        if(discos.isDir())          //retorna true caso seja um diretorio
        {
            ui->listWidget->addItem(discos.absoluteFilePath());          //adiciona o caminho do diretorio na listwidget
        }
    }
}



