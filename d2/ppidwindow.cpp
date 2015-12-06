#include "ppidwindow.h"
#include "ui_ppidwindow.h"

PPIDwindow::PPIDwindow(QWidget *parent, project_obj *project) :
    QDialog(parent),
    ui(new Ui::PPIDwindow)
{
    ui->setupUi(this);
    QStringList columns;
    columns << "Project ID" << "Team ID" << "Student Number";
    vector<int>* studentList = new vector<int>;
    vector<int>* projectList = new vector<int>;
    vector<int>* teamList = new vector<int>;
    ui->tableWidget->setColumnCount(3);
    ui->tableWidget->setColumnWidth(2,300);
    ui->tableWidget->setHorizontalHeaderLabels(columns);
    project_control* pc=new project_control();

    string result;
    stringstream ss;
    ss << project->getId();
    result = ss.str();
    pc->SearchProjectTeams(result,projectList,teamList,studentList);
    ui->tableWidget->setRowCount(studentList->size());
    for(int i=0;i<studentList->size();i++){
        QTableWidgetItem *item2 = new QTableWidgetItem(QString::number(teamList->at(i)));
        QTableWidgetItem *item1 = new QTableWidgetItem(QString::number(projectList->at(i)));
        QTableWidgetItem *item3 = new QTableWidgetItem(QString::number(studentList->at(i)));
        ui->tableWidget->setItem(i,0,item1);
        ui->tableWidget->setItem(i,1,item2);
        ui->tableWidget->setItem(i,2,item3);


    }
}

PPIDwindow::~PPIDwindow()
{
    delete ui;
}

void PPIDwindow::on_back_clicked()
{
    this->close();
}
