#include "student_storagectrl.h"

student_storagectrl::student_storagectrl()
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


void student_storagectrl::DBSearch_Student(string tableName,string student_number,student_obj* returnObj)
{
    string strSql = "select * from "+ tableName + " where student_number = "+ student_number;
    if(db.open()){
        QSqlQuery data;
        if(data.exec(QString::fromStdString(strSql))){
            while(data.next()){
                returnObj->setFirstName(data.value(0).toString().toStdString());
                returnObj->setLastName(data.value(1).toString().toStdString());
                returnObj->setGpa(data.value(2).toFloat());
                returnObj->setObjectDev(data.value(3).toInt());
                returnObj->setDatabase(data.value(4).toInt());
                returnObj->setWebDev(data.value(5).toInt());
                returnObj->setFlexibility(data.value(6).toInt());
                returnObj->setCommunication(data.value(7).toInt());
                returnObj->setWorkExperience(data.value(8).toInt());
                returnObj->setCriticalThinking(data.value(9).toInt());
                returnObj->setDocumentation(data.value(10).toInt());
                returnObj->setTeamWork(data.value(11).toInt());
                returnObj->setMultitasking(data.value(12).toInt());
                returnObj->setLeadership(data.value(13).toInt());
                returnObj->setAgileKnowledge(data.value(14).toInt());
                returnObj->setStudent_number(data.value(15).toInt());
            }
        }else{
            cout << db.lastError().text().toStdString() << endl;
        }
    }
}

void student_storagectrl::DBSearch_Studentpref(string tableName,string student_number,studentpre_obj* returnObj)
{

    string strSql = "select * from "+ tableName + " where student_number = "+ student_number;
    if(db.open()){
        QSqlQuery data;
        if(data.exec(QString::fromStdString(strSql))){
            while(data.next()){
                returnObj->setFirstName(data.value(0).toString().toStdString());
                returnObj->setLastName(data.value(1).toString().toStdString());
                returnObj->setGpa(data.value(2).toFloat());
                returnObj->setObjectDev(data.value(3).toInt());
                returnObj->setDatabase(data.value(4).toInt());
                returnObj->setWebDev(data.value(5).toInt());
                returnObj->setFlexibility(data.value(6).toInt());
                returnObj->setCommunication(data.value(7).toInt());
                returnObj->setWorkExperience(data.value(8).toInt());
                returnObj->setCriticalThinking(data.value(9).toInt());
                returnObj->setDocumentation(data.value(10).toInt());
                returnObj->setTeamWork(data.value(11).toInt());
                returnObj->setMultitasking(data.value(12).toInt());
                returnObj->setLeadership(data.value(13).toInt());
                returnObj->setAgileKnowledge(data.value(14).toInt());
                returnObj->setStudent_number(data.value(15).toInt());
            }
        }else{
            cout << db.lastError().text().toStdString() << endl;
        }
    }
}


void student_storagectrl::DBSearchAll_Students(string tableName, vector<student_obj*>* studentList)
{
    string strSql = "select * from "+ tableName;
    if(db.open()){
        QSqlQuery data;
        if(data.exec(QString::fromStdString(strSql))){
            while(data.next()){
                student_obj* newStudent = new student_obj();
                newStudent->setFirstName(data.value(0).toString().toStdString());
                newStudent->setLastName(data.value(1).toString().toStdString());
                newStudent->setGpa(data.value(2).toFloat());
                newStudent->setObjectDev(data.value(3).toInt());
                newStudent->setDatabase(data.value(4).toInt());
                newStudent->setWebDev(data.value(5).toInt());
                newStudent->setFlexibility(data.value(6).toInt());
                newStudent->setCommunication(data.value(7).toInt());
                newStudent->setWorkExperience(data.value(8).toInt());
                newStudent->setCriticalThinking(data.value(9).toInt());
                newStudent->setDocumentation(data.value(10).toInt());
                newStudent->setTeamWork(data.value(11).toInt());
                newStudent->setMultitasking(data.value(12).toInt());
                newStudent->setLeadership(data.value(13).toInt());
                newStudent->setAgileKnowledge(data.value(14).toInt());
                newStudent->setStudent_number(data.value(15).toInt());
                studentList->push_back(newStudent);
            }
        }
    }else{
        cout << db.lastError().text().toStdString() << endl;
    }
}



