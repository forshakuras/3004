#include "choosewindow.h"
#include "ui_choosewindow.h"

chooseWindow::chooseWindow(QWidget *parent,student_obj *student) :
    QDialog(parent),
    ui(new Ui::chooseWindow)
{
    cout <<student->getJava()<<endl;
    ui->setupUi(this);
}

chooseWindow::~chooseWindow()
{
    delete ui;
}


void chooseWindow::on_profileButton_clicked()
{
    profile = new Profilewindow(this);
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
