#include "janelalogin.h"

#include <QApplication>

//necessário acresecentar 'sql' após a linha 'QT       += core gui', no arqivo .pro. Feito isso dar inicio no 'run qmaker'
//necessário adicionar algumas bibliotecas no arquivo .h

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    JanelaLogin w;
    w.show();
    return a.exec();
}
