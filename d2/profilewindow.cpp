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
    ui->ooSpin->setValue(stu->getPmSkill());
    ui->dbSpin->setValue(stu->getDatabase());
    ui->webSpin->setValue(stu->getJava());
    ui->teamSpin->setValue(stu->getCCpp());
    ui->communicationSpin->setValue(stu->getJsHtml());
    ui->multiSpin->setValue(stu->getPython());
    ui->leadSpin->setValue(stu->getDebug());
    ui->docSpin->setValue(stu->getDocument());
    ui->criticalSpin->setValue(stu->getMobile());
    ui->expSpin->setValue(stu->getNetwork());
    ui->flexSpin->setValue(stu->getUi());
    ui->agileSpin->setValue(stu->getAlgor());
//-------------------------set pref value---------------------
    ui->gpaSpinPref->setValue(pref->getGpa());
    ui->ooPrefSpin->setValue(pref->getPmSkill());
    ui->dbSpinPref->setValue(pref->getDatabase());
    ui->webSpinPref->setValue(pref->getJava());
    ui->teamSpinPref->setValue(pref->getCCpp());
    ui->communicationSpinPref->setValue(pref->getJsHtml());
    ui->multiSpinPref->setValue(pref->getPython());
    ui->leadSpinPref->setValue(pref->getDebug());
    ui->docSpinPref->setValue(pref->getDocument());
    ui->criticalSpinPref->setValue(pref->getMobile());
    ui->expSpinPref->setValue(pref->getNetwork());
    ui->flexSpinPref->setValue(pref->getUi());
    ui->agileSpinPref->setValue(pref->getAlgor());

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
