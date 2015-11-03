/********************************************************************************
** Form generated from reading UI file 'choosewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOOSEWINDOW_H
#define UI_CHOOSEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_chooseWindow
{
public:
    QPushButton *profileButton;
    QPushButton *projectButton;
    QPushButton *signoutBUtton;
    QFrame *line;

    void setupUi(QDialog *chooseWindow)
    {
        if (chooseWindow->objectName().isEmpty())
            chooseWindow->setObjectName(QStringLiteral("chooseWindow"));
        chooseWindow->resize(400, 300);
        profileButton = new QPushButton(chooseWindow);
        profileButton->setObjectName(QStringLiteral("profileButton"));
        profileButton->setGeometry(QRect(10, 20, 181, 231));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        profileButton->setFont(font);
        projectButton = new QPushButton(chooseWindow);
        projectButton->setObjectName(QStringLiteral("projectButton"));
        projectButton->setGeometry(QRect(210, 20, 181, 231));
        projectButton->setFont(font);
        signoutBUtton = new QPushButton(chooseWindow);
        signoutBUtton->setObjectName(QStringLiteral("signoutBUtton"));
        signoutBUtton->setGeometry(QRect(290, 270, 99, 27));
        line = new QFrame(chooseWindow);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(0, 250, 401, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        retranslateUi(chooseWindow);
        QObject::connect(signoutBUtton, SIGNAL(clicked()), chooseWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(chooseWindow);
    } // setupUi

    void retranslateUi(QDialog *chooseWindow)
    {
        chooseWindow->setWindowTitle(QApplication::translate("chooseWindow", "CUPID", 0));
        profileButton->setText(QApplication::translate("chooseWindow", "Profile", 0));
        projectButton->setText(QApplication::translate("chooseWindow", "Project", 0));
        signoutBUtton->setText(QApplication::translate("chooseWindow", "Sign out", 0));
    } // retranslateUi

};

namespace Ui {
    class chooseWindow: public Ui_chooseWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSEWINDOW_H
