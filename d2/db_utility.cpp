#include "db_utility.h"

DB_Utility::DB_Utility()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("cupidDB.db");
    if(db.open()){
        cout<< "Database open successful!" << endl;
    }else{
        cout<< "Database open fault!" << endl;
        exit(0);
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

void DB_Utility::DBSearchAll_Projects(string tableName, vector<project_obj*>* projectList)
{
    string strSql = "select * from "+ tableName;
    if(db.open()){
        QSqlQuery data;
        if(data.exec(QString::fromStdString(strSql))){
            while(data.next()){
                project_obj* newProject = new project_obj();
                newProject->setId(data.value(0).toInt());
                newProject->setTitle(data.value(1).toString().toStdString());
                newProject->setMaxStudents(data.value(2).toInt());
                newProject->setCurrentStudent(data.value(3).toInt());
                newProject->setIdealNumberStudents(data.value(4).toInt());
                newProject->setDescription(data.value(5).toString().toStdString());
                newProject->setGpa(data.value(6).toFloat());
                newProject->setPmSkill(data.value(7).toInt());
                newProject->setDatabase(data.value(8).toInt());
                newProject->setJava(data.value(9).toInt());
                newProject->setCCpp(data.value(10).toInt());
                newProject->setJsHtml(data.value(11).toInt());
                newProject->setPython(data.value(12).toInt());
                newProject->setDebug(data.value(13).toInt());
                newProject->setDocument(data.value(14).toInt());
                newProject->setMobile(data.value(15).toInt());
                newProject->setNetwork(data.value(16).toInt());
                newProject->setUi(data.value(17).toInt());
                newProject->setAlgor(data.value(18).toInt());
                projectList->push_back(newProject);
            }
        }else{
            cout << db.lastError().text().toStdString() << endl;
        }
    }
}
