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
    newProject->setPmSkill(ui->pmSpin1->value());
    newProject->setDatabase(ui->dbSpin1->value());
    newProject->setJava(ui->javaSpin1->value());
    newProject->setCCpp(ui->cSpin1->value());
    newProject->setJsHtml(ui->jsSpin1->value());
    newProject->setPython(ui->pythonSpin1->value());
    newProject->setDebug(ui->debuggingSpin1->value());
    newProject->setDocument(ui->docSpin1->value());
    newProject->setMobile(ui->mobileSpin1->value());
    newProject->setNetwork(ui->networkingSpin1->value());
    newProject->setUi(ui->uiSpin1->value());
    newProject->setAlgor(ui->uiSpin1->value());
    DB_Utility db;
    db.DBAdd_Project("projects",newProject);
    hide();
}
