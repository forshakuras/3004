#ifndef PROFILEWINDOW_H
#define PROFILEWINDOW_H

#include <QDialog>
#include "studentpre_obj.h"
#include "student_obj.h"

namespace Ui {
class Profilewindow;
}

class Profilewindow : public QDialog
{
    Q_OBJECT

public:
    explicit Profilewindow(QWidget *parent = 0, student_obj *student = 0,studentpre_obj *studentPref=0);
    ~Profilewindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Profilewindow *ui;
    student_obj *stu;
    studentpre_obj *stuPref;

};

#endif // PROFILEWINDOW_H
