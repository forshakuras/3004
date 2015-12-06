#include "createproject.h"
#include "ui_createproject.h"

CreateProject::CreateProject(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreateProject)
{
    ui->setupUi(this);
    newProject = new project_obj();
}

CreateProject::~CreateProject()
{
    delete ui;
}


void CreateProject::on_saveButton_clicked()
{
    newProject->setTitle(ui->projectTitle->text().toStdString());
    newProject->setMaxStudents(ui->maxMem->value());
    newProject->setIdealNumberStudents(ui->idealMem->value());
    newProject->setDescription(ui->projectDes->text().toStdString());
    newProject->setGpa(ui->gpaSpin1->value());
    newProject->setObjectDev(ui->pmSpin1->value());
    newProject->setDatabase(ui->dbSpin1->value());
    newProject->setWebDev(ui->javaSpin1->value());
    newProject->setFlexibility(ui->cSpin1->value());
    newProject->setCommunication(ui->jsSpin1->value());
    newProject->setWorkExperience(ui->pythonSpin1->value());
    newProject->setCriticalThinking(ui->debuggingSpin1->value());
    newProject->setDocumentation(ui->docSpin1->value());
    newProject->setTeamWork(ui->mobileSpin1->value());
    newProject->setMultitasking(ui->networkingSpin1->value());
    newProject->setLeadership(ui->uiSpin1->value());
    newProject->setAgileKnowledge(ui->uiSpin1->value());
    //DB_Utility db;
    //db.DBAdd_Project("projects",newProject);

    project_control pc;
    pc.CreateProject(newProject);
    admin= new AdminWIndow(this);
    admin->show();
    hide();
}
