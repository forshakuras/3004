#include "adminprojwindow.h"
#include "ui_adminprojwindow.h"
#include "qmessagebox.h"


AdminProjWindow::AdminProjWindow(QWidget *parent,project_obj *project) :
    QDialog(parent),
    ui(new Ui::AdminProjWindow)
{
    ui->setupUi(this);
    projob=project;
    ui->gpaSpin->setValue(projob->getGpa());
    ui->ooSpin->setValue(projob->getObjectDev());
    ui->dbSpin->setValue(projob->getDatabase());
    ui->webSpin->setValue(projob->getWebDev());
    ui->teamSpin->setValue(projob->getTeamWork());
    ui->communicationSpin->setValue(projob->getCommunication());
    ui->expSpin->setValue(projob->getWorkExperience());
    ui->criticalSpin->setValue(projob->getCriticalThinking());
    ui->docSpin->setValue(projob->getDocumentation());
    ui->flexSpin->setValue(projob->getFlexibility());
    ui->multiSpin->setValue(projob->getMultitasking());
    ui->leadSpin->setValue(projob->getLeadership());
    ui->agileSpin->setValue(projob->getAgileKnowledge());
    ui->id->setText(QString::number(projob->getId()));
    ui->idealSpin->setValue(projob->getIdealNumberStudents());
    ui->maxSpin->setValue(projob->getMaxStudents());
    ui->projDesc->setText(QString::fromStdString(projob->getDescription()));
    ui->projName->setText(QString::fromStdString(projob->getTitle()));

    //----------------------------set member list------------------
    QStandardItemModel *stdModel = new QStandardItemModel(this);
    //DB_Utility *db = new DB_Utility();
    project_control *pc = new project_control();
    ManageUserControl *uc = new ManageUserControl();
    vector<int> id;
    student_obj *temp;
    studentpre_obj *temp1;

    ui->memberlist->setModel(stdModel);
    //db->DBSearch_StudentFromProjectList(&id,projob);
    pc->SearchStudentInProj(&id,projob);
    for (int i = 0; i< id.size(); i++){
        temp = new student_obj();
        temp1 = new studentpre_obj();
        //db->DBSearch_Student("students",db->intToString(id[i]),temp);
        uc->getStudent(uc->intToString(id[i]),temp,temp1);
        QStandardItem* Item = new QStandardItem(QString::fromStdString(temp->getFirstName() + " " +temp->getLastName()));
        Item->setEditable(false);
        Item->setSelectable(true);
        stdModel->appendRow(Item);
        free(temp1);
    }
}
void AdminProjWindow::on_saveButton_clicked()
{
    projob->setObjectDev(ui->ooSpin->value());
    projob->setWebDev(ui->webSpin->value());
    projob->setGpa(ui->gpaSpin->value());
    projob->setDatabase(ui->dbSpin->value());
    projob->setTeamWork(ui->teamSpin->value());
    projob->setCommunication(ui->communicationSpin->value());
    projob->setMultitasking(ui->multiSpin->value());
    projob->setWorkExperience(ui->expSpin->value());
    projob->setCriticalThinking(ui->criticalSpin->value());
    projob->setDocumentation(ui->docSpin->value());
    projob->setFlexibility(ui->flexSpin->value());
    projob->setId(ui->id->text().toInt());
    projob->setIdealNumberStudents(ui->idealSpin->value());
    projob->setMaxStudents(ui->maxSpin->value());
    projob->setTitle(ui->projName->text().toStdString());
    projob->setDescription(ui->projDesc->text().toStdString());
    projob->setLeadership(ui->leadSpin->value());
    projob->setAgileKnowledge((ui->agileSpin->value()));
    //DB_Utility *db;
    //db = new DB_Utility();
    //db->DBModify_Project("projects",projob);
    project_control *pc = new project_control();
    pc->ModifyProject(projob);
    adminWindow= new AdminWIndow(this);
    adminWindow->show();
    hide();
}

void AdminProjWindow::on_deleteButton_clicked()
{
    //DB_Utility *db;
    //db = new DB_Utility();
    //db->DBRemove_Project("projects",projob);
    project_control *pc = new project_control();
    pc->DeleteProject(projob);
    adminWindow= new AdminWIndow(this);
    adminWindow->show();
    hide();
}
void AdminProjWindow::on_cancelButton_clicked()
{
    adminWindow= new AdminWIndow(this);
    adminWindow->show();
    hide();
}
AdminProjWindow::~AdminProjWindow()
{
    delete ui;
}

void AdminProjWindow::on_pushButton_clicked()
{
    vector<int> *teamsize = new vector<int>();
    vector<int> *studentIDlist = new vector<int>();
    PPID *firstpart = new PPIDpart1();
    //    if(firstpart->precheckPPID(projob)){
    firstpart->runPPID(projob,teamsize,studentIDlist);
    PPID *secondpart = new PPIDpart2();
    secondpart->runPPID(projob,teamsize,studentIDlist);
    //    }else{
    //        QMessageBox::information(this, tr("Warning"), tr("This project already have PPID teams !"));
    //    }

    ppid = new PPIDwindow(this,projob);
    ppid->show();
}
