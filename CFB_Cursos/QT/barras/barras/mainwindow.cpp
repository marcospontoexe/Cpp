#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "form_novo.h"              //inclusaão do novo form
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


void MainWindow::on_actionAbrir_triggered()         //opção abrir da barra de menus
{
    form_novo formulario;                           //declaração do objeto formulario
    formulario.exec();                              //execusão do formulario
}


void MainWindow::on_actionSalvar_triggered()
{
    QMessageBox::question(this, "Salvar", "Deseja Salvar", QMessageBox::Yes | QMessageBox::No);
}


void MainWindow::on_actionSair_triggered()
{
    QMessageBox::StandardButton sair;
    sair = QMessageBox::question(this, "Sair", "Deseja encerrar?", QMessageBox::Yes | QMessageBox::No);

    if(sair == QMessageBox::Yes)
    {
        //close();
        QApplication::quit();
    }

}

