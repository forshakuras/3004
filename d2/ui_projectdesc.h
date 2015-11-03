/********************************************************************************
** Form generated from reading UI file 'projectdesc.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROJECTDESC_H
#define UI_PROJECTDESC_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_projectDesc
{
public:
    QLabel *label;
    QFrame *line;
    QTextBrowser *textBrowser;
    QLineEdit *lineEdit;

    void setupUi(QDialog *projectDesc)
    {
        if (projectDesc->objectName().isEmpty())
            projectDesc->setObjectName(QStringLiteral("projectDesc"));
        projectDesc->resize(472, 301);
        label = new QLabel(projectDesc);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 35, 71, 17));
        line = new QFrame(projectDesc);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(0, 60, 471, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        textBrowser = new QTextBrowser(projectDesc);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(20, 80, 431, 201));
        lineEdit = new QLineEdit(projectDesc);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(110, 30, 141, 27));

        retranslateUi(projectDesc);

        QMetaObject::connectSlotsByName(projectDesc);
    } // setupUi

    void retranslateUi(QDialog *projectDesc)
    {
        projectDesc->setWindowTitle(QApplication::translate("projectDesc", "CUPID", 0));
        label->setText(QApplication::translate("projectDesc", "Project ID:", 0));
    } // retranslateUi

};

namespace Ui {
    class projectDesc: public Ui_projectDesc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJECTDESC_H
