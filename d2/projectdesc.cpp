#include "projectdesc.h"
#include "ui_projectdesc.h"

projectDesc::projectDesc(QWidget *parent, project_obj *proj) :
    QDialog(parent),
    ui(new Ui::projectDesc)
{
    projob = proj;
    ui->setupUi(this);

    ui->lineEdit->setText(QString::number(projob->getId()));
    ui->projDesc->setReadOnly(true);
    ui->projDesc->setText(QString::fromStdString(projob->getDescription()));
    ui->member->setText(QString::number(projob->getCurrentStudent()) + QString::fromStdString("/") + QString::number(projob->getMaxStudents()));
    ui->agileLabel->setText(QString::number(projob->getAgileKnowledge()));
    ui->ooLabel->setText(QString::number(projob->getObjectDev()));
    ui->gpaLabel->setText(QString::number(projob->getGpa()));
    ui->webLabel->setText(QString::number(projob->getWebDev()));
    ui->dbLabel->setText(QString::number(projob->getDatabase()));
    ui->teamLabel->setText(QString::number(projob->getTeamWork()));
    ui->communicationLabel->setText(QString::number(projob->getCommunication()));
    ui->expLabel->setText(QString::number(projob->getWorkExperience()));
    ui->critLabel->setText(QString::number(projob->getCriticalThinking()));
    ui->multiLabel->setText(QString::number(projob->getMultitasking()));
    ui->docLabel->setText(QString::number(projob->getDocumentation()));
    ui->leadLabel->setText(QString::number(projob->getLeadership()));
    ui->flexLabel->setText(QString::number(projob->getFlexibility()));

    //------------------------set member list-------------------------
    QStandardItemModel *stdModel = new QStandardItemModel(this);
    project_control *pc = new project_control();
    ManageUserControl *uc = new ManageUserControl();
    vector<int> id;
    student_obj *temp;
    studentpre_obj *temp1;

    ui->memberlist->setModel(stdModel);
    pc->SearchStudentInProj(&id,projob);

    for (int i = 0; i< id.size(); i++){
        temp = new student_obj();
        temp1 = new studentpre_obj();
        uc->getStudent(uc->intToString(id[i]),temp,temp1);
        QStandardItem* Item = new QStandardItem(QString::fromStdString(temp->getFirstName() + " " +temp->getLastName()));
        Item->setEditable(false);
        Item->setSelectable(true);
        stdModel->appendRow(Item);
        free(temp1);
    }

}

projectDesc::~projectDesc()
{
    delete ui;
}
