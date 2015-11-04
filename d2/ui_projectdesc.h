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

QT_BEGIN_NAMESPACE

class Ui_projectDesc
{
public:
    QLabel *label;
    QFrame *line;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *member;
    QLabel *label_3;
    QLineEdit *projDesc;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_16;
    QLabel *label_14;
    QLabel *label_9;
    QLabel *label_7;
    QLabel *label_10;
    QLabel *label_13;
    QLabel *label_11;
    QLabel *label_8;
    QLabel *label_12;
    QLabel *label_6;
    QLabel *label_15;
    QLabel *label_17;
    QLabel *mobileLabel;
    QLabel *uiLabel;
    QLabel *cLabel;
    QLabel *gpaLabel;
    QLabel *docLabel;
    QLabel *javaLabel;
    QLabel *networkLabel;
    QLabel *debugLabel;
    QLabel *jsLabel;
    QLabel *pmLabel;
    QLabel *algLabel;
    QLabel *dbLabel;
    QLabel *pythonLabel;

    void setupUi(QDialog *projectDesc)
    {
        if (projectDesc->objectName().isEmpty())
            projectDesc->setObjectName(QStringLiteral("projectDesc"));
        projectDesc->resize(472, 589);
        label = new QLabel(projectDesc);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 15, 71, 17));
        line = new QFrame(projectDesc);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(0, 80, 471, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        lineEdit = new QLineEdit(projectDesc);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setEnabled(true);
        lineEdit->setGeometry(QRect(100, 10, 121, 27));
        lineEdit->setReadOnly(true);
        label_2 = new QLabel(projectDesc);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(240, 15, 67, 17));
        member = new QLineEdit(projectDesc);
        member->setObjectName(QStringLiteral("member"));
        member->setGeometry(QRect(310, 10, 121, 27));
        member->setReadOnly(true);
        label_3 = new QLabel(projectDesc);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(160, 100, 141, 17));
        projDesc = new QLineEdit(projectDesc);
        projDesc->setObjectName(QStringLiteral("projDesc"));
        projDesc->setGeometry(QRect(100, 50, 331, 27));
        label_4 = new QLabel(projectDesc);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 40, 91, 51));
        label_5 = new QLabel(projectDesc);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(100, 180, 67, 17));
        label_16 = new QLabel(projectDesc);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(100, 510, 131, 17));
        label_14 = new QLabel(projectDesc);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(100, 450, 91, 17));
        label_9 = new QLabel(projectDesc);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(100, 300, 67, 17));
        label_7 = new QLabel(projectDesc);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(100, 240, 67, 17));
        label_10 = new QLabel(projectDesc);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(100, 330, 67, 17));
        label_13 = new QLabel(projectDesc);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(100, 420, 121, 17));
        label_11 = new QLabel(projectDesc);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(100, 360, 141, 17));
        label_8 = new QLabel(projectDesc);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(100, 270, 67, 17));
        label_12 = new QLabel(projectDesc);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(100, 390, 121, 17));
        label_6 = new QLabel(projectDesc);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(100, 210, 71, 17));
        label_15 = new QLabel(projectDesc);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(100, 480, 81, 17));
        label_17 = new QLabel(projectDesc);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(100, 150, 121, 17));
        mobileLabel = new QLabel(projectDesc);
        mobileLabel->setObjectName(QStringLiteral("mobileLabel"));
        mobileLabel->setGeometry(QRect(270, 420, 121, 17));
        uiLabel = new QLabel(projectDesc);
        uiLabel->setObjectName(QStringLiteral("uiLabel"));
        uiLabel->setGeometry(QRect(270, 480, 81, 17));
        cLabel = new QLabel(projectDesc);
        cLabel->setObjectName(QStringLiteral("cLabel"));
        cLabel->setGeometry(QRect(270, 270, 67, 17));
        gpaLabel = new QLabel(projectDesc);
        gpaLabel->setObjectName(QStringLiteral("gpaLabel"));
        gpaLabel->setGeometry(QRect(270, 150, 121, 17));
        docLabel = new QLabel(projectDesc);
        docLabel->setObjectName(QStringLiteral("docLabel"));
        docLabel->setGeometry(QRect(270, 390, 121, 17));
        javaLabel = new QLabel(projectDesc);
        javaLabel->setObjectName(QStringLiteral("javaLabel"));
        javaLabel->setGeometry(QRect(270, 240, 67, 17));
        networkLabel = new QLabel(projectDesc);
        networkLabel->setObjectName(QStringLiteral("networkLabel"));
        networkLabel->setGeometry(QRect(270, 450, 91, 17));
        debugLabel = new QLabel(projectDesc);
        debugLabel->setObjectName(QStringLiteral("debugLabel"));
        debugLabel->setGeometry(QRect(270, 360, 141, 17));
        jsLabel = new QLabel(projectDesc);
        jsLabel->setObjectName(QStringLiteral("jsLabel"));
        jsLabel->setGeometry(QRect(270, 300, 67, 17));
        pmLabel = new QLabel(projectDesc);
        pmLabel->setObjectName(QStringLiteral("pmLabel"));
        pmLabel->setGeometry(QRect(270, 180, 67, 17));
        algLabel = new QLabel(projectDesc);
        algLabel->setObjectName(QStringLiteral("algLabel"));
        algLabel->setGeometry(QRect(270, 510, 131, 17));
        dbLabel = new QLabel(projectDesc);
        dbLabel->setObjectName(QStringLiteral("dbLabel"));
        dbLabel->setGeometry(QRect(270, 210, 71, 17));
        pythonLabel = new QLabel(projectDesc);
        pythonLabel->setObjectName(QStringLiteral("pythonLabel"));
        pythonLabel->setGeometry(QRect(270, 330, 67, 17));

        retranslateUi(projectDesc);

        QMetaObject::connectSlotsByName(projectDesc);
    } // setupUi

    void retranslateUi(QDialog *projectDesc)
    {
        projectDesc->setWindowTitle(QApplication::translate("projectDesc", "CUPID", 0));
        label->setText(QApplication::translate("projectDesc", "Project ID:", 0));
        label_2->setText(QApplication::translate("projectDesc", "Member:", 0));
        label_3->setText(QApplication::translate("projectDesc", "PPID requirement:", 0));
        label_4->setText(QApplication::translate("projectDesc", "Project Desc:", 0));
        label_5->setText(QApplication::translate("projectDesc", "PM skills:", 0));
        label_16->setText(QApplication::translate("projectDesc", "Algorithm Design:", 0));
        label_14->setText(QApplication::translate("projectDesc", "Networking:", 0));
        label_9->setText(QApplication::translate("projectDesc", "JS/HTML:", 0));
        label_7->setText(QApplication::translate("projectDesc", "Java:", 0));
        label_10->setText(QApplication::translate("projectDesc", "Python:", 0));
        label_13->setText(QApplication::translate("projectDesc", "Mobile Develop:", 0));
        label_11->setText(QApplication::translate("projectDesc", "Debugging/Testing:", 0));
        label_8->setText(QApplication::translate("projectDesc", "C/Cpp:", 0));
        label_12->setText(QApplication::translate("projectDesc", "Documentation:", 0));
        label_6->setText(QApplication::translate("projectDesc", "Database:", 0));
        label_15->setText(QApplication::translate("projectDesc", "UI Design:", 0));
        label_17->setText(QApplication::translate("projectDesc", "GPA(out of 12.00):", 0));
        mobileLabel->setText(QApplication::translate("projectDesc", "Mobile Develop:", 0));
        uiLabel->setText(QApplication::translate("projectDesc", "UI Design:", 0));
        cLabel->setText(QApplication::translate("projectDesc", "C/Cpp:", 0));
        gpaLabel->setText(QApplication::translate("projectDesc", "GPA(out of 12.00):", 0));
        docLabel->setText(QApplication::translate("projectDesc", "Documentation:", 0));
        javaLabel->setText(QApplication::translate("projectDesc", "Java:", 0));
        networkLabel->setText(QApplication::translate("projectDesc", "Networking:", 0));
        debugLabel->setText(QApplication::translate("projectDesc", "Debugging/Testing:", 0));
        jsLabel->setText(QApplication::translate("projectDesc", "JS/HTML:", 0));
        pmLabel->setText(QApplication::translate("projectDesc", "PM skills:", 0));
        algLabel->setText(QApplication::translate("projectDesc", "Algorithm Design:", 0));
        dbLabel->setText(QApplication::translate("projectDesc", "Database:", 0));
        pythonLabel->setText(QApplication::translate("projectDesc", "Python:", 0));
    } // retranslateUi

};

namespace Ui {
    class projectDesc: public Ui_projectDesc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJECTDESC_H
