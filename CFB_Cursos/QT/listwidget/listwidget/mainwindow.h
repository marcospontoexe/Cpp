#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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
    void on_pushButton_Adicionar_clicked();

    void on_pushButton_Add_clicked();

    void on_pushButton_Marcar_clicked();

    void on_pushButton_Desmarcar_clicked();

    void on_pushButton_desmarcarGeral_clicked();

    void on_pushButton_Apagar_geral_clicked();

    //void on_pushButton_Apagar_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
