#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>            //declaração global

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void relogio();     //função

private:
    Ui::MainWindow *ui;
    QTimer *tempo;              //declaração do objeto 'tempo'
};
#endif // MAINWINDOW_H
