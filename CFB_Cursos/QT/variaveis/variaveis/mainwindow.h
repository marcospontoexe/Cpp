//Reconstruído em 2026 a partir dos arquivos gerados na pasta build (o código original foi perdido).

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
    void on_btn_salvar_clicked();

    void on_btn_limpar_clicked();

private:
    Ui::MainWindow *ui;

    QString nome;           //variáveis da classe: guardam os valores salvos enquanto a janela estiver aberta
    int idade = 0;
    double peso = 0;
};
#endif // MAINWINDOW_H
