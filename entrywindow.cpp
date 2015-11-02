#include "entrywindow.h"
#include "ui_entrywindow.h"
#include <QMessageBox>
#include "choosewindow.h"
#include "adminwindow.h"
#include <sqlite3.h>
#include <iostream>
#include "student_obj.h"
#include "studentpre_obj.h"

using namespace std;

//database
extern sqlite3 *db = NULL;

Entrywindow::Entrywindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Entrywindow)
{
    int rc;

    rc = sqlite3_open("cupidDB.db",&db);
    if(rc == SQLITE_OK){
        cout << "Access cupid database successfully !";

    }else{
        cout << "Failed to access cupid database !";
        exit(0);
    }

    QPixmap pix("/home/admin/Desktop/d2/carleton.jpg");
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
<<<<<<< HEAD

        sqlite3 *db;
        int rc;
        string userinput = ui->lineEdit->text().toStdString();
        string strSql;
        char* errmsg;


        rc = sqlite3_open("cupidDB.db",&db);
        if(rc == SQLITE_OK){
            strSql="select * from students where values" + userinput;
            cout << strSql << endl;
            cout << strSql.c_str() << endl;
            int msg = sqlite3_exec(db,strSql.c_str(),NULL,NULL,&errmsg);
            cout << msg +"msg" << endl;
            cout << errmsg << endl;
            cout << "success" << endl;

        }else{
            cout << "fault" << endl;
        }

        sqlite3_close(db);


=======
>>>>>>> 63e18fd69a01ed5db5d0f035fc9331fd839b5cf3
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
