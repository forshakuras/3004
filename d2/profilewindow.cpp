#include "profilewindow.h"
#include "ui_profilewindow.h"

using namespace std;
Profilewindow::Profilewindow(QWidget *parent, student_obj *student, studentpre_obj *preference) :

    QDialog(parent),
    ui(new Ui::Profilewindow)
{
    ui->setupUi(this);
    stu = student;

    pref = preference;
//---------------------------set quantification valu-------------------------

    ui->firstName->setText(QString::fromStdString(stu->getFirstName()));
    ui->lastName->setText(QString::fromStdString(stu->getLastName()));
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

void Profilewindow::on_saveButton_clicked()
{
    //=================update student object=======================
    stu->setStudent_number(ui->id->text().toInt());
    stu->setFirstName(ui->firstName->text().toStdString());
    stu->setLastName(ui->lastName->text().toStdString());
    stu->setGpa(ui->gpaSpin->value());
    stu->setPmSkill(ui->pmSpin->value());
    stu->setDatabase(ui->dbSpin->value());
    stu->setJava(ui->javaSpin->value());
    stu->setCCpp(ui->cSpin->value());
    stu->setJsHtml(ui->jsSpin->value());
    stu->setPython(ui->pythonSpin->value());
    stu->setDebug(ui->debuggingSpin->value());
    stu->setDocument(ui->docSpin->value());
    stu->setMobile(ui->mobileSpin->value());
    stu->setNetwork(ui->networkingSpin->value());
    stu->setUi(ui->uiSpin->value());
    stu->setAlgor(ui->algSpin->value());

    //======================update student preference================
    pref->setStudent_number(ui->id->text().toInt());
    pref->setFirstName(ui->firstName->text().toStdString());
    pref->setLastName(ui->lastName->text().toStdString());
    pref->setGpa(ui->gpaSpinPref->value());
    pref->setPmSkill(ui->pmPrefSpin->value());
    pref->setDatabase(ui->dbSpinPref->value());
    pref->setJava(ui->javaSpinPref->value());
    pref->setCCpp(ui->cSpinPref->value());
    pref->setJsHtml(ui->jsSpinPref->value());
    pref->setPython(ui->pythonSpinPref->value());
    pref->setDebug(ui->debuggingSpinPref->value());
    pref->setDocument(ui->docSpinPref->value());
    pref->setMobile(ui->mobileSpinPref->value());
    pref->setNetwork(ui->networkingSpinPref->value());
    pref->setUi(ui->uiSpinPref->value());
    pref->setAlgor(ui->algSpinPref->value());

    //=====================update db=============================
    ManageStudentControl *manager = new ManageStudentControl(stu);
    manager->ModifyProfile();
    manager->ModifyPref(pref);
    hide();

}
