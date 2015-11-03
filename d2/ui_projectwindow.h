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
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_projectWindow
{
public:
    QPushButton *pushButton;
    QListView *listView;
    QFrame *line;
    QPushButton *joinProj;
    QFrame *line_2;
    QLabel *label;

    void setupUi(QDialog *projectWindow)
    {
        if (projectWindow->objectName().isEmpty())
            projectWindow->setObjectName(QStringLiteral("projectWindow"));
        projectWindow->resize(380, 428);
        pushButton = new QPushButton(projectWindow);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(230, 390, 111, 31));
        listView = new QListView(projectWindow);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(15, 51, 351, 321));
        line = new QFrame(projectWindow);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(-10, 370, 391, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        joinProj = new QPushButton(projectWindow);
        joinProj->setObjectName(QStringLiteral("joinProj"));
        joinProj->setGeometry(QRect(40, 390, 111, 31));
        line_2 = new QFrame(projectWindow);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(0, 30, 381, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label = new QLabel(projectWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(130, 10, 131, 20));

        retranslateUi(projectWindow);
        QObject::connect(pushButton, SIGNAL(clicked()), projectWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(projectWindow);
    } // setupUi

    void retranslateUi(QDialog *projectWindow)
    {
        projectWindow->setWindowTitle(QApplication::translate("projectWindow", "Projects", 0));
        pushButton->setText(QApplication::translate("projectWindow", "Sign out", 0));
        joinProj->setText(QApplication::translate("projectWindow", "Join Project", 0));
        label->setText(QApplication::translate("projectWindow", "Avaliable Projects", 0));
    } // retranslateUi

};

namespace Ui {
    class projectWindow: public Ui_projectWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJECTWINDOW_H
