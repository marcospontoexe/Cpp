/********************************************************************************
** Form generated from reading UI file 'form_principal.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_PRINCIPAL_H
#define UI_FORM_PRINCIPAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_form_principal
{
public:

    void setupUi(QDialog *form_principal)
    {
        if (form_principal->objectName().isEmpty())
            form_principal->setObjectName(QString::fromUtf8("form_principal"));
        form_principal->resize(400, 300);

        retranslateUi(form_principal);

        QMetaObject::connectSlotsByName(form_principal);
    } // setupUi

    void retranslateUi(QDialog *form_principal)
    {
        form_principal->setWindowTitle(QCoreApplication::translate("form_principal", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class form_principal: public Ui_form_principal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_PRINCIPAL_H
