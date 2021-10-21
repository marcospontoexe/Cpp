#include "janela.h"
#include "ui_janela.h"

janela::janela(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::janela)
{
    ui->setupUi(this);
}

janela::~janela()
{
    delete ui;
}
