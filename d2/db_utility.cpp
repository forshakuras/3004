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
            }
        }else{
            cout << db.lastError().text().toStdString() << endl;
        }
    }
}

void DB_Utility::DBSearch_Studentpref(string tableName,string student_number,studentpre_obj* returnObj)
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

void DB_Utility::DBSearch_Admin(string tableName, string admin_number, admin_obj* admin)
{
    string strSql = "select * from "+ tableName + " where admin_number = "+ admin_number;
    if(db.open()){
        QSqlQuery data;
        if(data.exec(QString::fromStdString(strSql))){
             while(data.next()){
                 admin->setFirstName(data.value(0).toString().toStdString());
                 admin->setLastName(data.value(1).toString().toStdString());
                 admin->setAdminNum(data.value(2).toInt());
             }
        }else{
            cout << db.lastError().text().toStdString() << endl;
        }
    }
}

void DB_Utility::DBSearch_Project(string tableName, string title, project_obj* newProject)
{
    string strSql = "select * from "+ tableName + " where title = "+ title;
    if(db.open()){
        QSqlQuery data;
        if(data.exec(QString::fromStdString(strSql))){
             while(data.next()){
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
             }
        }
    }else{
        cout << db.lastError().text().toStdString() << endl;
    }
}

void DB_Utility::DBSearchAll_Students(string tableName, vector<student_obj*>* studentList)
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

void DB_Utility::DBModify_Student(string tableName, student_obj* newStudent)
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


void DB_Utility::DBAdd_Project(string tableName, project_obj* newProject)
{
    string strSql = "insert into "+ tableName + "(title,description,idealNumberStudents, maxStudents,currentStudents,gpa,pmSkill,database,java,cCpp,jsHtml,python,debuggingTesting,documentation,mobile,networking,ui,algorithm)"
            " values " "( '" + newProject->getTitle()+"',"
            " '"+ newProject->getDescription() + "',"
            " '"+ intToString(newProject->getIdealNumberStudents())+ "',"
            " '"+ intToString(newProject->getMaxStudents())+ "',"
            " '"+ intToString(newProject->getCurrentStudent())+ "',"
            " '"+ intToString(newProject->getGpa())+ "',"
            " '"+ intToString(newProject->getPmSkill())+ "',"
            " '"+ intToString(newProject->getDatabase())+ "',"
            " '"+ intToString(newProject->getJava())+ "',"
            " '"+ intToString(newProject->getCCpp())+ "',"
            " '"+ intToString(newProject->getJsHtml())+ "',"
            " '"+ intToString(newProject->getPython())+ "',"
            " '"+ intToString(newProject->getDebug())+ "',"
            " '"+ intToString(newProject->getDocument())+ "',"
            " '"+ intToString(newProject->getMobile())+ "',"
            " '"+ intToString(newProject->getNetwork())+ "',"
            " '"+ intToString(newProject->getUi())+ "',"
            " '"+ intToString(newProject->getAlgor())+ "'"
            ")";
     if(db.open()){
            QSqlQuery data;
            data.exec(QString::fromStdString(strSql));
     }else{
            cout << db.lastError().text().toStdString() << endl;
     }
}


void DB_Utility::DBModify_Studentpref(string tableName,studentpre_obj* newStudent)
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

void DB_Utility::DBAdd_StudentToProject(student_obj *student, project_obj *project)
{
    string strSql = "insert into studentList (student_number,projectId) values ('"+ intToString(student->getStudent_number())+"','"+ intToString(project->getId())+"')";
    if(db.open()){
        QSqlQuery data;
        data.exec(QString::fromStdString(strSql));
    }else{
        cout << db.lastError().text().toStdString() << endl;
    }
}

void DB_Utility::DBSearch_StudentFromProjectList(vector<int>* studentNum, project_obj *project)
{
    string strSql = "select * from studentList where projectId = "+ intToString(project->getId());
    cout << strSql << endl;
    if(db.open()){
        QSqlQuery data;
        student_obj *temp;
        int i=1;
        if(data.exec(QString::fromStdString(strSql))){
            while(data.next()){
                cout << i << endl;
                cout << data.value(1).toString().toStdString() << endl;
                int num = data.value(1).toInt();
                studentNum->push_back(num);
                i++;
            }
        }
    }else{
        cout << db.lastError().text().toStdString() << endl;
    }
}


string DB_Utility::floatToString(float x)
{
    stringstream ss (stringstream::in | stringstream::out);
    ss << x;
    return ss.str();
}

string DB_Utility::intToString(int x)
{
    stringstream ss;
    ss << x;
    return ss.str();
}
