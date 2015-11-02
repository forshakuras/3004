#ifndef CHOOSEWINDOW_H
#define CHOOSEWINDOW_H

#include <QDialog>

#include "profilewindow.h"
#include "projectwindow.h"

namespace Ui {
class chooseWindow;
}

class chooseWindow : public QDialog
{
    Q_OBJECT

public:
    explicit chooseWindow(QWidget *parent = 0);
    ~chooseWindow();


private slots:
    void on_profileButton_clicked();


private slots:
    void on_projectButton_clicked();
private:
    Ui::chooseWindow *ui;
    projectWindow *project;
    Profilewindow *profile;

};

#endif // CHOOSEWINDOW_H
