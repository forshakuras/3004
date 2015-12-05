#ifndef PPIDPART3_H
#define PPIDPART3_H
#include "ppid.h"

class PPIDpart3 : PPID
{
public:
    PPIDpart3();

private:
   /* virtual*/ void runPPID(vector<student_obj*> *);
};

#endif // PPIDPART3_H
