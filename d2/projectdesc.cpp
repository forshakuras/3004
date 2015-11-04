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
    ui->algLabel->setText(QString::number(projob->getAlgor()));
    ui->cLabel->setText(QString::number(projob->getCCpp()));
    ui->gpaLabel->setText(QString::number(projob->getGpa()));
    ui->pmLabel->setText(QString::number(projob->getPmSkill()));
    ui->dbLabel->setText(QString::number(projob->getDatabase()));
    ui->javaLabel->setText(QString::number(projob->getJava()));
    ui->jsLabel->setText(QString::number(projob->getJsHtml()));
    ui->mobileLabel->setText(QString::number(projob->getMobile()));
    ui->pythonLabel->setText(QString::number(projob->getPython()));
    ui->debugLabel->setText(QString::number(projob->getDebug()));
    ui->docLabel->setText(QString::number(projob->getDocument()));
    ui->networkLabel->setText(QString::number(projob->getNetwork()));
    ui->uiLabel->setText(QString::number(projob->getUi()));

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
