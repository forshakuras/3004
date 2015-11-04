#include "adminwindow.h"
#include "ui_adminwindow.h"



AdminWIndow::AdminWIndow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AdminWIndow)
{
    ui->setupUi(this);
    DB_Utility db;

    cpWindow = new CreateProject();

    db.DBSearchAll_Projects("projects",&proj);
    QStandardItemModel *stdModel = new QStandardItemModel(this);
    ui->listView->setModel(stdModel);
    for(int i=0; i<proj.size();i++){
        QStandardItem* Item = new QStandardItem(QString::fromStdString(proj[i]->getTitle()));
        Item->setEditable(false);
        Item->setSelectable(true);
        stdModel->appendRow(Item);
    }


}


AdminWIndow::~AdminWIndow()
{
    delete ui;
}

void AdminWIndow::on_pushButton_3_clicked()
{
    entry = new Entrywindow(this);
    entry->show();
    hide();
}

void AdminWIndow::on_listView_doubleClicked(const QModelIndex &index)
{
    int row = ui->listView->currentIndex().row();
    adProjWindow = new AdminProjWindow(this,proj[row]);
    adProjWindow->show();
    hide();
}

void AdminWIndow::on_Createproject_clicked()
{
    cpWindow->show();
}
