#ifndef PROJECTWINDOW_H
#define PROJECTWINDOW_H

#include <QDialog>

namespace Ui {
class projectWindow;
}

class projectWindow : public QDialog
{
    Q_OBJECT

public:
    explicit projectWindow(QWidget *parent = 0);
    ~projectWindow();

private:
    Ui::projectWindow *ui;
};

#endif // PROJECTWINDOW_H
