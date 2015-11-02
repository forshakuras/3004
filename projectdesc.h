#ifndef PROJECTDESC_H
#define PROJECTDESC_H

#include <QDialog>

namespace Ui {
class projectDesc;
}

class projectDesc : public QDialog
{
    Q_OBJECT

public:
    explicit projectDesc(QWidget *parent = 0);
    ~projectDesc();

private:
    Ui::projectDesc *ui;
};

#endif // PROJECTDESC_H
