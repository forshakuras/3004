#include "projectdesc.h"
#include "ui_projectdesc.h"

projectDesc::projectDesc(QWidget *parent, project_obj *proj) :
    QDialog(parent),
    ui(new Ui::projectDesc)
{
    projob = proj;
    ui->setupUi(this);

    ui->lineEdit->setText(QString::number(projob->getId()));
    ui->textBrowser->setText(QString::fromStdString(projob->getDescription()));
    ui->member->setText(QString::number(projob->getCurrentStudent()) + QString::fromStdString("/") + QString::number(projob->getMaxStudents()));
}

projectDesc::~projectDesc()
{
    delete ui;
}
