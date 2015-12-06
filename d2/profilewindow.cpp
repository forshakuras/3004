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
    ui->ooSpin->setValue(stu->getObjectDev());
    ui->dbSpin->setValue(stu->getDatabase());
    ui->webSpin->setValue(stu->getWebDev());
    ui->teamSpin->setValue(stu->getTeamWork());
    ui->communicationSpin->setValue(stu->getCommunication());
    ui->multiSpin->setValue(stu->getMultitasking());
    ui->leadSpin->setValue(stu->getLeadership());
    ui->docSpin->setValue(stu->getDocumentation());
    ui->criticalSpin->setValue(stu->getCriticalThinking());
    ui->expSpin->setValue(stu->getWorkExperience());
    ui->flexSpin->setValue(stu->getFlexibility());
    ui->agileSpin->setValue(stu->getAgileKnowledge());
//-------------------------set pref value---------------------
    ui->gpaSpinPref->setValue(pref->getGpa());
    ui->ooSpinPref->setValue(pref->getObjectDev());
    ui->dbSpinPref->setValue(pref->getDatabase());
    ui->webSpinPref->setValue(pref->getWebDev());
    ui->teamSpinPref->setValue(pref->getTeamWork());
    ui->communicationSpinPref->setValue(pref->getCommunication());
    ui->multiSpinPref->setValue(pref->getMultitasking());
    ui->leadSpinPref->setValue(pref->getLeadership());
    ui->docSpinPref->setValue(pref->getDocumentation());
    ui->criticalSpinPref->setValue(pref->getCriticalThinking());
    ui->expSpinPref->setValue(pref->getWorkExperience());
    ui->flexSpinPref->setValue(pref->getFlexibility());
    ui->agileSpinPref->setValue(pref->getAgileKnowledge());

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
    stu->setObjectDev(ui->ooSpin->value());
    stu->setDatabase(ui->dbSpin->value());
    stu->setWebDev(ui->webSpin->value());
    stu->setTeamWork(ui->teamSpin->value());
    stu->setCommunication(ui->communicationSpin->value());
    stu->setWorkExperience(ui->expSpin->value());
    stu->setCriticalThinking(ui->criticalSpin->value());
    stu->setDocumentation(ui->docSpin->value());
    stu->setFlexibility(ui->flexSpin->value());
    stu->setMultitasking(ui->multiSpin->value());
    stu->setLeadership(ui->leadSpin->value());
    stu->setAgileKnowledge(ui->agileSpin->value());

    //======================update student preference================
    pref->setStudent_number(ui->id->text().toInt());
    pref->setFirstName(ui->firstName->text().toStdString());
    pref->setLastName(ui->lastName->text().toStdString());
    pref->setGpa(ui->gpaSpinPref->value());
    pref->setObjectDev(ui->ooSpinPref->value());
    pref->setDatabase(ui->dbSpinPref->value());
    pref->setWebDev(ui->webSpinPref->value());
    pref->setTeamWork(ui->teamSpinPref->value());
    pref->setCommunication(ui->communicationSpinPref->value());
    pref->setWorkExperience(ui->expSpinPref->value());
    pref->setCriticalThinking(ui->criticalSpinPref->value());
    pref->setDocumentation(ui->docSpinPref->value());
    pref->setFlexibility(ui->flexSpinPref->value());
    pref->setMultitasking(ui->multiSpinPref->value());
    pref->setLeadership(ui->leadSpinPref->value());
    pref->setAgileKnowledge(ui->agileSpinPref->value());

    //=====================update db=============================
    ManageStudentControl *manager = new ManageStudentControl(stu);
    manager->ModifyProfile();
    manager->ModifyPref(pref);
    hide();

}
