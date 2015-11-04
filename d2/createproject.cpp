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
    //newProject->setId(ui->firstName);
}
