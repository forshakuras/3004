#ifndef CHOOSEWINDOW_H
#define CHOOSEWINDOW_H

#include <QDialog>

#include "profilewindow.h"
#include "projectwindow.h"
#include "entrywindow.h"
class Entrywindow;

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
    void on_projectButton_clicked();

    void on_signoutBUtton_clicked();

private:
    Ui::chooseWindow *ui;
    projectWindow *project;
    Profilewindow *profile;
    Entrywindow *entry;

};

#endif // CHOOSEWINDOW_H



