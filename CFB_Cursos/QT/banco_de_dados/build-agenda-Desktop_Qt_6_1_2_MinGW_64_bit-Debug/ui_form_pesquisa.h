/********************************************************************************
** Form generated from reading UI file 'form_pesquisa.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_PESQUISA_H
#define UI_FORM_PESQUISA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_form_pesquisa
{
public:
    QTableWidget *tableWidget;

    void setupUi(QDialog *form_pesquisa)
    {
        if (form_pesquisa->objectName().isEmpty())
            form_pesquisa->setObjectName(QString::fromUtf8("form_pesquisa"));
        form_pesquisa->resize(400, 300);
        tableWidget = new QTableWidget(form_pesquisa);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(10, 10, 381, 281));

        retranslateUi(form_pesquisa);

        QMetaObject::connectSlotsByName(form_pesquisa);
    } // setupUi

    void retranslateUi(QDialog *form_pesquisa)
    {
        form_pesquisa->setWindowTitle(QCoreApplication::translate("form_pesquisa", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class form_pesquisa: public Ui_form_pesquisa {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_PESQUISA_H
