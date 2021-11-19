#ifndef FORM_PESQUISA_H
#define FORM_PESQUISA_H

#include <QDialog>
#include "ui_janelalogin.h"
#include "janelalogin.h"

namespace Ui {
class form_pesquisa;
}

class form_pesquisa : public QDialog
{
    Q_OBJECT

public:
    explicit form_pesquisa(QWidget *parent = nullptr);
    ~form_pesquisa();

private:
    Ui::form_pesquisa *ui;
};

#endif // FORM_PESQUISA_H
