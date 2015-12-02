#include "managestudentcontrol.h"

ManageStudentControl::ManageStudentControl(student_obj *student)
{
    this->stu = student;
}

bool ManageStudentControl::JoinProjectOption(project_obj *project)
{
    DB_Utility db;
    bool rc = db.DBAdd_StudentToProject(stu,project);
    return rc;
}

bool ManageStudentControl::LeaveProjectOption(){

}


void ManageStudentControl::ModifyProfile(){
    DB_Utility db;
    db.DBModify_Student("students", stu);

}
void ManageStudentControl::ModifyPref(studentpre_obj *pref){
    DB_Utility db;
    db.DBModify_Studentpref("studentPreferences", pref);
}
