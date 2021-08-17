/********************************************************************************
** Form generated from reading UI file 'form_novo.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_NOVO_H
#define UI_FORM_NOVO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_form_novo
{
public:

    void setupUi(QDialog *form_novo)
    {
        if (form_novo->objectName().isEmpty())
            form_novo->setObjectName(QString::fromUtf8("form_novo"));
        form_novo->resize(400, 300);

        retranslateUi(form_novo);

        QMetaObject::connectSlotsByName(form_novo);
    } // setupUi

    void retranslateUi(QDialog *form_novo)
    {
        form_novo->setWindowTitle(QCoreApplication::translate("form_novo", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class form_novo: public Ui_form_novo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_NOVO_H
