#include "adminwindow.h"
#include "ui_adminwindow.h"

AdminWIndow::AdminWIndow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AdminWIndow)
{
    ui->setupUi(this);

}

AdminWIndow::~AdminWIndow()
{
    delete ui;
}
