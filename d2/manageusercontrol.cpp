#include "manageusercontrol.h"

ManageUserControl::ManageUserControl()
{
}

void ManageUserControl::getAdmin(string username,admin_obj *admin)
{
    DB_Utility db;
    db.DBSearch_Admin("admin",username,admin);
}

void ManageUserControl::getStudent(string username,student_obj *student,studentpre_obj *studentpref)
{
    DB_Utility db;
    db.DBSearch_Student("students",username,student);
    db.DBSearch_Studentpref("studentPreferences",username,studentpref);
}
