#include "ppidpart2.h"

void PPIDpart2::runPPID(project_obj *project, vector<int> *teamsize, vector<int>  *studentIDlist)
{
    student_obj *temp;
    studentpre_obj *temp1;

    vector<student_obj*>* tempList = new vector<student_obj*>();
    vector<studentpre_obj*>* tempList1 = new vector<studentpre_obj*>();

    for(int i=0; i<studentIDlist->size(); i++){
        temp = new student_obj();
        temp1 = new studentpre_obj();
        ManageUserControl *foo=new ManageUserControl();
        foo->getStudent(foo->intToString(studentIDlist->at(i)),temp,temp1);
        tempList->push_back(temp);
        tempList1->push_back(temp1);
    }


}


float PPIDpart2::compareSandP(student_obj *stu, project_obj *proj)
{
    vector<float> *stum = new vector<float>();
    vector<float> *projm = new vector<float>();

    float mark=0;

    stu->toVector(stum);
    proj->toVector(projm);

    for(int i=0; i<projm->size();i++){
        if(projm->at(i) >= 3){
            mark += stum->at(i) * 2;
        }else{
            mark += stum->at(i);
        }
    }

    return mark;
}

void PPIDpart2::buildTeam(int teamSize, vector<student_obj *> *newTeam, vector<student_obj *> *students, vector<studentpre_obj *> *studentpres,project_obj *project)
{
    int index=0;
    float highest=0;

    for(int i=0; i<students->size(); i++){
         float temp = compareSandP(students->at(i),project);
         if(highest <= temp){
             highest=temp;
             index = i;
         }
    }

}
