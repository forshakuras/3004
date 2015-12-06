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

projectDesc::~projectDesc()
{
    delete ui;
}
