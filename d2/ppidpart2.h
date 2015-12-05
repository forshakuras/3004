#ifndef PPIDPART2_H
#define PPIDPART2_H
#include "ppid.h"

class PPIDpart2 : PPID
{
public:
    PPIDpart2(): PPID(){};

private:
   /* virtual*/ void runPPID(project_obj*, vector<int>*, vector<student_obj*> *);
};

#endif // PPIDPART2_H
