#ifndef PPIDPART1_H
#define PPIDPART1_H
#include "ppid.h"

class PPIDpart1 : PPID
{
public:
    PPIDpart1():PPID(){};

private:
   /* virtual*/ void runPPID(project_obj*, vector<int>*, vector<student_obj*> *);
};

#endif // PPIDPART1_H