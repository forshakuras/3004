#ifndef PROJECTWINDOW_H
#define PROJECTWINDOW_H

#include <QDialog>
#include <vector>
#include <QStandardItemModel>
#include "db_utility.h"
#include "project_obj.h"
#include "studentpre_obj.h"
#include "projectdesc.h"
#include <QMessageBox>
#include "managestudentcontrol.h"

namespace Ui {
class projectWindow;
}

class projectWindow : public QDialog
{
    Q_OBJECT

public:
    explicit projectWindow(QWidget *parent = 0, student_obj *student = 0, studentpre_obj *preference = 0);
    ~projectWindow();

private slots:
    void on_listView_doubleClicked(const QModelIndex &index);

    void on_joinProj_clicked();

private:
    Ui::projectWindow *ui;
    projectDesc *desc;
    student_obj *user;
    studentpre_obj *userpref;
    vector<project_obj*> data;
};

#endif // PROJECTWINDOW_H
