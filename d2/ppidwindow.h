#ifndef PPIDWINDOW_H
#define PPIDWINDOW_H

#include <QDialog>

namespace Ui {
class PPIDwindow;
}

class PPIDwindow : public QDialog
{
    Q_OBJECT

public:
    explicit PPIDwindow(QWidget *parent = 0);
    ~PPIDwindow();


private:
    Ui::PPIDwindow *ui;

private slots:
    void on_back_clicked();
};

#endif // PPIDWINDOW_H
