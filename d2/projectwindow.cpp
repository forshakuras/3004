#include "projectwindow.h"
#include "ui_projectwindow.h"



projectWindow::projectWindow(QWidget *parent, student_obj *student, studentpre_obj *preference) :
    QDialog(parent),
    ui(new Ui::projectWindow)
{

    ui->setupUi(this);
    user = student;
    userpref = preference;

    DB_Utility db;

    db.DBSearchAll_Projects("projects",&data);
    QStandardItemModel *stdModel = new QStandardItemModel(this);
    ui->listView->setModel(stdModel);
    for(int i=0; i<data.size();i++){
        QStandardItem* Item = new QStandardItem(QString::fromStdString(data[i]->getTitle()));
        Item->setEditable(false);
        Item->setSelectable(true);
        stdModel->appendRow(Item);
    }


}

projectWindow::~projectWindow()
{
    delete ui;
}

void projectWindow::on_listView_doubleClicked(const QModelIndex &index)
{
    int row = ui->listView->currentIndex().row();
    desc = new projectDesc(this, data[row]);
    desc->show();
}

void projectWindow::on_joinProj_clicked()
{
   DB_Utility db;
   int row = ui->listView->currentIndex().row();
   db.DBAdd_StudentToProject(user,data[row]);
}
