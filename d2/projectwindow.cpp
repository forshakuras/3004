#include "projectwindow.h"
#include "ui_projectwindow.h"



projectWindow::projectWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::projectWindow)
{

    ui->setupUi(this);

    DB_Utility db;

    db.DBSearchAll_Projects("projects",&data);
    QStandardItemModel *stdModel = new QStandardItemModel(this);
    ui->listView->setModel(stdModel);
    for(int i=0; i<data.size();i++){
        QStandardItem* Item = new QStandardItem(QString::fromStdString(data[i]->getTitle()));
        Item->setEditable(false);
        Item->setSelectable(true);
        stdModel->appendRow(Item);
      //  connect(stdModel, SIGNAL(doubleClicked(const QModelIndex &index)), this, SLOT(doubleClicked(const QModelIndex &index2)));
    }
   // ui->listView->setSelectionMode(QAbstractItemView::ExtendedSelection);

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
    cout << data[row]->getTitle() <<endl;
}
