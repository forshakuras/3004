#include "db_control.h"

db_control::db_control()
{
}


void db_control::studentstorage(string tag, student_obj *student)
{
    student_storagectrl* sc = new student_storagectrl();

    if(tag == "add"){
        sc->DBAdd_Student("students",student);
    }
    if(tag == "remove"){
        sc->DBRemove_Student("students",student);
    }
    if(tag == "modify"){
        sc->DBModify_Student("students",student);
    }

    sc->DBClose();
}

void db_control::studentstorage(string tag, string student_number, student_obj *student)
{
    student_storagectrl* sc = new student_storagectrl();

    if(tag == "search"){
        sc->DBSearch_Student("students",student_number,student);
    }

    sc->DBClose();
}

void db_control::studentstorage(string tag, string student_number, vector<int> *projectIds)
{
    student_storagectrl* sc = new student_storagectrl();

    if(tag == "searchProject"){
        sc->DBSearch_StudentProject(student_number,projectIds);
    }

    sc->DBClose();
}

void db_control::studentstorage(string tag, studentpre_obj *studentpre)
{
     student_storagectrl* sc = new student_storagectrl();

     if(tag == "modify"){
         sc->DBModify_Studentpref("studentPreferences",studentpre);
     }

     sc->DBClose();
}

void db_control::studentstorage(string tag, string student_number, studentpre_obj *studentpre)
{
    student_storagectrl* sc = new student_storagectrl();

    if(tag == "search"){
        sc->DBSearch_Studentpref("studentPreferences",student_number,studentpre);
    }

    sc->DBClose();
}

void db_control::studentstorage(string tag, vector<student_obj *> *studentList)
{
    student_storagectrl* sc = new student_storagectrl();

    if(tag == "searchAll"){
        sc->DBSearchAll_Students("students",studentList);
    }

    sc->DBClose();
}


void db_control::projectstorage(string tag, project_obj *project)
{
    project_storagectrl* pc = new project_storagectrl();

    if(tag == "add"){
        pc->DBAdd_Project("projects",project);
    }
    if(tag == "remove"){
        pc->DBRemove_Project("projects",project);
    }
    if(tag == "modify"){
        pc->DBModify_Project("projects",project);
    }

    pc->DBClose();

}

void db_control::projectstorage(string tag, string project_Id, project_obj *project)
{
    project_storagectrl* pc = new project_storagectrl();

    if(tag == "search"){
        pc->DBSearch_Project("projects",project_Id,project);
    }

    pc->DBClose();
}

bool db_control::projectstorage(string tag, project_obj *project, student_obj *student)
{
    project_storagectrl* pc = new project_storagectrl();
    bool rc;

    if(tag == "addStudent"){
        rc= pc->DBAdd_StudentToProject(student,project);
    }
    if(tag == "removeStudent"){
        rc= pc->DBRemove_StudentFromProject(student,project);
    }

    pc->DBClose();
    return rc;
}


void db_control::projectstorage(string tag, vector<project_obj *> *projectList)
{
    project_storagectrl* pc = new project_storagectrl();

    if(tag == "searchAll"){
        pc->DBSearchAll_Projects("projects",projectList);
    }

    pc->DBClose();
}


void db_control::projectstorage(string tag, vector<int> *students, project_obj *project)
{

    project_storagectrl* pc = new project_storagectrl();

    if(tag == "searchStudent"){
        pc->DBSearch_StudentFromProjectList(students,project);
    }

    pc->DBClose();
}


void db_control::userstorage(string tag, string admin_number, admin_obj *admin)
{
    user_storagectrl* uc = new user_storagectrl();

    if(tag == "search"){
        uc->DBSearch_Admin("admin",admin_number,admin);
    }

    uc->DBClose();
}
