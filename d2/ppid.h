#ifndef PPID_H
#define PPID_H
#include "student_obj.h"
#include "vector"
class PPID
{
public:
    PPID();

private:
    virtual void runPPID(vector<student_obj*> *) = 0;
};

#endif // PPID_H
