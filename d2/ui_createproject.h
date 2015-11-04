/********************************************************************************
** Form generated from reading UI file 'createproject.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEPROJECT_H
#define UI_CREATEPROJECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_CreateProject
{
public:
    QLabel *label_12;
    QLineEdit *projectTitle;
    QSpinBox *docSpin1;
    QLabel *nameLabel_2;
    QLabel *label_14;
    QLineEdit *projectId;
    QLabel *label_15;
    QLabel *label_3;
    QLabel *label_5;
    QSpinBox *jsSpin1;
    QLineEdit *projectDes;
    QLabel *nameLabel;
    QSpinBox *javaSpin1;
    QSpinBox *pmSpin1;
    QSpinBox *cSpin1;
    QLabel *label_10;
    QLabel *idLabel;
    QDoubleSpinBox *gpaSpin1;
    QLabel *label_8;
    QLabel *label_11;
    QSpinBox *uiSpin1;
    QSpinBox *networkingSpin1;
    QSpinBox *pythonSpin1;
    QLabel *label_6;
    QLabel *label_9;
    QSpinBox *mobileSpin1;
    QSpinBox *debuggingSpin1;
    QLabel *label_13;
    QLabel *label_16;
    QSpinBox *algSpin1;
    QSpinBox *dbSpin1;
    QLabel *label_4;
    QLabel *label_7;
    QPushButton *saveButton;
    QLabel *nameLabel_3;
    QLabel *nameLabel_4;
    QSpinBox *idealMem;
    QSpinBox *maxMem;

    void setupUi(QDialog *CreateProject)
    {
        if (CreateProject->objectName().isEmpty())
            CreateProject->setObjectName(QStringLiteral("CreateProject"));
        CreateProject->resize(431, 670);
        label_12 = new QLabel(CreateProject);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(70, 465, 121, 17));
        projectTitle = new QLineEdit(CreateProject);
        projectTitle->setObjectName(QStringLiteral("projectTitle"));
        projectTitle->setGeometry(QRect(150, 45, 221, 27));
        docSpin1 = new QSpinBox(CreateProject);
        docSpin1->setObjectName(QStringLiteral("docSpin1"));
        docSpin1->setGeometry(QRect(260, 460, 71, 27));
        docSpin1->setMinimum(0);
        docSpin1->setMaximum(5);
        nameLabel_2 = new QLabel(CreateProject);
        nameLabel_2->setObjectName(QStringLiteral("nameLabel_2"));
        nameLabel_2->setGeometry(QRect(10, 50, 91, 20));
        label_14 = new QLabel(CreateProject);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(70, 525, 91, 17));
        projectId = new QLineEdit(CreateProject);
        projectId->setObjectName(QStringLiteral("projectId"));
        projectId->setGeometry(QRect(150, 10, 221, 27));
        label_15 = new QLabel(CreateProject);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(70, 555, 81, 17));
        label_3 = new QLabel(CreateProject);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(70, 225, 121, 17));
        label_5 = new QLabel(CreateProject);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(70, 255, 67, 17));
        jsSpin1 = new QSpinBox(CreateProject);
        jsSpin1->setObjectName(QStringLiteral("jsSpin1"));
        jsSpin1->setGeometry(QRect(260, 370, 71, 27));
        jsSpin1->setMinimum(0);
        jsSpin1->setMaximum(5);
        projectDes = new QLineEdit(CreateProject);
        projectDes->setObjectName(QStringLiteral("projectDes"));
        projectDes->setGeometry(QRect(150, 85, 261, 27));
        nameLabel = new QLabel(CreateProject);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));
        nameLabel->setGeometry(QRect(10, 15, 81, 16));
        javaSpin1 = new QSpinBox(CreateProject);
        javaSpin1->setObjectName(QStringLiteral("javaSpin1"));
        javaSpin1->setGeometry(QRect(260, 310, 71, 27));
        javaSpin1->setMinimum(0);
        javaSpin1->setMaximum(5);
        pmSpin1 = new QSpinBox(CreateProject);
        pmSpin1->setObjectName(QStringLiteral("pmSpin1"));
        pmSpin1->setGeometry(QRect(260, 250, 71, 27));
        pmSpin1->setMinimum(0);
        pmSpin1->setMaximum(5);
        cSpin1 = new QSpinBox(CreateProject);
        cSpin1->setObjectName(QStringLiteral("cSpin1"));
        cSpin1->setGeometry(QRect(260, 340, 71, 27));
        cSpin1->setMinimum(0);
        cSpin1->setMaximum(5);
        label_10 = new QLabel(CreateProject);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(70, 405, 67, 17));
        idLabel = new QLabel(CreateProject);
        idLabel->setObjectName(QStringLiteral("idLabel"));
        idLabel->setGeometry(QRect(10, 90, 141, 16));
        gpaSpin1 = new QDoubleSpinBox(CreateProject);
        gpaSpin1->setObjectName(QStringLiteral("gpaSpin1"));
        gpaSpin1->setGeometry(QRect(260, 220, 71, 27));
        gpaSpin1->setMaximum(12);
        label_8 = new QLabel(CreateProject);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(70, 345, 67, 17));
        label_11 = new QLabel(CreateProject);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(70, 435, 141, 17));
        uiSpin1 = new QSpinBox(CreateProject);
        uiSpin1->setObjectName(QStringLiteral("uiSpin1"));
        uiSpin1->setGeometry(QRect(260, 550, 71, 27));
        uiSpin1->setMinimum(0);
        uiSpin1->setMaximum(5);
        networkingSpin1 = new QSpinBox(CreateProject);
        networkingSpin1->setObjectName(QStringLiteral("networkingSpin1"));
        networkingSpin1->setGeometry(QRect(260, 520, 71, 27));
        networkingSpin1->setMinimum(0);
        networkingSpin1->setMaximum(5);
        pythonSpin1 = new QSpinBox(CreateProject);
        pythonSpin1->setObjectName(QStringLiteral("pythonSpin1"));
        pythonSpin1->setGeometry(QRect(260, 400, 71, 27));
        pythonSpin1->setMinimum(0);
        pythonSpin1->setMaximum(5);
        label_6 = new QLabel(CreateProject);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(70, 285, 71, 17));
        label_9 = new QLabel(CreateProject);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(70, 375, 67, 17));
        mobileSpin1 = new QSpinBox(CreateProject);
        mobileSpin1->setObjectName(QStringLiteral("mobileSpin1"));
        mobileSpin1->setGeometry(QRect(260, 490, 71, 27));
        mobileSpin1->setMinimum(0);
        mobileSpin1->setMaximum(5);
        debuggingSpin1 = new QSpinBox(CreateProject);
        debuggingSpin1->setObjectName(QStringLiteral("debuggingSpin1"));
        debuggingSpin1->setGeometry(QRect(260, 430, 71, 27));
        debuggingSpin1->setMinimum(0);
        debuggingSpin1->setMaximum(5);
        label_13 = new QLabel(CreateProject);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(70, 495, 121, 17));
        label_16 = new QLabel(CreateProject);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(70, 585, 131, 17));
        algSpin1 = new QSpinBox(CreateProject);
        algSpin1->setObjectName(QStringLiteral("algSpin1"));
        algSpin1->setGeometry(QRect(260, 580, 71, 27));
        algSpin1->setMinimum(0);
        algSpin1->setMaximum(5);
        dbSpin1 = new QSpinBox(CreateProject);
        dbSpin1->setObjectName(QStringLiteral("dbSpin1"));
        dbSpin1->setGeometry(QRect(260, 280, 71, 27));
        dbSpin1->setMinimum(0);
        dbSpin1->setMaximum(5);
        label_4 = new QLabel(CreateProject);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(40, 190, 341, 20));
        label_7 = new QLabel(CreateProject);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(70, 315, 67, 17));
        saveButton = new QPushButton(CreateProject);
        saveButton->setObjectName(QStringLiteral("saveButton"));
        saveButton->setGeometry(QRect(150, 620, 99, 27));
        nameLabel_3 = new QLabel(CreateProject);
        nameLabel_3->setObjectName(QStringLiteral("nameLabel_3"));
        nameLabel_3->setGeometry(QRect(10, 125, 111, 16));
        nameLabel_4 = new QLabel(CreateProject);
        nameLabel_4->setObjectName(QStringLiteral("nameLabel_4"));
        nameLabel_4->setGeometry(QRect(10, 160, 101, 20));
        idealMem = new QSpinBox(CreateProject);
        idealMem->setObjectName(QStringLiteral("idealMem"));
        idealMem->setGeometry(QRect(150, 120, 71, 27));
        idealMem->setMinimum(1);
        idealMem->setMaximum(999);
        maxMem = new QSpinBox(CreateProject);
        maxMem->setObjectName(QStringLiteral("maxMem"));
        maxMem->setGeometry(QRect(150, 160, 71, 27));
        maxMem->setMinimum(1);
        maxMem->setMaximum(999);

        retranslateUi(CreateProject);

        QMetaObject::connectSlotsByName(CreateProject);
    } // setupUi

    void retranslateUi(QDialog *CreateProject)
    {
        CreateProject->setWindowTitle(QApplication::translate("CreateProject", "Create Project", 0));
        label_12->setText(QApplication::translate("CreateProject", "Documentation:", 0));
        nameLabel_2->setText(QApplication::translate("CreateProject", "Project Title", 0));
        label_14->setText(QApplication::translate("CreateProject", "Networking:", 0));
        label_15->setText(QApplication::translate("CreateProject", "UI Design:", 0));
        label_3->setText(QApplication::translate("CreateProject", "GPA(out of 12.00):", 0));
        label_5->setText(QApplication::translate("CreateProject", "PM skills:", 0));
        nameLabel->setText(QApplication::translate("CreateProject", "ProjectId", 0));
        label_10->setText(QApplication::translate("CreateProject", "Python:", 0));
        idLabel->setText(QApplication::translate("CreateProject", "Project Description", 0));
        label_8->setText(QApplication::translate("CreateProject", "C/Cpp:", 0));
        label_11->setText(QApplication::translate("CreateProject", "Debugging/Testing:", 0));
        label_6->setText(QApplication::translate("CreateProject", "Database:", 0));
        label_9->setText(QApplication::translate("CreateProject", "JS/HTML:", 0));
        label_13->setText(QApplication::translate("CreateProject", "Mobile Develop:", 0));
        label_16->setText(QApplication::translate("CreateProject", "Algorithm Design:", 0));
        label_4->setText(QApplication::translate("CreateProject", "PPID Minimal Requirements(5 is best, 0 is worst)", 0));
        label_7->setText(QApplication::translate("CreateProject", "Java:", 0));
        saveButton->setText(QApplication::translate("CreateProject", "Create", 0));
        nameLabel_3->setText(QApplication::translate("CreateProject", "Ideal Members", 0));
        nameLabel_4->setText(QApplication::translate("CreateProject", "Max Members", 0));
    } // retranslateUi

};

namespace Ui {
    class CreateProject: public Ui_CreateProject {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEPROJECT_H
