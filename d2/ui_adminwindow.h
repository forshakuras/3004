/********************************************************************************
** Form generated from reading UI file 'adminwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINWINDOW_H
#define UI_ADMINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminWIndow
{
public:
    QWidget *centralwidget;
    QListView *listView;
    QPushButton *Createproject;
    QPushButton *Editproject;
    QPushButton *pushButton_3;
    QPushButton *Removeproject;
    QStatusBar *statusbar;
    QMenuBar *menubar;

    void setupUi(QMainWindow *AdminWIndow)
    {
        if (AdminWIndow->objectName().isEmpty())
            AdminWIndow->setObjectName(QStringLiteral("AdminWIndow"));
        AdminWIndow->resize(445, 545);
        centralwidget = new QWidget(AdminWIndow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        listView = new QListView(centralwidget);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(130, 20, 301, 441));
        Createproject = new QPushButton(centralwidget);
        Createproject->setObjectName(QStringLiteral("Createproject"));
        Createproject->setGeometry(QRect(10, 40, 111, 31));
        Editproject = new QPushButton(centralwidget);
        Editproject->setObjectName(QStringLiteral("Editproject"));
        Editproject->setGeometry(QRect(10, 100, 111, 31));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(230, 470, 99, 27));
        Removeproject = new QPushButton(centralwidget);
        Removeproject->setObjectName(QStringLiteral("Removeproject"));
        Removeproject->setGeometry(QRect(10, 160, 111, 31));
        AdminWIndow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(AdminWIndow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        AdminWIndow->setStatusBar(statusbar);
        menubar = new QMenuBar(AdminWIndow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 445, 25));
        AdminWIndow->setMenuBar(menubar);

        retranslateUi(AdminWIndow);

        QMetaObject::connectSlotsByName(AdminWIndow);
    } // setupUi

    void retranslateUi(QMainWindow *AdminWIndow)
    {
        AdminWIndow->setWindowTitle(QApplication::translate("AdminWIndow", "Administrator", 0));
        Createproject->setText(QApplication::translate("AdminWIndow", "Create Project", 0));
        Editproject->setText(QApplication::translate("AdminWIndow", "Edit Project", 0));
        pushButton_3->setText(QApplication::translate("AdminWIndow", "Logout", 0));
        Removeproject->setText(QApplication::translate("AdminWIndow", "Remove Project", 0));
    } // retranslateUi

};

namespace Ui {
    class AdminWIndow: public Ui_AdminWIndow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINWINDOW_H
