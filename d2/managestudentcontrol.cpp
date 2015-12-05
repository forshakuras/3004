#include "managestudentcontrol.h"

ManageStudentControl::ManageStudentControl(student_obj *student)
{
    this->stu = student;
}

bool ManageStudentControl::JoinProjectOption(project_obj *project)
{
    db_control db;
    return db.projectstorage("addStudent",project,stu);
}

bool ManageStudentControl::LeaveProjectOption(project_obj *project){
    db_control db;
    return db.projectstorage("removeStudent",project,stu);
}


void ManageStudentControl::ModifyProfile(){
    db_control db;
    db.studentstorage("modify",stu);

}
void ManageStudentControl::ModifyPref(studentpre_obj *pref){
    db_control db;
    db.studentstorage("modify",pref);
}
