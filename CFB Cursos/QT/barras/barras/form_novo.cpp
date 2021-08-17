#include "form_novo.h"
#include "ui_form_novo.h"

form_novo::form_novo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::form_novo)
{
    ui->setupUi(this);
}

form_novo::~form_novo()
{
    delete ui;
}
