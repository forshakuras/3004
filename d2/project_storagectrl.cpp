#include "project_storagectrl.h"

project_storagectrl::project_storagectrl()
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


void project_storagectrl::DBSearchAll_Projects(string tableName, vector<project_obj*>* projectList)
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


void project_storagectrl::DBSearch_Project(string tableName, string title, project_obj* newProject)
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


void project_storagectrl::DBModify_Project(string tableName, project_obj * newProject)
{
    string strSql = "update "+ tableName + " set" +
            " title='"+newProject->getTitle()+ "',"
            " maxStudents='"+intToString(newProject->getMaxStudents())+"',"
            " currentStudents='"+intToString(newProject->getCurrentStudent())+ "',"
            " idealNumberStudents='"+intToString(newProject->getIdealNumberStudents())+ "',"
            " gpa='"+floatToString(newProject->getGpa())+ "',"
            " pmSkill='"+intToString(newProject->getPmSkill())+ "',"
            " database='"+intToString(newProject->getDatabase())+ "',"
            " java='"+intToString(newProject->getJava())+ "',"
            " cCpp='"+intToString(newProject->getCCpp())+ "',"
            " jsHtml='"+intToString(newProject->getJsHtml())+ "',"
            " python='"+intToString(newProject->getPython())+ "',"
            " debuggingTesting='"+intToString(newProject->getDebug())+ "',"
            " documentation='"+intToString(newProject->getDocument())+ "',"
            " mobile='"+intToString(newProject->getMobile())+ "',"
            " networking='"+intToString(newProject->getNetwork())+ "',"
            " ui='"+intToString(newProject->getUi())+ "',"
            " algorithm='"+intToString(newProject->getAlgor())+"'"
            " where projectId='"+intToString(newProject->getId())+"'"
            ;
    cout << strSql << endl;
    if(db.open()){
        QSqlQuery data;
        data.exec(QString::fromStdString(strSql));
    }else{
        cout << db.lastError().text().toStdString() << endl;
    }
}


void project_storagectrl::DBAdd_Project(string tableName, project_obj* newProject)
{
    string strSql = "insert into "+ tableName + "(title,description,idealNumberStudents, maxStudents,currentStudents,gpa,pmSkill,database,java,cCpp,jsHtml,python,debuggingTesting,documentation,mobile,networking,ui,algorithm)"
            " values " "( '" + newProject->getTitle()+"',"
            " '"+ newProject->getDescription() + "',"
            " '"+ intToString(newProject->getIdealNumberStudents())+ "',"
            " '"+ intToString(newProject->getMaxStudents())+ "',"
            " '"+ intToString(newProject->getCurrentStudent())+ "',"
            " '"+ floatToString(newProject->getGpa())+ "',"
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



bool project_storagectrl::DBAdd_StudentToProject(student_obj *student, project_obj *project)
{
    string str = "select * from studentList where projectId = " +intToString(project->getId()) +" and student_number = " + intToString(student->getStudent_number());

    QSqlQuery condition;
    condition.exec(QString::fromStdString(str));
    if (condition.next() == true){
        return false;
    }

    string strSql = "insert into studentList (student_number,projectId) values ('"+ intToString(student->getStudent_number())+"','"+ intToString(project->getId())+"')";

    QSqlQuery data;
    data.exec(QString::fromStdString(strSql));
    return true;

}





void project_storagectrl::DBSearch_StudentFromProjectList(vector<int>* studentNum, project_obj *project)
{
    string strSql = "select * from studentList where projectId = "+ intToString(project->getId());

    if(db.open()){
        QSqlQuery data;
        student_obj *temp;
        int i=1;
        if(data.exec(QString::fromStdString(strSql))){
            while(data.next()){
                int num = data.value(1).toInt();
                studentNum->push_back(num);
                i++;
            }
        }
    }else{
        cout << db.lastError().text().toStdString() << endl;
    }
}

bool project_storagectrl::DBRemove_StudentFromProject(student_obj *student, project_obj *project)
{
    string str = "delete from studentList where projectId = " + intToString(project->getId()) + " and student_number = "+ intToString(student->getStudent_number());

    if(db.open()){
        QSqlQuery data;
        data.exec(QString::fromStdString(str));
        return true;
    }else{
        cout << db.lastError().text().toStdString() << endl;
    }

    return false;
}


void project_storagectrl::DBRemove_Project(string tableName, project_obj *project)
{
    string strSql = "delete from "+tableName+" where title = '"+project->getTitle()+"'";
    if(db.open()){
        QSqlQuery data;
        data.exec(QString::fromStdString(strSql));
    }else{
        cout << db.lastError().text().toStdString() << endl;
    }
}



string project_storagectrl::floatToString(float x)
{
    stringstream ss (stringstream::in | stringstream::out);
    ss << x;
    return ss.str();
}


string project_storagectrl::intToString(int x)
{
    stringstream ss;
    ss << x;
    return ss.str();
}


void project_storagectrl::DBClose()
{
    db.close();
}
