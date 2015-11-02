#include "projectdesc.h"
#include "ui_projectdesc.h"

projectDesc::projectDesc(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::projectDesc)
{
    ui->setupUi(this);
}

projectDesc::~projectDesc()
{
    delete ui;
}
