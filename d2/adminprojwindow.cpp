#include "adminprojwindow.h"
#include "ui_adminprojwindow.h"

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

}

AdminProjWindow::~AdminProjWindow()
{
    delete ui;
}
