#ifndef DB_CONTROL_H
#define DB_CONTROL_H
#include "student_obj.h"
#include "student_storagectrl.h"
#include "studentpre_obj.h"
#include "project_obj.h"
#include "project_storagectrl.h"
#include "admin_obj.h"
#include "user_storagectrl.h"
#include <string>
#include <iostream>
#include <vector>

using namespace std;

class db_control
{
public:
    db_control();
    void studentstorage(string, student_obj*);
    void studentstorage(string, string, student_obj *);
    void studentstorage(string, studentpre_obj*);
    void studentstorage(string, string, studentpre_obj *);
    void studentstorage(string, vector<student_obj*>*);
    void projectstorage(string, project_obj*);
    void projectstorage(string, string, project_obj *);
    void projectstorage(string, vector<project_obj*>*);
    bool projectstorage(string, project_obj*, student_obj*);
    void projectstorage(string, vector<int>*,project_obj*);
    void userstorage(string, string, admin_obj*);
};

#endif // DB_CONTROL_H
