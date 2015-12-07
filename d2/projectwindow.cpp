#include "projectwindow.h"
#include "ui_projectwindow.h"



projectWindow::projectWindow(QWidget *parent, student_obj *student, studentpre_obj *preference) :
    QDialog(parent),
    ui(new Ui::projectWindow)
{

    ui->setupUi(this);
    user = student;
    userpref = preference;

    string Result;//string which will contain the result

    stringstream convert; // stringstream used for the conversion

    convert << user->getStudent_number();//add the value of Number to the characters in the stream

    Result = convert.str();//set Result to the content of the stream


    project_control pc;
    pc.SearchAllProject(&data);
    pc.SearchProjectofstudent(Result,&registeredProj);

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

    for(int j=0; j<registeredProj.size();j++){
        QStandardItem* Item = new QStandardItem(QString::fromStdString(registeredProj[j]->getTitle()));
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

       if (rc){
           QMessageBox::information(this, tr("Congradulation"), tr("Successfully join the project !"));
       }
       else{
           QMessageBox::information(this, tr("Warning"), tr("You already registered in this project !"));
       }
   }else{
       QMessageBox::information(this, tr("Warning"), tr("You do not meet the minimum requirement of this project !"));

   }
}

void projectWindow::on_leavebutton_clicked()
{
    if (ui->registerproject->model()->rowCount() == 0){
        QMessageBox::information(this, tr("Warning"), tr("No Registered Project Avaliable!"));
        return;
    }
    int row = ui->registerproject->currentIndex().row();
    ManageStudentControl *sc = new ManageStudentControl(user);

    bool rc = sc->LeaveProjectOption(registeredProj[row]);

    if (rc){
        QMessageBox::information(this, tr("Congradulation"), tr("Successfully leave the project !"));
    }
    else{
        QMessageBox::information(this, tr("Warning"), tr("Failed to remove you from project!"));
    }

}
