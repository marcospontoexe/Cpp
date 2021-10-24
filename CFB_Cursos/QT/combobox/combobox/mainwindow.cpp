#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>              //biblioteca

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QString comida[8] = {"Arroz","Feijão","Carne","Ovo","Macarrão","Sopa", "Pizza", "Sobremesa"};
    QString icones[8] = {":/new/comidas/img/arroz.jpg",":/new/comidas/img/feijao.png",":/new/comidas/img/carne.png",":/new/comidas/img/ovo.png",":/new/comidas/img/macarrao.jpg", ":/new/comidas/img/sopa.png",":/new/comidas/img/pizza.png",":/new/comidas/img/sobremesa.jpg"};
    for(int i=0; i<8; i++)
    {
        ui->comboBox->addItem(QIcon(icones[i]), comida[i]);          //adiciona icones e elementos no combobox
    }

    ui->comboBox->insertItem(8, QIcon(icones[1]), "Suco");          //insere um item na posição 8

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QString elemento = ui->comboBox->currentText();     //recebe o elemento selecionado
    QMessageBox::about(this, "Comida", elemento);                //mostra o elemento selecionado
}

