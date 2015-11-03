#include "profilewindow.h"
#include "ui_profilewindow.h"


Profilewindow::Profilewindow(QWidget *parent, student_obj *student, studentpre_obj *preference) :

    QDialog(parent),
    ui(new Ui::Profilewindow)
{
    ui->setupUi(this);
    stu = student;

    pref = preference;
//---------------------------set quantification valu-------------------------

    ui->name->setText(QString::fromStdString(stu->getFirstName() + stu->getLastName()));
    ui->id->setText(QString::number(stu->getStudent_number()));
    ui->gpaSpin->setValue(stu->getGpa());
    ui->pmSpin->setValue(stu->getPmSkill());
    ui->dbSpin->setValue(stu->getDatabase());
    ui->javaSpin->setValue(stu->getJava());
    ui->cSpin->setValue(stu->getCCpp());
    ui->jsSpin->setValue(stu->getJsHtml());
    ui->pythonSpin->setValue(stu->getPython());
    ui->debuggingSpin->setValue(stu->getDebug());
    ui->docSpin->setValue(stu->getDocument());
    ui->mobileSpin->setValue(stu->getMobile());
    ui->networkingSpin->setValue(stu->getNetwork());
    ui->uiSpin->setValue(stu->getUi());
    ui->algSpin->setValue(stu->getAlgor());
//-------------------------set pref value---------------------
    ui->gpaSpinPref->setValue(pref->getGpa());
    ui->pmPrefSpin->setValue(pref->getPmSkill());
    ui->dbSpinPref->setValue(pref->getDatabase());
    ui->javaSpinPref->setValue(pref->getJava());
    ui->cSpinPref->setValue(pref->getCCpp());
    ui->jsSpinPref->setValue(pref->getJsHtml());
    ui->pythonSpinPref->setValue(pref->getPython());
    ui->debuggingSpinPref->setValue(pref->getDebug());
    ui->docSpinPref->setValue(pref->getDocument());
    ui->mobileSpinPref->setValue(pref->getMobile());
    ui->networkingSpinPref->setValue(pref->getNetwork());
    ui->uiSpinPref->setValue(pref->getUi());
    ui->algSpinPref->setValue(pref->getAlgor());

}

Profilewindow::~Profilewindow()
{
    delete ui;
}

void Profilewindow::on_pushButton_clicked()
{

}
