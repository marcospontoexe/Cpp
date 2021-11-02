#include "mainwindow.h"

#include <QApplication>
#include <QSplashScreen>                //biblioteca
#include <QTimer>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QSplashScreen *tela = new QSplashScreen;            //declaração do objeto tela
    tela->setPixmap(QPixmap(":/imagens/foto.png"));
    tela->show();

    MainWindow w;
    QTimer::singleShot(2000, tela, SLOT(close()));               //fecha a tela após 2 segundos
    QTimer::singleShot(2000, &w, SLOT(show()));               //após 2 segundos abre a tela do main window (w)


    //w.show();
    return a.exec();
}
