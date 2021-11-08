#ifndef JANELALOGIN_H
#define JANELALOGIN_H

#include <QMainWindow>
#include <QtSql>                    //bibliotaca para banco de dados
#include <QFileInfo>
#include "form_principal.h"          //inclusão do outro formulário. A abertura do formulário "form_principal" será abertar a partir deste formulário

QT_BEGIN_NAMESPACE
namespace Ui { class JanelaLogin; }
QT_END_NAMESPACE

class JanelaLogin : public QMainWindow
{
    Q_OBJECT

public:
    JanelaLogin(QWidget *parent = nullptr);
    ~JanelaLogin();

private slots:
    void on_pushButton_log_clicked();

private:
    Ui::JanelaLogin *ui;
};
#endif // JANELALOGIN_H
