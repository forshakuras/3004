#ifndef PROFILEWINDOW_H
#define PROFILEWINDOW_H

#include <QDialog>
#include "studentpre_obj.h"
#include "student_obj.h"
#include "db_utility.h"
#include "iostream"

namespace Ui {
class Profilewindow;
}

class Profilewindow : public QDialog
{
    Q_OBJECT

public:

    explicit Profilewindow(QWidget *parent = 0, student_obj *student = 0, studentpre_obj *preference = 0);
    ~Profilewindow();

private slots:
    void on_saveButton_clicked();

private:
    Ui::Profilewindow *ui;
    student_obj *stu;
    studentpre_obj * pref;


};

#endif // PROFILEWINDOW_H
