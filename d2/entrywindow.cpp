#include "entrywindow.h"
#include "ui_entrywindow.h"
#include <QMessageBox>
#include "choosewindow.h"
#include "adminwindow.h"
#include <iostream>
#include "student_obj.h"
#include "studentpre_obj.h"
#include <QtSql>

using namespace std;


Entrywindow::Entrywindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Entrywindow)
{

    ui->setupUi(this);
    QPixmap pix("/home/admin/d2/carleton.jpg");
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
    if(ui->studentCheckBox->isChecked()){

        QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName("d2.sql");

//        if(db.open()){
//            string strSql="select * from sqlite_master WHERE name LIKE 'students'";
//            db.exec(strSql.c_str());
//            cout << msg << endl;
//            cout << "success" << endl;
//        }else{
//            cout << "fault" << endl;
//        }




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
