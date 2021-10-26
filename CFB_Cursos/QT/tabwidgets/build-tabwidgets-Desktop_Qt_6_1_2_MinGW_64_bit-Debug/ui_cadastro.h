/********************************************************************************
** Form generated from reading UI file 'cadastro.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CADASTRO_H
#define UI_CADASTRO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cadastro
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;

    void setupUi(QWidget *cadastro)
    {
        if (cadastro->objectName().isEmpty())
            cadastro->setObjectName(QString::fromUtf8("cadastro"));
        cadastro->resize(400, 300);
        widget = new QWidget(cadastro);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 30, 192, 76));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout_2->addWidget(lineEdit);

        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        verticalLayout_2->addWidget(lineEdit_2);

        lineEdit_3 = new QLineEdit(widget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        verticalLayout_2->addWidget(lineEdit_3);


        horizontalLayout->addLayout(verticalLayout_2);


        retranslateUi(cadastro);

        QMetaObject::connectSlotsByName(cadastro);
    } // setupUi

    void retranslateUi(QWidget *cadastro)
    {
        cadastro->setWindowTitle(QCoreApplication::translate("cadastro", "Form", nullptr));
        label->setText(QCoreApplication::translate("cadastro", "Nome", nullptr));
        label_2->setText(QCoreApplication::translate("cadastro", "Idade", nullptr));
        label_3->setText(QCoreApplication::translate("cadastro", "Sexo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cadastro: public Ui_cadastro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CADASTRO_H
