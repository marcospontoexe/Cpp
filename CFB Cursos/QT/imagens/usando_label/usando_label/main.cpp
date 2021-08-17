//inserindo imagem atravez do pixmap (ferramento do QLabel)
//marcar a opção Scaledcontents (ferramento do QLabel) deixa a imagem escalável
#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
