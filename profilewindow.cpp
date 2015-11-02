#include "profilewindow.h"
#include "ui_profilewindow.h"

Profilewindow::Profilewindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Profilewindow)
{
    ui->setupUi(this);
}

Profilewindow::~Profilewindow()
{
    delete ui;
}

void Profilewindow::on_pushButton_clicked()
{

}
