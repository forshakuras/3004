#ifndef ENTRYWINDOW_H
#define ENTRYWINDOW_H

#include <QDialog>
#include <QDebug>
#include <QtSql>
#include <QFileInfo>
#include "choosewindow.h"
#include "adminwindow.h"
#include "student_obj.h"
#include "studentpre_obj.h"
#include "admin_obj.h"
#include "manageusercontrol.h"

class chooseWindow;
class AdminWIndow;

namespace Ui {
class Entrywindow;
}

class Entrywindow : public QDialog
{
    Q_OBJECT

public:
    explicit Entrywindow(QWidget *parent = 0);
    ~Entrywindow();

private slots:
    void on_Signupbutton_clicked();

    void on_Loginbutton_clicked();

    void on_studentCheckBox_pressed();

    void on_adminCheckBox_pressed();

private:
    Ui::Entrywindow *ui;
    chooseWindow *choose;
    AdminWIndow *admin;
};

#endif // ENTRYWINDOW_H
