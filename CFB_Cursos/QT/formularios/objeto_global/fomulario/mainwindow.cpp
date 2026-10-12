//Reconstruído em 2026 a partir dos arquivos gerados na pasta build (o código original foi perdido).

#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;          //'form2' não precisa de delete: como foi criado com 'this' como pai, o Qt o apaga junto com a janela principal
}


void MainWindow::on_PushButton_clicked()
{
    //diferente do exemplo 'objeto_local' (objeto local + exec()), aqui a janela é criada com 'new' e guardada num membro da classe.
    //com show() ela não é modal: a janela principal continua podendo ser usada enquanto a janela_2 está aberta.
    if(form2 == nullptr)
    {
        form2 = new janela2(this);
    }
    form2->show();
    form2->raise();         //traz a janela para frente caso já estivesse aberta
}
