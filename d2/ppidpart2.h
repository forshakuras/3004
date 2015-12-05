#ifndef PPIDPART2_H
#define PPIDPART2_H
#include "ppid.h"

class PPIDpart2 : PPID
{
public:
    PPIDpart2();

private:
   /* virtual*/ void runPPID(vector<student_obj*> *) = 0;
};

#endif // PPIDPART2_H
