#include "projectwindow.h"
#include "ui_projectwindow.h"



projectWindow::projectWindow(QWidget *parent, student_obj *student, studentpre_obj *preference) :
    QDialog(parent),
    ui(new Ui::projectWindow)
{

    ui->setupUi(this);
    user = student;
    userpref = preference;

    project_control pc;
    pc.SearchAllProject(&data);
    QStandardItemModel *stdModel = new QStandardItemModel(this);
    QStandardItemModel *stdModel2 = new QStandardItemModel(this);
    ui->listView->setModel(stdModel);
    ui->registerproject->setModel(stdModel2);
    for(int i=0; i<data.size();i++){
        QStandardItem* Item = new QStandardItem(QString::fromStdString(data[i]->getTitle()));
        Item->setEditable(false);
        Item->setSelectable(true);
        stdModel->appendRow(Item);
    }

    for(int i=0; i<data.size();i++){
        QStandardItem* Item = new QStandardItem(QString::fromStdString(data[i]->getTitle()));
        Item->setEditable(false);
        Item->setSelectable(true);
        stdModel2->appendRow(Item);
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
   //DB_Utility db;
   int row = ui->listView->currentIndex().row();
   if ((user->getGpa() >= data[row]->getGpa()) && (user->getObjectDev() >= data[row]->getObjectDev()) &&
       (user->getDatabase() >= data[row]->getDatabase()) && (user->getWebDev() >= data[row]->getWebDev()) &&
       (user->getTeamWork() >= data[row]->getTeamWork()) && (user->getCommunication() >= data[row]->getCommunication()) &&
       (user->getWorkExperience() >= data[row]->getWorkExperience()) && (user->getCriticalThinking() >= data[row]->getCriticalThinking()) &&
       (user->getFlexibility() >= data[row]->getFlexibility()) && (user->getMultitasking() >= data[row]->getMultitasking()) &&
       (user->getLeadership() >= data[row]->getLeadership()) && (user->getAgileKnowledge() >= data[row]->getAgileKnowledge()) &&
       (user->getDocumentation() >= data[row]->getDocumentation())){

       ManageStudentControl* manage = new ManageStudentControl(user);
       bool rc = manage->JoinProjectOption(data[row]);

       if (rc){QMessageBox::information(this, tr("Congradulation"), tr("Successfully join the project !"));}
       else{
           QMessageBox::information(this, tr("Warning"), tr("You already registered in this project !"));
       }
   }else{
       QMessageBox::information(this, tr("Warning"), tr("You do not meet the minimum requirement of this project !"));

   }
}
