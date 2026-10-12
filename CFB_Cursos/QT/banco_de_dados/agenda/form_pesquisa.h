#ifndef FORM_PESQUISA_H
#define FORM_PESQUISA_H

#include <QDialog>

namespace Ui {
class form_pesquisa;
}

class form_pesquisa : public QDialog
{
    Q_OBJECT

public:
    explicit form_pesquisa(QWidget *parent = nullptr);
    ~form_pesquisa();

private slots:
    void on_pushButton_buscar_clicked();

private:
    Ui::form_pesquisa *ui;
    void carregarUsuarios(const QString &filtro);      //preenche a tabela com os usuários que contêm 'filtro' no nome ou no login
};

#endif // FORM_PESQUISA_H
