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
                newStudent->setPmSkill(data.value(3).toInt());
                newStudent->setDatabase(data.value(4).toInt());
                newStudent->setJava(data.value(5).toInt());
                newStudent->setCCpp(data.value(6).toInt());
                newStudent->setJsHtml(data.value(7).toInt());
                newStudent->setPython(data.value(8).toInt());
                newStudent->setDebug(data.value(9).toInt());
                newStudent->setDocument(data.value(10).toInt());
                newStudent->setMobile(data.value(11).toInt());
                newStudent->setNetwork(data.value(12).toInt());
                newStudent->setUi(data.value(13).toInt());
                newStudent->setAlgor(data.value(14).toInt());
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
            " pmSkill='"+intToString(newStudent->getPmSkill())+ "',"
            " database='"+intToString(newStudent->getDatabase())+ "',"
            " java='"+intToString(newStudent->getJava())+ "',"
            " cCpp='"+intToString(newStudent->getCCpp())+ "',"
            " jsHtml='"+intToString(newStudent->getJsHtml())+ "',"
            " python='"+intToString(newStudent->getPython())+ "',"
            " debuggingTesting='"+intToString(newStudent->getDebug())+ "',"
            " documentation='"+intToString(newStudent->getDocument())+ "',"
            " mobile='"+intToString(newStudent->getMobile())+ "',"
            " networking='"+intToString(newStudent->getNetwork())+ "',"
            " ui='"+intToString(newStudent->getUi())+ "',"
            " algorithm='"+intToString(newStudent->getAlgor())+"'"
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
            " '"+ intToString(newStudent->getPmSkill())+ "',"
            " '"+ intToString(newStudent->getDatabase())+ "',"
            " '"+ intToString(newStudent->getJava())+ "',"
            " '"+ intToString(newStudent->getCCpp())+ "',"
            " '"+ intToString(newStudent->getJsHtml())+ "',"
            " '"+ intToString(newStudent->getPython())+ "',"
            " '"+ intToString(newStudent->getDebug())+ "',"
            " '"+ intToString(newStudent->getDocument())+ "',"
            " '"+ intToString(newStudent->getMobile())+ "',"
            " '"+ intToString(newStudent->getNetwork())+ "',"
            " '"+ intToString(newStudent->getUi())+ "',"
            " '"+ intToString(newStudent->getAlgor())+ "',"
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
            " pmSkill='"+intToString(newStudent->getPmSkill())+ "',"
            " database='"+intToString(newStudent->getDatabase())+ "',"
            " java='"+intToString(newStudent->getJava())+ "',"
            " cCpp='"+intToString(newStudent->getCCpp())+ "',"
            " jsHtml='"+intToString(newStudent->getJsHtml())+ "',"
            " python='"+intToString(newStudent->getPython())+ "',"
            " debuggingTesting='"+intToString(newStudent->getDebug())+ "',"
            " documentation='"+intToString(newStudent->getDocument())+ "',"
            " mobile='"+intToString(newStudent->getMobile())+ "',"
            " networking='"+intToString(newStudent->getNetwork())+ "',"
            " ui='"+intToString(newStudent->getUi())+ "',"
            " algorithm='"+intToString(newStudent->getAlgor())+"'"
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
