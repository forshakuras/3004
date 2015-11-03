#include "db_utility.h"

DB_Utility::DB_Utility()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("cupidDB.db");
    if(db.open()){
        cout<< "Database open successful!" << endl;
    }else{
        cout<< "Database open fault!" << endl;
    }
}

void DB_Utility::DBClose()
{
    db.close();
}

void DB_Utility::DBSearch_Student(string tableName,string student_number,student_obj* returnObj)
{

    string strSql = "select * from "+ tableName + " where student_number = "+ student_number;
    if(db.open()){
        QSqlQuery data;
        if(data.exec(QString::fromStdString(strSql))){
            while(data.next()){
                returnObj->setFirstName(data.value(0).toString().toStdString());
                returnObj->setLastName(data.value(1).toString().toStdString());
                returnObj->setGpa(data.value(2).toFloat());
                returnObj->setPmSkill(data.value(3).toInt());
                returnObj->setDatabase(data.value(4).toInt());
                returnObj->setJava(data.value(5).toInt());
                returnObj->setCCpp(data.value(6).toInt());
                returnObj->setJsHtml(data.value(7).toInt());
                returnObj->setPython(data.value(8).toInt());
                returnObj->setDebug(data.value(9).toInt());
                returnObj->setDocument(data.value(10).toInt());
                returnObj->setMobile(data.value(11).toInt());
                returnObj->setNetwork(data.value(12).toInt());
                returnObj->setUi(data.value(13).toInt());
                returnObj->setAlgor(data.value(14).toInt());
                returnObj->setStudent_number(data.value(15).toInt());
//                cout << "inside"+ data.value(0).toString().toStdString() << endl;
            }
        }else{
            cout << db.lastError().text().toStdString() << endl;
        }
    }

//    cout << "test:"+returnObj->getFirstName() << endl;
}

void DB_Utility::DBSearch_Project(string tableName,string title, project_obj* returnObj)
{
    string strSql = "select * from "+ tableName + " where title = "+ title;

}

