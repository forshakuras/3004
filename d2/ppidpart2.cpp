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

float PPIDpart2::compareSandM(student_obj *stu, studentpre_obj *stup, student_obj *faker, studentpre_obj *fakerp)
{
    vector<float> *stum = new vector<float>();
    vector<float> *stupm = new vector<float>();
    vector<float> *fakerm = new vector<float>();
    vector<float> *fakerpm = new vector<float>();

    float mark1=0;
    float mark2=0;
    float rc=0;

    stu->toVector(stum);
    stup->toVector(stupm);
    faker->toVector(fakerm);
    fakerp->toVector(fakerpm);

    int size = stum->size();

    for(int i=1; i<size;i++){
        float tester = abs(stum->at(i) - fakerpm->at(i));
        if(tester == 0){
            mark1+=5;
        }
        if(tester <= 1 && tester > 0){
            mark1+=2;
        }
        if(tester >1){
            mark1+=0;
        }
    }

    for(int j=1; j<size; j++){
        float tester = abs(fakerm->at(j) - stupm->at(j));
        if(tester == 0){
            mark1+=5;
        }
        if(tester <= 1 && tester > 0){
            mark1+=2;
        }
        if(tester >1){
            mark1+=0;
        }
    }


    if(stum->at(0) < fakerpm->at(0) || fakerm->at(0) < stupm->at(0)){
        rc = (mark1 + mark2) * 0.9;
    }else{
        rc = mark1 + mark2;
    }

    return rc;
}

void PPIDpart2::buildTeam(int teamSize, vector<student_obj *> *newTeam, vector<student_obj *> *students, vector<studentpre_obj *> *studentpres,project_obj *project)
{
    int index=0;
    float highest=0;
    student_obj *fakeData = new student_obj();

    for(int i=0; i<students->size(); i++){
         float temp = compareSandP(students->at(i),project);
         if(highest <= temp){
             highest=temp;
             index = i;
         }
    }

    newTeam->push_back(students->at(index));
    fakeData = students->at(index);



}


