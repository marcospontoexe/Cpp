#ifndef JANELA_H
#define JANELA_H

#include <QDialog>

namespace Ui {
class janela;
}

class janela : public QDialog
{
    Q_OBJECT

public:
    explicit janela(QWidget *parent = nullptr);
    ~janela();

private:
    Ui::janela *ui;
};

#endif // JANELA_H
