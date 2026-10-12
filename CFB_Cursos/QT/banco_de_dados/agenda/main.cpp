#include "janelalogin.h"

#include <QApplication>

//necessário acresecentar 'sql' após a linha 'QT       += core gui', no arqivo .pro. Feito isso dar inicio no 'run qmaker'
//necessário adicionar algumas bibliotecas no arquivo .h

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setApplicationName("agenda");         //nome usado na pasta de dados do usuário, onde fica o banco (%APPDATA%/agenda)
    JanelaLogin w;
    w.show();
    return a.exec();
}
