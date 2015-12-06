#ifndef MANAGESTUDENTCONTROL_H
#define MANAGESTUDENTCONTROL_H
#include "student_obj.h"
#include "studentpre_obj.h"
#include "project_obj.h"
#include "db_control.h"

class ManageStudentControl
{
public:
    ManageStudentControl(student_obj *);
    bool JoinProjectOption(project_obj *);
    bool LeaveProjectOption(project_obj *);
    void ModifyProfile();
    void ModifyPref(studentpre_obj *);

private:
    student_obj *stu;
};

#endif // MANAGESTUDENTCONTROL_H
