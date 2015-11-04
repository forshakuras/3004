/********************************************************************************
** Form generated from reading UI file 'entrywindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENTRYWINDOW_H
#define UI_ENTRYWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Entrywindow
{
public:
    QCheckBox *studentCheckBox;
    QCheckBox *adminCheckBox;
    QLabel *label;
    QLabel *label_carleton;
    QLineEdit *lineEdit;
    QPushButton *Loginbutton;
    QPushButton *Signupbutton;

    void setupUi(QDialog *Entrywindow)
    {
        if (Entrywindow->objectName().isEmpty())
            Entrywindow->setObjectName(QStringLiteral("Entrywindow"));
        Entrywindow->resize(400, 300);
        studentCheckBox = new QCheckBox(Entrywindow);
        studentCheckBox->setObjectName(QStringLiteral("studentCheckBox"));
        studentCheckBox->setGeometry(QRect(60, 200, 97, 22));
        adminCheckBox = new QCheckBox(Entrywindow);
        adminCheckBox->setObjectName(QStringLiteral("adminCheckBox"));
        adminCheckBox->setGeometry(QRect(210, 200, 131, 22));
        label = new QLabel(Entrywindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 160, 81, 21));
        label_carleton = new QLabel(Entrywindow);
        label_carleton->setObjectName(QStringLiteral("label_carleton"));
        label_carleton->setGeometry(QRect(30, 20, 341, 131));
        lineEdit = new QLineEdit(Entrywindow);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(140, 160, 191, 27));
        Loginbutton = new QPushButton(Entrywindow);
        Loginbutton->setObjectName(QStringLiteral("Loginbutton"));
        Loginbutton->setGeometry(QRect(60, 240, 99, 27));
        Signupbutton = new QPushButton(Entrywindow);
        Signupbutton->setObjectName(QStringLiteral("Signupbutton"));
        Signupbutton->setGeometry(QRect(210, 240, 99, 27));

        retranslateUi(Entrywindow);

        QMetaObject::connectSlotsByName(Entrywindow);
    } // setupUi

    void retranslateUi(QDialog *Entrywindow)
    {
        Entrywindow->setWindowTitle(QApplication::translate("Entrywindow", "CUPID", 0));
        studentCheckBox->setText(QApplication::translate("Entrywindow", "Student", 0));
        adminCheckBox->setText(QApplication::translate("Entrywindow", "Administrator", 0));
        label->setText(QApplication::translate("Entrywindow", "Username:", 0));
        label_carleton->setText(QString());
        Loginbutton->setText(QApplication::translate("Entrywindow", "Login", 0));
        Signupbutton->setText(QApplication::translate("Entrywindow", "Sign up", 0));
    } // retranslateUi

};

namespace Ui {
    class Entrywindow: public Ui_Entrywindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENTRYWINDOW_H
