/********************************************************************************
** Form generated from reading UI file 'janelalogin.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JANELALOGIN_H
#define UI_JANELALOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_JanelaLogin
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_log;
    QLineEdit *lineEdit_log;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_senha;
    QPushButton *pushButton_log;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *JanelaLogin)
    {
        if (JanelaLogin->objectName().isEmpty())
            JanelaLogin->setObjectName(QString::fromUtf8("JanelaLogin"));
        JanelaLogin->resize(800, 600);
        centralwidget = new QWidget(JanelaLogin);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(70, 100, 321, 158));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_log = new QLabel(widget);
        label_log->setObjectName(QString::fromUtf8("label_log"));

        horizontalLayout->addWidget(label_log);

        lineEdit_log = new QLineEdit(widget);
        lineEdit_log->setObjectName(QString::fromUtf8("lineEdit_log"));

        horizontalLayout->addWidget(lineEdit_log);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_senha = new QLineEdit(widget);
        lineEdit_senha->setObjectName(QString::fromUtf8("lineEdit_senha"));
        lineEdit_senha->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(lineEdit_senha);


        verticalLayout->addLayout(horizontalLayout_2);

        pushButton_log = new QPushButton(widget);
        pushButton_log->setObjectName(QString::fromUtf8("pushButton_log"));

        verticalLayout->addWidget(pushButton_log);

        textEdit = new QTextEdit(widget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        verticalLayout->addWidget(textEdit);

        JanelaLogin->setCentralWidget(centralwidget);
        menubar = new QMenuBar(JanelaLogin);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        JanelaLogin->setMenuBar(menubar);
        statusbar = new QStatusBar(JanelaLogin);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        JanelaLogin->setStatusBar(statusbar);

        retranslateUi(JanelaLogin);

        QMetaObject::connectSlotsByName(JanelaLogin);
    } // setupUi

    void retranslateUi(QMainWindow *JanelaLogin)
    {
        JanelaLogin->setWindowTitle(QCoreApplication::translate("JanelaLogin", "JanelaLogin", nullptr));
        label_log->setText(QCoreApplication::translate("JanelaLogin", "Log-in", nullptr));
        label_2->setText(QCoreApplication::translate("JanelaLogin", "Senha", nullptr));
        pushButton_log->setText(QCoreApplication::translate("JanelaLogin", "Entrar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class JanelaLogin: public Ui_JanelaLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JANELALOGIN_H
