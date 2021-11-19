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
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_log;
    QLineEdit *lineEdit_log;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_senha;
    QPushButton *pushButton_log;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QLineEdit *lineEdit_nome;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_cadastrar;
    QPushButton *pushButton_pesquisar;
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
        widget->setGeometry(QRect(30, 10, 260, 201));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
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


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_4->addWidget(label);

        lineEdit_nome = new QLineEdit(widget);
        lineEdit_nome->setObjectName(QString::fromUtf8("lineEdit_nome"));

        horizontalLayout_4->addWidget(lineEdit_nome);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButton_cadastrar = new QPushButton(widget);
        pushButton_cadastrar->setObjectName(QString::fromUtf8("pushButton_cadastrar"));

        horizontalLayout_3->addWidget(pushButton_cadastrar);

        pushButton_pesquisar = new QPushButton(widget);
        pushButton_pesquisar->setObjectName(QString::fromUtf8("pushButton_pesquisar"));

        horizontalLayout_3->addWidget(pushButton_pesquisar);


        verticalLayout_2->addLayout(horizontalLayout_3);

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
        label->setText(QCoreApplication::translate("JanelaLogin", "Nome", nullptr));
        pushButton_cadastrar->setText(QCoreApplication::translate("JanelaLogin", "Cadastrar", nullptr));
        pushButton_pesquisar->setText(QCoreApplication::translate("JanelaLogin", "Pesquisar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class JanelaLogin: public Ui_JanelaLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JANELALOGIN_H
