/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNovo;
    QAction *actionbrir;
    QAction *actionSalvar;
    QAction *actionSalvar_como;
    QAction *actionFechar;
    QAction *actionCopiar;
    QAction *actionRecortar;
    QAction *actionColar;
    QAction *actionDesfazer;
    QAction *actionRefazer;
    QAction *actionBloco_de_anota_es;
    QAction *actionFonte;
    QAction *actionCor;
    QAction *actionCor_de_fundo;
    QAction *actionImprimir;
    QWidget *centralwidget;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menuArquivo;
    QMenu *menuEditar;
    QMenu *menuSobre;
    QMenu *menuFormatar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(737, 364);
        actionNovo = new QAction(MainWindow);
        actionNovo->setObjectName(QString::fromUtf8("actionNovo"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icones/novo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNovo->setIcon(icon);
        actionbrir = new QAction(MainWindow);
        actionbrir->setObjectName(QString::fromUtf8("actionbrir"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icones/abrir.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionbrir->setIcon(icon1);
        actionSalvar = new QAction(MainWindow);
        actionSalvar->setObjectName(QString::fromUtf8("actionSalvar"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icones/salvar.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSalvar->setIcon(icon2);
        actionSalvar_como = new QAction(MainWindow);
        actionSalvar_como->setObjectName(QString::fromUtf8("actionSalvar_como"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icones/salvar_como.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSalvar_como->setIcon(icon3);
        actionFechar = new QAction(MainWindow);
        actionFechar->setObjectName(QString::fromUtf8("actionFechar"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icones/fechar.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFechar->setIcon(icon4);
        actionCopiar = new QAction(MainWindow);
        actionCopiar->setObjectName(QString::fromUtf8("actionCopiar"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icones/copiar.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopiar->setIcon(icon5);
        actionRecortar = new QAction(MainWindow);
        actionRecortar->setObjectName(QString::fromUtf8("actionRecortar"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icones/recortar.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRecortar->setIcon(icon6);
        actionColar = new QAction(MainWindow);
        actionColar->setObjectName(QString::fromUtf8("actionColar"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icones/colar.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionColar->setIcon(icon7);
        actionDesfazer = new QAction(MainWindow);
        actionDesfazer->setObjectName(QString::fromUtf8("actionDesfazer"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icones/desfazer.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDesfazer->setIcon(icon8);
        actionRefazer = new QAction(MainWindow);
        actionRefazer->setObjectName(QString::fromUtf8("actionRefazer"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/icones/refazer.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRefazer->setIcon(icon9);
        actionBloco_de_anota_es = new QAction(MainWindow);
        actionBloco_de_anota_es->setObjectName(QString::fromUtf8("actionBloco_de_anota_es"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/icones/sobre.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBloco_de_anota_es->setIcon(icon10);
        actionFonte = new QAction(MainWindow);
        actionFonte->setObjectName(QString::fromUtf8("actionFonte"));
        actionCor = new QAction(MainWindow);
        actionCor->setObjectName(QString::fromUtf8("actionCor"));
        actionCor_de_fundo = new QAction(MainWindow);
        actionCor_de_fundo->setObjectName(QString::fromUtf8("actionCor_de_fundo"));
        actionImprimir = new QAction(MainWindow);
        actionImprimir->setObjectName(QString::fromUtf8("actionImprimir"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/icones/imprimir.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionImprimir->setIcon(icon11);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(30, 20, 104, 71));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 737, 21));
        menuArquivo = new QMenu(menubar);
        menuArquivo->setObjectName(QString::fromUtf8("menuArquivo"));
        menuEditar = new QMenu(menubar);
        menuEditar->setObjectName(QString::fromUtf8("menuEditar"));
        menuSobre = new QMenu(menubar);
        menuSobre->setObjectName(QString::fromUtf8("menuSobre"));
        menuFormatar = new QMenu(menubar);
        menuFormatar->setObjectName(QString::fromUtf8("menuFormatar"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuArquivo->menuAction());
        menubar->addAction(menuEditar->menuAction());
        menubar->addAction(menuFormatar->menuAction());
        menubar->addAction(menuSobre->menuAction());
        menuArquivo->addAction(actionNovo);
        menuArquivo->addAction(actionbrir);
        menuArquivo->addSeparator();
        menuArquivo->addAction(actionSalvar);
        menuArquivo->addAction(actionSalvar_como);
        menuArquivo->addSeparator();
        menuArquivo->addAction(actionImprimir);
        menuArquivo->addSeparator();
        menuArquivo->addAction(actionFechar);
        menuEditar->addAction(actionCopiar);
        menuEditar->addAction(actionRecortar);
        menuEditar->addAction(actionColar);
        menuEditar->addSeparator();
        menuEditar->addAction(actionDesfazer);
        menuEditar->addAction(actionRefazer);
        menuSobre->addAction(actionBloco_de_anota_es);
        menuFormatar->addAction(actionFonte);
        menuFormatar->addAction(actionCor);
        menuFormatar->addAction(actionCor_de_fundo);
        toolBar->addAction(actionNovo);
        toolBar->addAction(actionbrir);
        toolBar->addAction(actionSalvar);
        toolBar->addSeparator();
        toolBar->addAction(actionCopiar);
        toolBar->addAction(actionRecortar);
        toolBar->addAction(actionColar);
        toolBar->addSeparator();
        toolBar->addAction(actionDesfazer);
        toolBar->addAction(actionRefazer);
        toolBar->addSeparator();
        toolBar->addAction(actionBloco_de_anota_es);
        toolBar->addAction(actionFechar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionNovo->setText(QCoreApplication::translate("MainWindow", "Novo", nullptr));
        actionbrir->setText(QCoreApplication::translate("MainWindow", "Abrir", nullptr));
        actionSalvar->setText(QCoreApplication::translate("MainWindow", "Salvar", nullptr));
        actionSalvar_como->setText(QCoreApplication::translate("MainWindow", "Salvar como", nullptr));
        actionFechar->setText(QCoreApplication::translate("MainWindow", "Fechar", nullptr));
        actionCopiar->setText(QCoreApplication::translate("MainWindow", "Copiar", nullptr));
        actionRecortar->setText(QCoreApplication::translate("MainWindow", "Recortar", nullptr));
        actionColar->setText(QCoreApplication::translate("MainWindow", "Colar", nullptr));
        actionDesfazer->setText(QCoreApplication::translate("MainWindow", "Desfazer", nullptr));
        actionRefazer->setText(QCoreApplication::translate("MainWindow", "Refazer", nullptr));
        actionBloco_de_anota_es->setText(QCoreApplication::translate("MainWindow", "Bloco de anota\303\247\303\265es", nullptr));
        actionFonte->setText(QCoreApplication::translate("MainWindow", "Fonte", nullptr));
        actionCor->setText(QCoreApplication::translate("MainWindow", "Cor da fonte", nullptr));
        actionCor_de_fundo->setText(QCoreApplication::translate("MainWindow", "Cor de fundo", nullptr));
        actionImprimir->setText(QCoreApplication::translate("MainWindow", "Imprimir", nullptr));
        menuArquivo->setTitle(QCoreApplication::translate("MainWindow", "Arquivo", nullptr));
        menuEditar->setTitle(QCoreApplication::translate("MainWindow", "Editar", nullptr));
        menuSobre->setTitle(QCoreApplication::translate("MainWindow", "Sobre", nullptr));
        menuFormatar->setTitle(QCoreApplication::translate("MainWindow", "Formatar", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
