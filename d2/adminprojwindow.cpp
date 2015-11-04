#include "adminprojwindow.h"
#include "ui_adminprojwindow.h"

AdminProjWindow::AdminProjWindow(QWidget *parent,project_obj *project) :
    QDialog(parent),
    ui(new Ui::AdminProjWindow)
{
    ui->setupUi(this);
    projob=project;
    ui->gpaSpin->setValue(projob->getGpa());
    ui->pmSpin->setValue(projob->getPmSkill());
    ui->dbSpin->setValue(projob->getDatabase());
    ui->javaSpin->setValue(projob->getJava());
    ui->cSpin->setValue(projob->getCCpp());
    ui->jsSpin->setValue(projob->getJsHtml());
    ui->pythonSpin->setValue(projob->getPython());
    ui->debugSpin->setValue(projob->getDebug());
    ui->docSpin->setValue(projob->getDocument());
    ui->mobileSpin->setValue(projob->getMobile());
    ui->networkSpin->setValue(projob->getNetwork());
    ui->uiSpin->setValue(projob->getUi());
    ui->algSpin->setValue(projob->getAlgor());
    ui->id->setText(QString::number(projob->getId()));
    ui->idealSpin->setValue(projob->getIdealNumberStudents());
    ui->maxSpin->setValue(projob->getMaxStudents());
    ui->projDesc->setText(QString::fromStdString(projob->getDescription()));
    ui->projName->setText(QString::fromStdString(projob->getTitle()));

    //----------------------------set member list------------------
    QStandardItemModel *stdModel = new QStandardItemModel(this);
    DB_Utility *db = new DB_Utility();
    vector<int> id;
    student_obj *temp;

    ui->memberlist->setModel(stdModel);
    db->DBSearch_StudentFromProjectList(&id,projob);

    for (int i = 0; i< id.size(); i++){
        temp = new student_obj();
        db->DBSearch_Student("students",db->intToString(id[i]),temp);
        QStandardItem* Item = new QStandardItem(QString::fromStdString(temp->getFirstName() + " " +temp->getLastName()));
        Item->setEditable(false);
        Item->setSelectable(true);
        stdModel->appendRow(Item);
    }
}

AdminProjWindow::~AdminProjWindow()
{
    delete ui;
}
