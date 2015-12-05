#ifndef PPIDPART1_H
#define PPIDPART1_H
#include "ppid.h"

class PPIDpart1 : PPID
{
public:
    PPIDpart1();

private:
   /* virtual*/ void runPPID(vector<student_obj*> *);
};

#endif // PPIDPART1_H
