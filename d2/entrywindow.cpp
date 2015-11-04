#include "entrywindow.h"
#include "ui_entrywindow.h"
#include <QMessageBox>
#include "choosewindow.h"
#include "adminwindow.h"
#include <iostream>
#include "db_utility.h"
#include <vector>
#include <QtSql>


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


    DB_Utility db;


    if(ui->studentCheckBox->isChecked()){
        student_obj *data = new student_obj();
        studentpre_obj *pref = new studentpre_obj();
        db.DBSearch_Student("students",ui->lineEdit->text().toStdString(),data);
        db.DBSearch_Studentpref("studentPreferences",ui->lineEdit->text().toStdString(),pref);
            if(data->getStudent_number() == 0){
                QMessageBox msgBox;
                msgBox.setWindowTitle("Warning");
                msgBox.setText("Invaliad Username, please try again !");
                msgBox.exec();
                db.DBClose();
                free(data);
                free(pref);
                return;
            }
        choose = new chooseWindow(this,data,pref);

        choose ->show();
        hide();
    }else if(ui->adminCheckBox->isChecked()){
        admin_obj *temp = new admin_obj();
        db.DBSearch_Admin("admin",ui->lineEdit->text().toStdString(),temp);
        if(temp->getAdminNum() == 0){
            QMessageBox msgBox;
            msgBox.setWindowTitle("Warning");
            msgBox.setText("Invaliad Username, please try again !");
            msgBox.exec();
            db.DBClose();
            free(temp);
            return;
        }
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
