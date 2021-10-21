/********************************************************************************
** Form generated from reading UI file 'janela2.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JANELA2_H
#define UI_JANELA2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_janela2
{
public:

    void setupUi(QDialog *janela2)
    {
        if (janela2->objectName().isEmpty())
            janela2->setObjectName(QString::fromUtf8("janela2"));
        janela2->resize(400, 300);

        retranslateUi(janela2);

        QMetaObject::connectSlotsByName(janela2);
    } // setupUi

    void retranslateUi(QDialog *janela2)
    {
        janela2->setWindowTitle(QCoreApplication::translate("janela2", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class janela2: public Ui_janela2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JANELA2_H
