#include "entrywindow.h"
#include "ui_entrywindow.h"
#include <QMessageBox>
#include "choosewindow.h"
#include "adminwindow.h"
#include <iostream>
#include "student_obj.h"
#include "studentpre_obj.h"
<<<<<<< HEAD
#include "db_utility.h"
#include <vector>
=======
#include <QtSql>
#include "db_utility.h"
>>>>>>> 35f1a37c9caef40e7260dffb052ed4fc33952fc9

using namespace std;


Entrywindow::Entrywindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Entrywindow)
{

    ui->setupUi(this);
    QPixmap pix((QDir::currentPath() + QString("/carleton.jpg")));
    ui->label_carleton->setScaledContents(true);
    ui->label_carleton->setPixmap(pix);


}

Entrywindow::~Entrywindow()
{
    delete ui;
}

void Entrywindow::on_Signupbutton_clicked()
{

}

void Entrywindow::on_Loginbutton_clicked()
{

<<<<<<< HEAD
=======
    student_obj *data = new student_obj();
    DB_Utility db;

    db.DBSearch_Student("students",ui->lineEdit->text().toStdString(),data);

    if(data->getStudent_number()<0){
        QMessageBox msgBox;
        msgBox.setWindowTitle("Warning");
        msgBox.setText("Invaliad Username, please try again !");
        msgBox.exec();
        db.DBClose();
        free(data);
        return;
    }
>>>>>>> 35f1a37c9caef40e7260dffb052ed4fc33952fc9


//        vector<project_obj*> data2;
//        db.DBSearchAll_Projects("projects",&data2);
//        for(int i=0; i<data2.size();i++){
//            cout << data2[i]->getTitle() << endl;
//        }

    if(ui->studentCheckBox->isChecked()){
        choose = new chooseWindow(this);
        choose ->show();
        hide();
    }else if(ui->adminCheckBox->isChecked()){
        admin = new AdminWIndow(this);
        admin ->show();
        hide();
    }else{
        QMessageBox msgBox;
        msgBox.setWindowTitle("Warning");
        msgBox.setText("Please select Student or Administrator !");
        msgBox.exec();
    }
}

void Entrywindow::on_studentCheckBox_pressed()
{
    ui->adminCheckBox->setChecked(false);
}

void Entrywindow::on_adminCheckBox_pressed()
{
    ui->studentCheckBox->setChecked(false);
}
