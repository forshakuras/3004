#ifndef DB_UTILITY_H
#define DB_UTILITY_H
#include "student_obj.h"
#include "studentpre_obj.h"
#include "project_obj.h"
#include <QtSql>
#include <iostream>
#include <sstream>
#include <vector>
#include "admin_obj.h"

using namespace std;

class DB_Utility
{
private:

    QSqlDatabase db;

public:
    DB_Utility();
    void DBClose();
    void DBSearch_Student(string, string, student_obj*); //search a student with student ID; (tableName, student_number, student_obj* for saving the search result)
    void DBSearch_Studentpref(string,string,studentpre_obj*);
    void DBSearch_Project(string, string, project_obj*); //search a project with project title; (tableName, title, student_obj* for saving the search result)
    void DBSearchAll_Students(string, vector<student_obj*>*);
    void DBSearchAll_Projects(string, vector<project_obj*>*);
    void DBAdd_Student(string,student_obj*);
    void DBAdd_Project(string,project_obj*);
    void DBRemove_Student(string,student_obj*);
    void DBRemove_Project(string,project_obj*);
    void DBModify_Student(string,student_obj*);
    void DBModify_Studentpref(string ,studentpre_obj*);
    void DBModify_Project(string,project_obj*);
    void DBSearch_Admin(string, string, admin_obj*);
    void DBAdd_StudentToProject(student_obj*, project_obj*);
    void DBSearch_StudentFromProjectList(student_obj*,project_obj*);
    string floatToString(float);
    string intToString(int);
};

#endif // DB_UTILITY_H
