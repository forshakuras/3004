#ifndef PROJECTWINDOW_H
#define PROJECTWINDOW_H

#include <QDialog>
#include <vector>
#include <QStandardItemModel>
#include "db_utility.h"
#include "project_obj.h"


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
};

#endif // PROJECTWINDOW_H
