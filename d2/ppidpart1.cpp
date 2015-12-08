#include "ppidpart1.h"

void PPIDpart1::runPPID(project_obj *project, vector<int> *teamsize, vector<int>  *studentIDlist)
{


   project_control pc;
   pc.RemoveTeamFromProject(project);

   pc.SearchStudentInProj(studentIDlist,project);

   int remainder = (studentIDlist->size())%(project->getIdealNumberStudents());

   int size = project->getIdealNumberStudents();

   int numofteam = (studentIDlist->size()-remainder)/(project->getIdealNumberStudents());

   if(studentIDlist->size()<project->getIdealNumberStudents()){
       teamsize->push_back(studentIDlist->size());
   }
   else if(studentIDlist->size()>project->getMaxStudents()&&studentIDlist->size()<(project->getIdealNumberStudents()*2)){
       cout << "343"<<endl;
       teamsize->push_back(studentIDlist->size());
   }
   else{
       for (int i = 0; i < (numofteam-remainder); i++){
           teamsize->push_back(size);
       }

       for (int j = 0; j< remainder; j++){
           teamsize->push_back(size+1);
       }
   }
}

//bool PPIDpart1::precheckPPID(project_obj *project)
//{
//    project_control* pc = new project_control();
//    vector<int>* testSL = new vector<int>();
//    vector<int>* testTI = new vector<int>();
//    vector<int>* testPL = new vector<int>();
//    bool rc=false;

//    pc->SearchProjectTeams(pc->intToString(project->getId()),testSL,testTI,testPL);

//    if(testTI->size() == 0){
//        rc=true;
//    }else{
//        if(project->getCurrentStudent() != testSL->size()){
//            //call remove
//            rc=true;
//        }else{
//            rc=false;
//        }
//    }
//    return rc;
//}
