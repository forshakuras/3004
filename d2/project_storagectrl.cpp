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
                newProject->setObjectDev(data.value(7).toInt());
                newProject->setDatabase(data.value(8).toInt());
                newProject->setWebDev(data.value(9).toInt());
                newProject->setFlexibility(data.value(10).toInt());
                newProject->setCommunication(data.value(11).toInt());
                newProject->setWorkExperience(data.value(12).toInt());
                newProject->setCriticalThinking(data.value(13).toInt());
                newProject->setDocumentation(data.value(14).toInt());
                newProject->setTeamWork(data.value(15).toInt());
                newProject->setMultitasking(data.value(16).toInt());
                newProject->setLeadership(data.value(17).toInt());
                newProject->setAgileKnowledge(data.value(18).toInt());
                projectList->push_back(newProject);
            }
        }else{
            cout << db.lastError().text().toStdString() << endl;
        }
    }
}


void project_storagectrl::DBSearch_Project(string tableName, string title, project_obj* newProject)
{
    cout<< title << endl;
    string strSql = "select * from "+ tableName + " where projectId = " + title;
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
                 newProject->setObjectDev(data.value(7).toInt());
                 newProject->setDatabase(data.value(8).toInt());
                 newProject->setWebDev(data.value(9).toInt());
                 newProject->setFlexibility(data.value(10).toInt());
                 newProject->setCommunication(data.value(11).toInt());
                 newProject->setWorkExperience(data.value(12).toInt());
                 newProject->setCriticalThinking(data.value(13).toInt());
                 newProject->setDocumentation(data.value(14).toInt());
                 newProject->setTeamWork(data.value(15).toInt());
                 newProject->setMultitasking(data.value(16).toInt());
                 newProject->setLeadership(data.value(17).toInt());
                 newProject->setAgileKnowledge(data.value(18).toInt());
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
            " objectDev='"+intToString(newProject->getObjectDev())+ "',"
            " database='"+intToString(newProject->getDatabase())+ "',"
            " webDev='"+intToString(newProject->getWebDev())+ "',"
            " flexibility='"+intToString(newProject->getFlexibility())+ "',"
            " communication='"+intToString(newProject->getCommunication())+ "',"
            " workExperience='"+intToString(newProject->getWorkExperience())+ "',"
            " criticalThinking='"+intToString(newProject->getCriticalThinking())+ "',"
            " documentation='"+intToString(newProject->getDocumentation())+ "',"
            " teamwork='"+intToString(newProject->getTeamWork())+ "',"
            " multitasking='"+intToString(newProject->getMultitasking())+ "',"
            " leadership='"+intToString(newProject->getLeadership())+ "',"
            " agileKnowledge='"+intToString(newProject->getAgileKnowledge())+ "'"
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
    string strSql = "insert into "+ tableName + "(title,maxStudents,currentStudents,idealNumberStudents,description,gpa,objectDev,database,webDev,flexibility,communication,workExperience,criticalThinking,documentation,teamwork,multitasking,leadership,agileKnowledge)"
            " values " "( '" + newProject->getTitle()+"',"
            " '"+ intToString(newProject->getMaxStudents())+ "',"
            " '"+ intToString(newProject->getCurrentStudent())+ "',"
            " '"+ intToString(newProject->getIdealNumberStudents())+ "',"
            " '"+ newProject->getDescription() + "',"
            " '"+ floatToString(newProject->getGpa())+ "',"
            " '"+ intToString(newProject->getObjectDev())+ "',"
            " '"+ intToString(newProject->getDatabase())+ "',"
            " '"+ intToString(newProject->getWebDev())+ "',"
            " '"+ intToString(newProject->getFlexibility())+ "',"
            " '"+ intToString(newProject->getCommunication())+ "',"
            " '"+ intToString(newProject->getWorkExperience())+ "',"
            " '"+ intToString(newProject->getCriticalThinking())+ "',"
            " '"+ intToString(newProject->getDocumentation())+ "',"
            " '"+ intToString(newProject->getTeamWork())+ "',"
            " '"+ intToString(newProject->getMultitasking())+ "',"
            " '"+ intToString(newProject->getLeadership())+ "',"
            " '"+ intToString(newProject->getAgileKnowledge())+ "'"
            ")";
     if(db.open()){
            QSqlQuery data;
            data.exec(QString::fromStdString(strSql));
            cout << strSql << endl;
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
//        student_obj *temp;
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
