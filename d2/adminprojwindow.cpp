#include "adminprojwindow.h"
#include "ui_adminprojwindow.h"
#include "db_utility.h"
AdminProjWindow::AdminProjWindow(QWidget *parent,project_obj *project) :
    QDialog(parent),
    ui(new Ui::AdminProjWindow)
{
    ui->setupUi(this);
    projob=project;
    ui->gpaSpin->setValue(projob->getGpa());
    ui->pmSpin->setValue(projob->getPmSkill());
    ui->dbSpin->setValue(projob->getDatabase());
    ui->javaSpin->setValue(projob->getJava());
    ui->cSpin->setValue(projob->getCCpp());
    ui->jsSpin->setValue(projob->getJsHtml());
    ui->pythonSpin->setValue(projob->getPython());
    ui->debugSpin->setValue(projob->getDebug());
    ui->docSpin->setValue(projob->getDocument());
    ui->mobileSpin->setValue(projob->getMobile());
    ui->networkSpin->setValue(projob->getNetwork());
    ui->uiSpin->setValue(projob->getUi());
    ui->algSpin->setValue(projob->getAlgor());
    ui->id->setText(QString::number(projob->getId()));
    ui->idealSpin->setValue(projob->getIdealNumberStudents());
    ui->maxSpin->setValue(projob->getMaxStudents());
    ui->projDesc->setText(QString::fromStdString(projob->getDescription()));
    ui->projName->setText(QString::fromStdString(projob->getTitle()));
}
void AdminProjWindow::on_saveButton_clicked()
{
    projob->setAlgor(ui->algSpin->value());
    projob->setCCpp(ui->cSpin->value());
    projob->setGpa(ui->gpaSpin->value());
    projob->setDatabase(ui->dbSpin->value());
    projob->setPmSkill(ui->pmSpin->value());
    projob->setJsHtml(ui->jsSpin->value());
    projob->setPython(ui->pythonSpin->value());
    projob->setDebug(ui->debugSpin->value());
    projob->setDocument(ui->docSpin->value());
    projob->setMobile(ui->mobileSpin->value());
    projob->setUi(ui->uiSpin->value());
    projob->setId(ui->id->text().toInt());
    projob->setIdealNumberStudents(ui->idealSpin->value());
    projob->setMaxStudents(ui->maxSpin->value());
    projob->setTitle(ui->projName->text().toStdString());
    projob->setDescription(ui->projDesc->text().toStdString());
    DB_Utility *db;
    db = new DB_Utility();
    db->DBModify_Project("projects",projob);
}

void AdminProjWindow::on_deleteButton_clicked()
{
    DB_Utility *db;
    db = new DB_Utility();
    db->DBRemove_Project("projects",projob);
}
AdminProjWindow::~AdminProjWindow()
{
    delete ui;
}
