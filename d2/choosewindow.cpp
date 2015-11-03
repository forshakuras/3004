#include "choosewindow.h"
#include "ui_choosewindow.h"

chooseWindow::chooseWindow(QWidget *parent,student_obj *student,studentpre_obj *studentPref) :
    QDialog(parent),
    ui(new Ui::chooseWindow)
{
    ui->setupUi(this);
    temp = student;
    temp1=studentPref;
}

chooseWindow::~chooseWindow()
{
    delete ui;
}


void chooseWindow::on_profileButton_clicked()
{
    profile = new Profilewindow(this, temp,temp1);
    profile->show();
}

void chooseWindow::on_projectButton_clicked()
{
    project = new projectWindow(this);
    project ->show();

}

void chooseWindow::on_signoutBUtton_clicked()
{
    entry = new Entrywindow(this);
    entry->show();
    hide();
}
