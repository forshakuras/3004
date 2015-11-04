#ifndef ADMINPROJWINDOW_H
#define ADMINPROJWINDOW_H

#include <QDialog>
#include "project_obj.h"
namespace Ui {
class AdminProjWindow;
}

class AdminProjWindow : public QDialog
{
    Q_OBJECT

public:
    explicit AdminProjWindow(QWidget *parent = 0,project_obj *project=0);
    ~AdminProjWindow();

private:
    Ui::AdminProjWindow *ui;
    project_obj *projob;
};

#endif // ADMINPROJWINDOW_H
