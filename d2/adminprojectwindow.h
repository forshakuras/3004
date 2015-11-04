#ifndef ADMINPROJECTWINDOW_H
#define ADMINPROJECTWINDOW_H

#include <QDialog>

namespace Ui {
class AdminProjectWindow;
}

class AdminProjectWindow : public QDialog
{
    Q_OBJECT

public:
    explicit AdminProjectWindow(QWidget *parent = 0);
    ~AdminProjectWindow();

private:
    Ui::AdminProjectWindow *ui;
};

#endif // ADMINPROJECTWINDOW_H
