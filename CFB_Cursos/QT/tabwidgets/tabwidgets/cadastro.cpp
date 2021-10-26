#include "cadastro.h"
#include "ui_cadastro.h"

cadastro::cadastro(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::cadastro)
{
    ui->setupUi(this);
}

cadastro::~cadastro()
{
    delete ui;
}
