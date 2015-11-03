#ifndef PROJECTWINDOW_H
#define PROJECTWINDOW_H

#include <QDialog>
#include <vector>
#include <QStandardItemModel>
#include "db_utility.h"
#include "project_obj.h"
#include "projectdesc.h"

namespace Ui {
class projectWindow;
}

class projectWindow : public QDialog
{
    Q_OBJECT

public:
    explicit projectWindow(QWidget *parent = 0);
    ~projectWindow();

private slots:
    void on_listView_doubleClicked(const QModelIndex &index);

private:
    Ui::projectWindow *ui;
    projectDesc *desc;
    vector<project_obj*> data;
};

#endif // PROJECTWINDOW_H
