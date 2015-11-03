/********************************************************************************
** Form generated from reading UI file 'profilewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFILEWINDOW_H
#define UI_PROFILEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_Profilewindow
{
public:
    QLabel *nameLabel;
    QLabel *idLabel;
    QLabel *label_3;
    QLineEdit *name;
    QFrame *line;
    QLineEdit *id;
    QLabel *label_4;
    QDoubleSpinBox *gpaSpin;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QSpinBox *pmSpin;
    QSpinBox *dbSpin;
    QSpinBox *javaSpin;
    QSpinBox *cSpin;
    QSpinBox *jsSpin;
    QSpinBox *pythonSpin;
    QSpinBox *debuggingSpin;
    QSpinBox *docSpin;
    QSpinBox *mobileSpin;
    QSpinBox *networkingSpin;
    QSpinBox *uiSpin;
    QSpinBox *algSpin;
    QPushButton *pushButton;
    QFrame *line_2;
    QDoubleSpinBox *gpaSpinPref;
    QSpinBox *pmPrefSpin;
    QSpinBox *dbSpinPref;
    QSpinBox *javaSpinPref;
    QSpinBox *cSpinPref;
    QSpinBox *jsSpinPref;
    QSpinBox *pythonSpinPref;
    QSpinBox *debuggingSpinPref;
    QSpinBox *docSpinPref;
    QSpinBox *mobileSpinPref;
    QSpinBox *networkingSpinPref;
    QSpinBox *uiSpinPref;
    QSpinBox *algSpinPref;
    QLabel *label_17;
    QFrame *line_3;

    void setupUi(QDialog *Profilewindow)
    {
        if (Profilewindow->objectName().isEmpty())
            Profilewindow->setObjectName(QStringLiteral("Profilewindow"));
        Profilewindow->resize(389, 568);
        nameLabel = new QLabel(Profilewindow);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));
        nameLabel->setGeometry(QRect(20, 25, 51, 16));
        idLabel = new QLabel(Profilewindow);
        idLabel->setObjectName(QStringLiteral("idLabel"));
        idLabel->setGeometry(QRect(20, 65, 51, 17));
        label_3 = new QLabel(Profilewindow);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 145, 121, 17));
        name = new QLineEdit(Profilewindow);
        name->setObjectName(QStringLiteral("name"));
        name->setGeometry(QRect(80, 20, 261, 27));
        line = new QFrame(Profilewindow);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(0, 120, 391, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        id = new QLineEdit(Profilewindow);
        id->setObjectName(QStringLiteral("id"));
        id->setGeometry(QRect(80, 60, 261, 27));
        label_4 = new QLabel(Profilewindow);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(80, 100, 171, 17));
        gpaSpin = new QDoubleSpinBox(Profilewindow);
        gpaSpin->setObjectName(QStringLiteral("gpaSpin"));
        gpaSpin->setGeometry(QRect(210, 140, 71, 27));
        gpaSpin->setMaximum(12);
        label_5 = new QLabel(Profilewindow);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 175, 67, 17));
        label_6 = new QLabel(Profilewindow);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 205, 71, 17));
        label_7 = new QLabel(Profilewindow);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 235, 67, 17));
        label_8 = new QLabel(Profilewindow);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(20, 265, 67, 17));
        label_9 = new QLabel(Profilewindow);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(20, 295, 67, 17));
        label_10 = new QLabel(Profilewindow);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(20, 325, 67, 17));
        label_11 = new QLabel(Profilewindow);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(20, 355, 141, 17));
        label_12 = new QLabel(Profilewindow);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(20, 385, 121, 17));
        label_13 = new QLabel(Profilewindow);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(20, 415, 121, 17));
        label_14 = new QLabel(Profilewindow);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(20, 445, 91, 17));
        label_15 = new QLabel(Profilewindow);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(20, 475, 81, 17));
        label_16 = new QLabel(Profilewindow);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(20, 505, 131, 17));
        pmSpin = new QSpinBox(Profilewindow);
        pmSpin->setObjectName(QStringLiteral("pmSpin"));
        pmSpin->setGeometry(QRect(210, 170, 71, 27));
        pmSpin->setMinimum(0);
        pmSpin->setMaximum(5);
        dbSpin = new QSpinBox(Profilewindow);
        dbSpin->setObjectName(QStringLiteral("dbSpin"));
        dbSpin->setGeometry(QRect(210, 200, 71, 27));
        dbSpin->setMinimum(0);
        dbSpin->setMaximum(5);
        javaSpin = new QSpinBox(Profilewindow);
        javaSpin->setObjectName(QStringLiteral("javaSpin"));
        javaSpin->setGeometry(QRect(210, 230, 71, 27));
        javaSpin->setMinimum(0);
        javaSpin->setMaximum(5);
        cSpin = new QSpinBox(Profilewindow);
        cSpin->setObjectName(QStringLiteral("cSpin"));
        cSpin->setGeometry(QRect(210, 260, 71, 27));
        cSpin->setMinimum(0);
        cSpin->setMaximum(5);
        jsSpin = new QSpinBox(Profilewindow);
        jsSpin->setObjectName(QStringLiteral("jsSpin"));
        jsSpin->setGeometry(QRect(210, 290, 71, 27));
        jsSpin->setMinimum(0);
        jsSpin->setMaximum(5);
        pythonSpin = new QSpinBox(Profilewindow);
        pythonSpin->setObjectName(QStringLiteral("pythonSpin"));
        pythonSpin->setGeometry(QRect(210, 320, 71, 27));
        pythonSpin->setMinimum(0);
        pythonSpin->setMaximum(5);
        debuggingSpin = new QSpinBox(Profilewindow);
        debuggingSpin->setObjectName(QStringLiteral("debuggingSpin"));
        debuggingSpin->setGeometry(QRect(210, 350, 71, 27));
        debuggingSpin->setMinimum(0);
        debuggingSpin->setMaximum(5);
        docSpin = new QSpinBox(Profilewindow);
        docSpin->setObjectName(QStringLiteral("docSpin"));
        docSpin->setGeometry(QRect(210, 380, 71, 27));
        docSpin->setMinimum(0);
        docSpin->setMaximum(5);
        mobileSpin = new QSpinBox(Profilewindow);
        mobileSpin->setObjectName(QStringLiteral("mobileSpin"));
        mobileSpin->setGeometry(QRect(210, 410, 71, 27));
        mobileSpin->setMinimum(0);
        mobileSpin->setMaximum(5);
        networkingSpin = new QSpinBox(Profilewindow);
        networkingSpin->setObjectName(QStringLiteral("networkingSpin"));
        networkingSpin->setGeometry(QRect(210, 440, 71, 27));
        networkingSpin->setMinimum(0);
        networkingSpin->setMaximum(5);
        uiSpin = new QSpinBox(Profilewindow);
        uiSpin->setObjectName(QStringLiteral("uiSpin"));
        uiSpin->setGeometry(QRect(210, 470, 71, 27));
        uiSpin->setMinimum(0);
        uiSpin->setMaximum(5);
        algSpin = new QSpinBox(Profilewindow);
        algSpin->setObjectName(QStringLiteral("algSpin"));
        algSpin->setGeometry(QRect(210, 500, 71, 27));
        algSpin->setMinimum(0);
        algSpin->setMaximum(5);
        pushButton = new QPushButton(Profilewindow);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(150, 540, 99, 27));
        line_2 = new QFrame(Profilewindow);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(290, 130, 20, 405));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        gpaSpinPref = new QDoubleSpinBox(Profilewindow);
        gpaSpinPref->setObjectName(QStringLiteral("gpaSpinPref"));
        gpaSpinPref->setGeometry(QRect(310, 140, 71, 27));
        gpaSpinPref->setMaximum(12);
        pmPrefSpin = new QSpinBox(Profilewindow);
        pmPrefSpin->setObjectName(QStringLiteral("pmPrefSpin"));
        pmPrefSpin->setGeometry(QRect(310, 170, 71, 27));
        pmPrefSpin->setMaximum(5);
        dbSpinPref = new QSpinBox(Profilewindow);
        dbSpinPref->setObjectName(QStringLiteral("dbSpinPref"));
        dbSpinPref->setGeometry(QRect(310, 200, 71, 27));
        dbSpinPref->setMaximum(5);
        javaSpinPref = new QSpinBox(Profilewindow);
        javaSpinPref->setObjectName(QStringLiteral("javaSpinPref"));
        javaSpinPref->setGeometry(QRect(310, 230, 71, 27));
        javaSpinPref->setMaximum(5);
        cSpinPref = new QSpinBox(Profilewindow);
        cSpinPref->setObjectName(QStringLiteral("cSpinPref"));
        cSpinPref->setGeometry(QRect(310, 260, 71, 27));
        cSpinPref->setMaximum(5);
        jsSpinPref = new QSpinBox(Profilewindow);
        jsSpinPref->setObjectName(QStringLiteral("jsSpinPref"));
        jsSpinPref->setGeometry(QRect(310, 290, 71, 27));
        jsSpinPref->setMaximum(5);
        pythonSpinPref = new QSpinBox(Profilewindow);
        pythonSpinPref->setObjectName(QStringLiteral("pythonSpinPref"));
        pythonSpinPref->setGeometry(QRect(310, 320, 71, 27));
        pythonSpinPref->setMaximum(5);
        debuggingSpinPref = new QSpinBox(Profilewindow);
        debuggingSpinPref->setObjectName(QStringLiteral("debuggingSpinPref"));
        debuggingSpinPref->setGeometry(QRect(310, 350, 71, 27));
        debuggingSpinPref->setMaximum(5);
        docSpinPref = new QSpinBox(Profilewindow);
        docSpinPref->setObjectName(QStringLiteral("docSpinPref"));
        docSpinPref->setGeometry(QRect(310, 380, 71, 27));
        docSpinPref->setMaximum(5);
        mobileSpinPref = new QSpinBox(Profilewindow);
        mobileSpinPref->setObjectName(QStringLiteral("mobileSpinPref"));
        mobileSpinPref->setGeometry(QRect(310, 410, 71, 27));
        mobileSpinPref->setMaximum(5);
        networkingSpinPref = new QSpinBox(Profilewindow);
        networkingSpinPref->setObjectName(QStringLiteral("networkingSpinPref"));
        networkingSpinPref->setGeometry(QRect(310, 440, 71, 27));
        networkingSpinPref->setMaximum(5);
        uiSpinPref = new QSpinBox(Profilewindow);
        uiSpinPref->setObjectName(QStringLiteral("uiSpinPref"));
        uiSpinPref->setGeometry(QRect(310, 470, 71, 27));
        uiSpinPref->setMaximum(5);
        algSpinPref = new QSpinBox(Profilewindow);
        algSpinPref->setObjectName(QStringLiteral("algSpinPref"));
        algSpinPref->setGeometry(QRect(310, 500, 71, 27));
        algSpinPref->setMaximum(5);
        label_17 = new QLabel(Profilewindow);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(306, 100, 81, 20));
        line_3 = new QFrame(Profilewindow);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(0, 530, 391, 16));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        retranslateUi(Profilewindow);

        QMetaObject::connectSlotsByName(Profilewindow);
    } // setupUi

    void retranslateUi(QDialog *Profilewindow)
    {
        Profilewindow->setWindowTitle(QApplication::translate("Profilewindow", "Profile", 0));
        nameLabel->setText(QApplication::translate("Profilewindow", "Name:", 0));
        idLabel->setText(QApplication::translate("Profilewindow", "ID:", 0));
        label_3->setText(QApplication::translate("Profilewindow", "GPA(out of 12.00):", 0));
        label_4->setText(QApplication::translate("Profilewindow", "PPID(5 is best, 0 is worst)", 0));
        label_5->setText(QApplication::translate("Profilewindow", "PM skills:", 0));
        label_6->setText(QApplication::translate("Profilewindow", "Database:", 0));
        label_7->setText(QApplication::translate("Profilewindow", "Java:", 0));
        label_8->setText(QApplication::translate("Profilewindow", "C/Cpp:", 0));
        label_9->setText(QApplication::translate("Profilewindow", "JS/HTML:", 0));
        label_10->setText(QApplication::translate("Profilewindow", "Python:", 0));
        label_11->setText(QApplication::translate("Profilewindow", "Debugging/Testing:", 0));
        label_12->setText(QApplication::translate("Profilewindow", "Documentation:", 0));
        label_13->setText(QApplication::translate("Profilewindow", "Mobile Develop:", 0));
        label_14->setText(QApplication::translate("Profilewindow", "Networking:", 0));
        label_15->setText(QApplication::translate("Profilewindow", "UI Design:", 0));
        label_16->setText(QApplication::translate("Profilewindow", "Algorithm Design:", 0));
        pushButton->setText(QApplication::translate("Profilewindow", "Save", 0));
        label_17->setText(QApplication::translate("Profilewindow", "Preference", 0));
    } // retranslateUi

};

namespace Ui {
    class Profilewindow: public Ui_Profilewindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFILEWINDOW_H
