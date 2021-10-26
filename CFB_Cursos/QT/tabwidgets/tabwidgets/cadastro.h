#ifndef CADASTRO_H
#define CADASTRO_H

#include <QWidget>

namespace Ui {
class cadastro;
}

class cadastro : public QWidget
{
    Q_OBJECT

public:
    explicit cadastro(QWidget *parent = nullptr);
    ~cadastro();

private:
    Ui::cadastro *ui;
};

#endif // CADASTRO_H
