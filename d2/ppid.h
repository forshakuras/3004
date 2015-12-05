#ifndef PPID_H
#define PPID_H
#include "student_obj.h"
#include "vector"
#include "project_control.h"
#include "project_obj.h"

class PPID
{
public:
    PPID();

private:
    virtual void runPPID(project_obj*, vector<int>*, vector<int>*) = 0;
};

#endif // PPID_H
