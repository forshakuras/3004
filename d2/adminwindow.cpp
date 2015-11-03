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
    QStandardItem* Item = new QStandardItem("Avatar2");
    Item->setEditable(false);
    stdModel->appendRow(Item);

    ui->listView->setModel(stdModel);

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
