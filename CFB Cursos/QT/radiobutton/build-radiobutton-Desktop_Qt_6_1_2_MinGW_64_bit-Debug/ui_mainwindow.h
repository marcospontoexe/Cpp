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
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *radioButton_pizza;
    QRadioButton *radioButton_arroz;
    QRadioButton *radioButton_fuba;
    QPushButton *pushButton;
    QWidget *widget1;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton_vermelho;
    QRadioButton *radioButton_verde;
    QRadioButton *radioButton_azul;
    QWidget *widget2;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *radioButton_aviao;
    QRadioButton *radioButton_carro;
    QRadioButton *radioButton_navio;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(380, 10, 251, 171));
        widget = new QWidget(groupBox);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(60, 30, 84, 65));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        radioButton_pizza = new QRadioButton(widget);
        radioButton_pizza->setObjectName(QString::fromUtf8("radioButton_pizza"));

        verticalLayout_3->addWidget(radioButton_pizza);

        radioButton_arroz = new QRadioButton(widget);
        radioButton_arroz->setObjectName(QString::fromUtf8("radioButton_arroz"));

        verticalLayout_3->addWidget(radioButton_arroz);

        radioButton_fuba = new QRadioButton(widget);
        radioButton_fuba->setObjectName(QString::fromUtf8("radioButton_fuba"));

        verticalLayout_3->addWidget(radioButton_fuba);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(360, 200, 75, 23));
        widget1 = new QWidget(centralwidget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(80, 20, 84, 65));
        verticalLayout = new QVBoxLayout(widget1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        radioButton_vermelho = new QRadioButton(widget1);
        radioButton_vermelho->setObjectName(QString::fromUtf8("radioButton_vermelho"));

        verticalLayout->addWidget(radioButton_vermelho);

        radioButton_verde = new QRadioButton(widget1);
        radioButton_verde->setObjectName(QString::fromUtf8("radioButton_verde"));

        verticalLayout->addWidget(radioButton_verde);

        radioButton_azul = new QRadioButton(widget1);
        radioButton_azul->setObjectName(QString::fromUtf8("radioButton_azul"));

        verticalLayout->addWidget(radioButton_azul);

        widget2 = new QWidget(centralwidget);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(70, 170, 84, 65));
        verticalLayout_2 = new QVBoxLayout(widget2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        radioButton_aviao = new QRadioButton(widget2);
        radioButton_aviao->setObjectName(QString::fromUtf8("radioButton_aviao"));

        verticalLayout_2->addWidget(radioButton_aviao);

        radioButton_carro = new QRadioButton(widget2);
        radioButton_carro->setObjectName(QString::fromUtf8("radioButton_carro"));

        verticalLayout_2->addWidget(radioButton_carro);

        radioButton_navio = new QRadioButton(widget2);
        radioButton_navio->setObjectName(QString::fromUtf8("radioButton_navio"));

        verticalLayout_2->addWidget(radioButton_navio);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "GroupBox", nullptr));
        radioButton_pizza->setText(QCoreApplication::translate("MainWindow", "pizza", nullptr));
        radioButton_arroz->setText(QCoreApplication::translate("MainWindow", "arroz", nullptr));
        radioButton_fuba->setText(QCoreApplication::translate("MainWindow", "fuba", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "verificar", nullptr));
        radioButton_vermelho->setText(QCoreApplication::translate("MainWindow", "vermelho", nullptr));
        radioButton_verde->setText(QCoreApplication::translate("MainWindow", "verde", nullptr));
        radioButton_azul->setText(QCoreApplication::translate("MainWindow", "azul", nullptr));
        radioButton_aviao->setText(QCoreApplication::translate("MainWindow", "avi\303\243o", nullptr));
        radioButton_carro->setText(QCoreApplication::translate("MainWindow", "carro", nullptr));
        radioButton_navio->setText(QCoreApplication::translate("MainWindow", "navio", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
