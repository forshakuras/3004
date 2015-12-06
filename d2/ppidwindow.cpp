#include "ppidwindow.h"
#include "ui_ppidwindow.h"

PPIDwindow::PPIDwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PPIDwindow)
{
    ui->setupUi(this);
}

PPIDwindow::~PPIDwindow()
{
    delete ui;
}

void PPIDwindow::on_back_clicked()
{
    this->close();
}
