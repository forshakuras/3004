#include "projectwindow.h"
#include "ui_projectwindow.h"



projectWindow::projectWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::projectWindow)
{
    ui->setupUi(this);

    DB_Utility db;
    vector<project_obj*> data;
    db.DBSearchAll_Projects("projects",&data);
    QStandardItemModel *stdModel = new QStandardItemModel(this);
    ui->listView->setModel(stdModel);
    for(int i=0; i<data.size();i++){
        QStandardItem* Item = new QStandardItem(QString::fromStdString(data[i]->getTitle()));
        Item->setEditable(false);
        Item->setSelectable(true);

        stdModel->appendRow(Item);
        connect(stdModel, SIGNAL(doubleClicked(const QModelIndex &index)), this, SLOT(doubleClicked(const QModelIndex &index2)));
    }
    ui->listView->setSelectionMode(QAbstractItemView::ExtendedSelection);

}

projectWindow::~projectWindow()
{
    delete ui;
}

void projectWindow::on_listView_doubleClicked(const QModelIndex &index)
{

    cout << "asda"<<endl;
}
