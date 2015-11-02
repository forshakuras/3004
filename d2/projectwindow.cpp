#include "projectwindow.h"
#include "ui_projectwindow.h"

projectWindow::projectWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::projectWindow)
{
    ui->setupUi(this);
}

projectWindow::~projectWindow()
{
    delete ui;
}
