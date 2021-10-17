#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>                  //biblioteca

QString msg ="", m1, m2, m3;            //variável global

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


void MainWindow::on_pushButton_clicked()        //botão selecionadas
{
    msg ="";
    bool box_1, box_2, box_3;
    box_1 = ui->checkBox_1->isChecked();          //verifica se a cheeckBox_1 está selecionada
    box_2 = ui->checkBox_2->isChecked();
    box_3 = ui->checkBox_3->isChecked();
    if (box_1)
    {
        msg += " checkBox_1 selecionada";       //caso a checkBox_1 esteja selecionada
    }
    if (box_2)
    {
        msg += ", checkBox_2 selecionada";       //caso a checkBox_2 esteja selecionada
    }
    if (box_3)
    {
        msg += ", checkBox_3 selecionada";       //caso a checkBox_3 esteja selecionada
    }

    QMessageBox::information(this, "cheekBoxes selecionadas", msg);


}


void MainWindow::on_pushButton_2_clicked()      //notão "2° maneira"
{
    bool cx[3];                             //vetor boleano com três índices
    cx[0] = ui->checkBox_1->isChecked();
    cx[1] = ui->checkBox_2->isChecked();
    cx[2] = ui->checkBox_3->isChecked();
    msg = "";
    for(int i=0; i<3; i++)
    {
        if(cx[i])
        {
            msg += " checkBox_" + QString::number(i+1) + " selecionada";
        }
    }
    QMessageBox::information(this, "cheekBoxes selecionadas", msg);
}


void MainWindow::on_checkBox_1_stateChanged(int arg1)         //arg1=1 caso a caixa esteja marcada,  arg1=0 caso contrário
{
    if(arg1)
    {
        m1 = " checkBox_1 marcada ";
    }
    else
    {
        m1 = "";
    }
}


void MainWindow::on_pushButton_3_clicked()
{
    msg = m1 + m2 + m3;

    QMessageBox::information(this, "cheekBoxes selecionadas", msg);

}


void MainWindow::on_checkBox_2_stateChanged(int arg1)
{
    if(arg1)
    {
        m2 = " checkBox_2 marcada ";
    }
    else
    {
        m2 = "";
    }
}


void MainWindow::on_checkBox_3_stateChanged(int arg1)
{
    if(arg1)
    {
        m3 = " checkBox_3 marcada ";
    }
    else
    {
        m3 = "";
    }
}

