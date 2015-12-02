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
   //DB_Utility db;
   int row = ui->listView->currentIndex().row();
   if ((user->getGpa() >= data[row]->getGpa()) && (user->getPmSkill() >= data[row]->getPmSkill()) &&
       (user->getDatabase() >= data[row]->getDatabase()) && (user->getJava() >= data[row]->getJava()) &&
       (user->getCCpp() >= data[row]->getCCpp()) && (user->getJsHtml() >= data[row]->getJsHtml()) &&
       (user->getPython() >= data[row]->getPython()) && (user->getDebug() >= data[row]->getDebug()) &&
       (user->getDocument() >= data[row]->getDocument()) && (user->getMobile() >= data[row]->getMobile()) &&
       (user->getNetwork() >= data[row]->getNetwork()) && (user->getUi() >= data[row]->getUi()) &&
       (user->getAlgor() >= data[row]->getAlgor())){

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
