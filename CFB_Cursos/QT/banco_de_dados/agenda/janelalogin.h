#ifndef JANELALOGIN_H
#define JANELALOGIN_H

#include <QMainWindow>
#include <QtSql>                    //bibliotaca para banco de dados
#include <QFileInfo>

QT_BEGIN_NAMESPACE
namespace Ui { class JanelaLogin; }
QT_END_NAMESPACE

class JanelaLogin : public QMainWindow
{
    Q_OBJECT

public:
    JanelaLogin(QWidget *parent = nullptr);
    ~JanelaLogin();

private:
    Ui::JanelaLogin *ui;
};
#endif // JANELALOGIN_H
