#ifndef ADMINWINDOW_H
#define ADMINWINDOW_H

#include <QMainWindow>
#include "entrywindow.h"

class Entrywindow;
namespace Ui {
class AdminWIndow;
}

class AdminWIndow : public QMainWindow
{
    Q_OBJECT

public:
    explicit AdminWIndow(QWidget *parent = 0);
    ~AdminWIndow();

private slots:
    void on_pushButton_3_clicked();

private:
    Ui::AdminWIndow *ui;
    Entrywindow *entry;
};

#endif // ADMINWINDOW_H
