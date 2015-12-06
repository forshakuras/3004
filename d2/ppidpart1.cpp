#include "ppidpart1.h"

void PPIDpart1::runPPID(project_obj *project, vector<int> *teamsize, vector<int>  *studentIDlist)
{
   project_control pc;
   pc.SearchStudentInProj(studentIDlist,project);

   int remainder = (studentIDlist->size())%(project->getIdealNumberStudents());

   int size = project->getIdealNumberStudents();

   int numofteam = (studentIDlist->size()-remainder)/(project->getIdealNumberStudents());


   for (int i = 0; i < (numofteam-remainder); i++){
       teamsize->push_back(size);
   }

   for (int j = 0; j< remainder; j++){
       teamsize->push_back(size+1);
   }
}
