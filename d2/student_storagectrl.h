#ifndef STUDENT_STORAGECTRL_H
#define STUDENT_STORAGECTRL_H
#include "student_obj.h"
#include "studentpre_obj.h"
#include "project_obj.h"
#include <QtSql>
#include <iostream>
#include <sstream>
#include <vector>
#include "admin_obj.h"
#include <QMessageBox>

using namespace std;

class student_storagectrl
{
private:

    QSqlDatabase db;

public:
    student_storagectrl();
    void DBAdd_Student(string,student_obj*);
    void DBRemove_Student(string,student_obj*);
    void DBSearch_Student(string, string, student_obj*); //search a student with student ID; (tableName, student_number, student_obj* for saving the search result)
    void DBModify_Student(string,student_obj*);
    void DBModify_Studentpref(string ,studentpre_obj*);
    void DBSearch_Studentpref(string,string,studentpre_obj*);
    void DBSearchAll_Students(string, vector<student_obj*>*);
    string floatToString(float);
    string intToString(int);
    void DBClose();
};

#endif // STUDENT_STORAGECTRL_H
