#ifndef CREATEPROJECT_H
#define CREATEPROJECT_H

#include <QDialog>
#include <iostream>
#include "project_obj.h"

namespace Ui {
class CreateProject;
}

class CreateProject : public QDialog
{
    Q_OBJECT

public:
    explicit CreateProject(QWidget *parent = 0);
    ~CreateProject();

private slots:
    void on_saveButton_clicked();

private:
    Ui::CreateProject *ui;
    project_obj *newProject;
};

#endif // CREATEPROJECT_H
