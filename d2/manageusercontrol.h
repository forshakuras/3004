#ifndef MANAGEUSERCONTROL_H
#define MANAGEUSERCONTROL_H
#include "student_obj.h"
#include "studentpre_obj.h"
#include "admin_obj.h"
#include "db_utility.h"
#include "db_control.h"
using namespace std;

class ManageUserControl
{
public:
    ManageUserControl();
    //void addUser();
    void getAdmin(string,admin_obj*);
    void getStudent(string,student_obj*,studentpre_obj*);
};

#endif // MANAGEUSERCONTROL_H
