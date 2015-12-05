#ifndef PROJECT_CONTROL_H
#define PROJECT_CONTROL_H

#include "student_obj.h"
#include "project_obj.h"
#include "db_control.h"
#include <string>
#include <iostream>
#include <vector>

using namespace std;

class project_control
{
public:
    project_control();
    void CreateProject(project_obj*);
    void DeleteProject(project_obj*);
    void SearchProject(string,project_obj*);
    void ModifyProject(project_obj*);
    void SearchAllProject(vector<project_obj*>*);
    void SearchStudentInProj(vector<int>*,project_obj*);
};

#endif // PROJECT_CONTROL_H
