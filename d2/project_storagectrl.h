#ifndef PROJECT_STORAGECTRL_H
#define PROJECT_STORAGECTRL_H
#include "student_obj.h"
#include "studentpre_obj.h"
#include "project_obj.h"
#include <QtSql>
#include <iostream>
#include <sstream>
#include <vector>
#include "admin_obj.h"
#include <QMessageBox>

class project_storagectrl
{
private:

    QSqlDatabase db;

public:
    project_storagectrl();
    void DBAdd_Project(string,project_obj*);
    void DBRemove_Project(string,project_obj*);
    void DBModify_Project(string,project_obj*);
    void DBSearchAll_Projects(string, vector<project_obj*>*);
    void DBSearch_Project(string, string, project_obj*); //search a project with project title; (tableName, title, student_obj* for saving the search result)
    bool DBAdd_StudentToProject(student_obj*, project_obj*);
    void DBSearch_StudentFromProjectList(vector<int>*,project_obj*);
    bool DBRemove_StudentFromProject(student_obj*, project_obj*);
    string floatToString(float);
    string intToString(int);
    void DBClose();
};

#endif // PROJECT_STORAGECTRL_H
