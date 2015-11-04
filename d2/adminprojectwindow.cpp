#include "adminprojectwindow.h"
#include "ui_adminprojectwindow.h"

AdminProjectWindow::AdminProjectWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminProjectWindow)
{
    ui->setupUi(this);
}

AdminProjectWindow::~AdminProjectWindow()
{
    delete ui;
}
