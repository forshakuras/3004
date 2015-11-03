#include "adminwindow.h"
#include "ui_adminwindow.h"
#include <QStandardItemModel>

AdminWIndow::AdminWIndow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AdminWIndow)
{
    ui->setupUi(this);
    QStandardItemModel *stdModel = new QStandardItemModel(this);
    QStandardItem* Items = new QStandardItem("Avatar");
    Items->setEditable(false);
    stdModel->appendRow(Items);
    QStandardItem* Item = new QStandardItem("Avatar");
    Items->setEditable(false);
    stdModel->appendRow(Item);

    ui->listView->setModel(stdModel);

}


AdminWIndow::~AdminWIndow()
{
    delete ui;
}
