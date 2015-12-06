#include "manageusercontrol.h"

ManageUserControl::ManageUserControl()
{
}

void ManageUserControl::getAdmin(string username,admin_obj *admin)
{
    db_control *db=new db_control();
    db->userstorage("search",username,admin);
}

void ManageUserControl::getStudent(string studentId,student_obj *student,studentpre_obj *studentpref)
{
    db_control *db=new db_control();
    db->studentstorage("search",studentId,student);
    db->studentstorage("search",studentId,studentpref);
}

string ManageUserControl::intToString(int x)
{
    stringstream ss;
    ss << x;
    return ss.str();
}



