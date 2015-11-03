/********************************************************************************
** Form generated from reading UI file 'projectwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROJECTWINDOW_H
#define UI_PROJECTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_projectWindow
{
public:
    QPushButton *pushButton;

    void setupUi(QDialog *projectWindow)
    {
        if (projectWindow->objectName().isEmpty())
            projectWindow->setObjectName(QStringLiteral("projectWindow"));
        projectWindow->resize(400, 300);
        pushButton = new QPushButton(projectWindow);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(290, 270, 99, 27));

        retranslateUi(projectWindow);
        QObject::connect(pushButton, SIGNAL(clicked()), projectWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(projectWindow);
    } // setupUi

    void retranslateUi(QDialog *projectWindow)
    {
        projectWindow->setWindowTitle(QApplication::translate("projectWindow", "Projects", 0));
        pushButton->setText(QApplication::translate("projectWindow", "Sign out", 0));
    } // retranslateUi

};

namespace Ui {
    class projectWindow: public Ui_projectWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJECTWINDOW_H
