#include "choosewindow.h"
#include "ui_choosewindow.h"


chooseWindow::chooseWindow(QWidget *parent,student_obj *student, studentpre_obj *preference) :

    QDialog(parent),
    ui(new Ui::chooseWindow)
{
    ui->setupUi(this);
    temp = student;
    pref = preference;

}

chooseWindow::~chooseWindow()
{
    delete ui;
}


void chooseWindow::on_profileButton_clicked()
{

    profile = new Profilewindow(this, temp, pref);
    profile->show();
}

void chooseWindow::on_projectButton_clicked()
{
    project = new projectWindow(this, temp, pref);
    project ->show();

}

void chooseWindow::on_signoutBUtton_clicked()
{
    entry = new Entrywindow(this);
    entry->show();
    hide();
}
