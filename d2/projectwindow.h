#ifndef PROJECTWINDOW_H
#define PROJECTWINDOW_H

#include <QDialog>
#include <vector>
#include <QStandardItemModel>
#include "project_obj.h"
#include "studentpre_obj.h"
#include "projectdesc.h"
#include <QMessageBox>
#include "managestudentcontrol.h"
#include "project_control.h"

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

    void on_leavebutton_clicked();

private:
    Ui::projectWindow *ui;
    projectDesc *desc;
    student_obj *user;
    studentpre_obj *userpref;
    vector<project_obj*> data;
    vector<project_obj*> registeredProj;
};

#endif // PROJECTWINDOW_H
