#ifndef PROJECTDESC_H
#define PROJECTDESC_H

#include <QDialog>
#include "project_obj.h"
#include "db_utility.h"
#include <vector>
#include <QStandardItemModel>

using namespace std;
namespace Ui {
class projectDesc;
}

class projectDesc : public QDialog
{
    Q_OBJECT

public:
    explicit projectDesc(QWidget *parent = 0, project_obj *proj = 0);
    ~projectDesc();

private:
    Ui::projectDesc *ui;
    project_obj *projob;
};

#endif // PROJECTDESC_H
