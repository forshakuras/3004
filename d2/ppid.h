#ifndef PPID_H
#define PPID_H
#include "student_obj.h"
#include "studentpre_obj.h"
#include "vector"
#include "project_control.h"
#include "project_obj.h"
#include "managestudentcontrol.h"
#include "manageusercontrol.h"

class PPID
{
public:
    PPID();

private:
    virtual void runPPID(project_obj*, vector<int>*, vector<int>*) = 0;
};

#endif // PPID_H
