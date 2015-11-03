#ifndef ADMINWINDOW_H
#define ADMINWINDOW_H

#include <QMainWindow>
#include "entrywindow.h"
#include "db_utility.h"
#include <QStandardItemModel>
#include "projectdesc.h"

class Entrywindow;
namespace Ui {
class AdminWIndow;
}

class AdminWIndow : public QMainWindow
{
    Q_OBJECT

public:
    explicit AdminWIndow(QWidget *parent = 0);
    ~AdminWIndow();

private slots:
    void on_pushButton_3_clicked();

    void on_listView_doubleClicked(const QModelIndex &index);

private:
    Ui::AdminWIndow *ui;
    Entrywindow *entry;
    projectDesc *projdesc;
    vector<project_obj*> proj;
};

#endif // ADMINWINDOW_H
