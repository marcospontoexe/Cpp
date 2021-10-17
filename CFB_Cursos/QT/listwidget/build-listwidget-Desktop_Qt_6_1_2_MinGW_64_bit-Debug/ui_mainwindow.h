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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QPushButton *pushButton_Adicionar;
    QPushButton *pushButton_Add;
    QPushButton *pushButton_Marcar;
    QPushButton *pushButton_Desmarcar;
    QListWidget *listWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_desmarcarGeral;
    QPushButton *pushButton_Apagar;
    QPushButton *pushButton_Apagar_geral;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(50, 10, 461, 256));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        pushButton_Adicionar = new QPushButton(widget);
        pushButton_Adicionar->setObjectName(QString::fromUtf8("pushButton_Adicionar"));

        horizontalLayout->addWidget(pushButton_Adicionar);

        pushButton_Add = new QPushButton(widget);
        pushButton_Add->setObjectName(QString::fromUtf8("pushButton_Add"));

        horizontalLayout->addWidget(pushButton_Add);

        pushButton_Marcar = new QPushButton(widget);
        pushButton_Marcar->setObjectName(QString::fromUtf8("pushButton_Marcar"));

        horizontalLayout->addWidget(pushButton_Marcar);

        pushButton_Desmarcar = new QPushButton(widget);
        pushButton_Desmarcar->setObjectName(QString::fromUtf8("pushButton_Desmarcar"));

        horizontalLayout->addWidget(pushButton_Desmarcar);


        verticalLayout->addLayout(horizontalLayout);

        listWidget = new QListWidget(widget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        verticalLayout->addWidget(listWidget);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton_desmarcarGeral = new QPushButton(widget);
        pushButton_desmarcarGeral->setObjectName(QString::fromUtf8("pushButton_desmarcarGeral"));

        horizontalLayout_2->addWidget(pushButton_desmarcarGeral);

        pushButton_Apagar = new QPushButton(widget);
        pushButton_Apagar->setObjectName(QString::fromUtf8("pushButton_Apagar"));

        horizontalLayout_2->addWidget(pushButton_Apagar);

        pushButton_Apagar_geral = new QPushButton(widget);
        pushButton_Apagar_geral->setObjectName(QString::fromUtf8("pushButton_Apagar_geral"));

        horizontalLayout_2->addWidget(pushButton_Apagar_geral);


        verticalLayout->addLayout(horizontalLayout_2);

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
        pushButton_Adicionar->setText(QCoreApplication::translate("MainWindow", "Adicionar", nullptr));
        pushButton_Add->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        pushButton_Marcar->setText(QCoreApplication::translate("MainWindow", "Marcar", nullptr));
        pushButton_Desmarcar->setText(QCoreApplication::translate("MainWindow", "Desmarcar", nullptr));
        pushButton_desmarcarGeral->setText(QCoreApplication::translate("MainWindow", "Desmarcar todos", nullptr));
        pushButton_Apagar->setText(QCoreApplication::translate("MainWindow", "Apagar", nullptr));
        pushButton_Apagar_geral->setText(QCoreApplication::translate("MainWindow", "Apagar todos", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
