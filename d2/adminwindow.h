#ifndef ADMINWINDOW_H
#define ADMINWINDOW_H

#include <QMainWindow>
#include "entrywindow.h"
#include "db_utility.h"
#include <QStandardItemModel>
#include "projectdesc.h"
#include "adminprojwindow.h"
#include "createproject.h"
#include "adminprojwindow.h"
class CreateProject;
class AdminProjWindow;
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

    void on_Createproject_clicked();

private:
    Ui::AdminWIndow *ui;
    AdminProjWindow *adProjWindow;
    Entrywindow *entry;
    projectDesc *projdesc;
    vector<project_obj*> proj;
    CreateProject *cpWindow;

};

#endif // ADMINWINDOW_H


