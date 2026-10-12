//Reconstruído em 2026 a partir dos arquivos gerados na pasta build (o código original foi perdido).

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "janela2.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_PushButton_clicked();

private:
    Ui::MainWindow *ui;
    janela2 *form2 = nullptr;       //objeto "global" da classe: continua existindo depois que o slot termina
};
#endif // MAINWINDOW_H
