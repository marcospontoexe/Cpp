#ifndef FORM_NOVO_H
#define FORM_NOVO_H

#include <QDialog>

namespace Ui {
class form_novo;
}

class form_novo : public QDialog
{
    Q_OBJECT

public:
    explicit form_novo(QWidget *parent = nullptr);
    ~form_novo();

private:
    Ui::form_novo *ui;
};

#endif // FORM_NOVO_H
