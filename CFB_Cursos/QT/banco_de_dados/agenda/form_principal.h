#ifndef FORM_PRINCIPAL_H
#define FORM_PRINCIPAL_H

#include <QDialog>

namespace Ui {
class form_principal;
}

class form_principal : public QDialog
{
    Q_OBJECT

public:
    explicit form_principal(QWidget *parent = nullptr);
    ~form_principal();

private:
    Ui::form_principal *ui;
};

#endif // FORM_PRINCIPAL_H
