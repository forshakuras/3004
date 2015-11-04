#ifndef ADMINPROJWINDOW_H
#define ADMINPROJWINDOW_H

#include <QDialog>
#include "project_obj.h"
#include <QStandardItemModel>
#include "db_utility.h"
#include "adminwindow.h"
class AdminWIndow;

namespace Ui {
class AdminProjWindow;
}

class AdminProjWindow : public QDialog
{
    Q_OBJECT

public:
    explicit AdminProjWindow(QWidget *parent = 0,project_obj *project=0);
    ~AdminProjWindow();

private slots:
    void on_cancelButton_clicked();
    void on_saveButton_clicked();
    void on_deleteButton_clicked();

private:
    AdminWIndow *adminWindow;
    Ui::AdminProjWindow *ui;
    project_obj *projob;
};

#endif // ADMINPROJWINDOW_H
