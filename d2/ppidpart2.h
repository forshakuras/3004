#ifndef PPIDPART2_H
#define PPIDPART2_H
#include "ppid.h"
#include <cmath>

using namespace std;

class PPIDpart2 : PPID
{
public:
    PPIDpart2(): PPID(){};

private:
    student_obj *bestStudent;
    studentpre_obj *bestStudentPref;
    int bestScore=0;
   /* virtual*/ void runPPID(project_obj*, vector<int>*, vector<int> *);
    float compareSandP(student_obj*, project_obj*);
    float compareSandM(student_obj*, studentpre_obj*, student_obj*, studentpre_obj*);
    void  buildTeam(int,vector<student_obj*>*,vector<student_obj*>*,vector<studentpre_obj*>*,project_obj*);
<<<<<<< HEAD
    void  calculateAvg(vector<student_obj*>*,student_obj*);
=======
    void Loopteam(vector<int> *, vector<student_obj *> *, vector<studentpre_obj *> *,project_obj *);
>>>>>>> 67ecf6f53e52bb8c2e940008d0c7407faf0e530a
};

#endif // PPIDPART2_H
