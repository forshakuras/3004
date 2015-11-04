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
#include <QtWidgets/QLabel>
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
    QPushButton *pushButton_3;
    QLabel *label;
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
        listView->setGeometry(QRect(20, 60, 401, 401));
        Createproject = new QPushButton(centralwidget);
        Createproject->setObjectName(QStringLiteral("Createproject"));
        Createproject->setGeometry(QRect(80, 470, 116, 27));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(240, 470, 99, 27));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(160, 0, 121, 61));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
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
        pushButton_3->setText(QApplication::translate("AdminWIndow", "Sign out", 0));
        label->setText(QApplication::translate("AdminWIndow", "Projects", 0));
    } // retranslateUi

};

namespace Ui {
    class AdminWIndow: public Ui_AdminWIndow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINWINDOW_H