void student_storagectrl::DBModify_Student(string tableName, student_obj* newStudent)
{
    string strSql = "update "+ tableName + " set" +
            " firstName='"+newStudent->getFirstName()+ "',"
            " lastName='"+newStudent->getLastName()+ "',"
            " gpa='"+floatToString(newStudent->getGpa())+ "',"
            " objectDev='"+intToString(newStudent->getObjectDev())+ "',"
            " database='"+intToString(newStudent->getDatabase())+ "',"
            " webDev='"+intToString(newStudent->getWebDev())+ "',"
            " flexibility='"+intToString(newStudent->getFlexibility())+ "',"
            " communication='"+intToString(newStudent->getCommunication())+ "',"
            " workExperience='"+intToString(newStudent->getWorkExperience())+ "',"
            " criticalThinking='"+intToString(newStudent->getCriticalThinking())+ "',"
            " documentation='"+intToString(newStudent->getDocumentation())+ "',"
            " teamwork='"+intToString(newStudent->getTeamWork())+ "',"
            " multitasking='"+intToString(newStudent->getMultitasking())+ "',"
            " leadership='"+intToString(newStudent->getLeadership())+ "',"
            " agileKnowledge='"+intToString(newStudent->getAgileKnowledge())+ "'"
            " where student_number='"+intToString(newStudent->getStudent_number())+"'"
            ;
    if(db.open()){
        QSqlQuery data;
        data.exec(QString::fromStdString(strSql));
    }else{
        cout << db.lastError().text().toStdString() << endl;
    }
}


void student_storagectrl::DBAdd_Student(string tableName, student_obj *newStudent)
{
    string strSql = "insert into "+ tableName + "(firstName,lastName,gpa,pmSkill,database,java,cCpp,jsHtml,python,debuggingTesting,documentation,mobile,networking,ui,algorithm,student_number) values "+
            "( '"+newStudent->getFirstName() +"',"
            " '"+ newStudent->getLastName()+"',"
            " '"+ floatToString(newStudent->getGpa())+"',"
            " '"+ intToString(newStudent->getObjectDev())+ "',"
            " '"+ intToString(newStudent->getDatabase())+ "',"
            " '"+ intToString(newStudent->getWebDev())+ "',"
            " '"+ intToString(newStudent->getFlexibility())+ "',"
            " '"+ intToString(newStudent->getCommunication())+ "',"
            " '"+ intToString(newStudent->getWorkExperience())+ "',"
            " '"+ intToString(newStudent->getCriticalThinking())+ "',"
            " '"+ intToString(newStudent->getDocumentation())+ "',"
            " '"+ intToString(newStudent->getTeamWork())+ "',"
            " '"+ intToString(newStudent->getMultitasking())+ "',"
            " '"+ intToString(newStudent->getLeadership())+ "',"
            " '"+ intToString(newStudent->getAgileKnowledge())+ "',"
            " '"+ intToString(newStudent->getStudent_number())+ "'"
            ")";
    if(db.open()){
           QSqlQuery data;
           data.exec(QString::fromStdString(strSql));
    }else{
           cout << db.lastError().text().toStdString() << endl;
    }
}


void student_storagectrl::DBModify_Studentpref(string tableName,studentpre_obj* newStudent)
{

    string strSql = "update "+ tableName + " set" +
            " firstName='"+newStudent->getFirstName()+ "',"
            " lastName='"+newStudent->getLastName()+ "',"
            " gpa='"+floatToString(newStudent->getGpa())+ "',"
            " objectDev='"+intToString(newStudent->getObjectDev())+ "',"
            " database='"+intToString(newStudent->getDatabase())+ "',"
            " webDev='"+intToString(newStudent->getWebDev())+ "',"
            " flexibility='"+intToString(newStudent->getFlexibility())+ "',"
            " communication='"+intToString(newStudent->getCommunication())+ "',"
            " workExperience='"+intToString(newStudent->getWorkExperience())+ "',"
            " criticalThinking='"+intToString(newStudent->getCriticalThinking())+ "',"
            " documentation='"+intToString(newStudent->getDocumentation())+ "',"
            " teamwork='"+intToString(newStudent->getTeamWork())+ "',"
            " multitasking='"+intToString(newStudent->getMultitasking())+ "',"
            " leadership='"+intToString(newStudent->getLeadership())+ "',"
            " agileKnowledge='"+intToString(newStudent->getAgileKnowledge())+ "'"
            " where student_number='"+intToString(newStudent->getStudent_number())+"'"
            ;
    if(db.open()){
        QSqlQuery data;
        data.exec(QString::fromStdString(strSql));
    }else{
        cout << db.lastError().text().toStdString() << endl;
    }
}


void student_storagectrl::DBRemove_Student(string tableName, student_obj *student)
{
    string strSql = "delete from "+tableName+" where student_number ="+ intToString(student->getStudent_number());
    if(db.open()){
        QSqlQuery data;
        data.exec(QString::fromStdString(strSql));
    }else{
        cout << db.lastError().text().toStdString() << endl;
    }
}


string student_storagectrl::floatToString(float x)
{
    stringstream ss (stringstream::in | stringstream::out);
    ss << x;
    return ss.str();
}


string student_storagectrl::intToString(int x)
{
    stringstream ss;
    ss << x;
    return ss.str();
}

void student_storagectrl::DBClose()
{
    db.close();
}
