#ifndef PROFILEWINDOW_H
#define PROFILEWINDOW_H

#include <QDialog>


namespace Ui {
class Profilewindow;
}

class Profilewindow : public QDialog
{
    Q_OBJECT

public:
    explicit Profilewindow(QWidget *parent = 0);
    ~Profilewindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Profilewindow *ui;

};

#endif // PROFILEWINDOW_H
