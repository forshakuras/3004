#ifndef ADMINWINDOW_H
#define ADMINWINDOW_H

#include <QMainWindow>

namespace Ui {
class AdminWIndow;
}

class AdminWIndow : public QMainWindow
{
    Q_OBJECT

public:
    explicit AdminWIndow(QWidget *parent = 0);
    ~AdminWIndow();

private:
    Ui::AdminWIndow *ui;
};

#endif // ADMINWINDOW_H
