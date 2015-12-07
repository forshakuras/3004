#include "ppidpart2.h"

void PPIDpart2::runPPID(project_obj *project, vector<int> *teamsize, vector<int>  *studentIDlist)
{
    if (studentIDlist->size() == 0){
        return;
    }

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

    Loopteam(teamsize,tempList,tempList1,project);

}


void PPIDpart2::Loopteam(vector<int> *teamsize, vector<student_obj *> *students, vector<studentpre_obj *> *studentpres,project_obj *project){
    for (int i=0; i< teamsize->size(); i++){
        vector<student_obj*> *team = new vector<student_obj*>();
        buildTeam(teamsize->at(i),team,students,studentpres,project);

        project_control *pc = new project_control();
        for (int j=0; j < team->size();j++){
            stringstream ss;
            ss << i;
            string teamnum = ss.str();
            stringstream sa;
            sa << project->getId();
            string projnum = sa.str();
            stringstream sb;
            sb << team->at(j)->getStudent_number();
            string stunum = sb.str();
            pc->AddstudentlistToTeam(stunum,projnum,teamnum);
        }
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
    studentpre_obj *fakeDataPre = new studentpre_obj();

    vector<studentpre_obj*>* teamPre = new vector<studentpre_obj*>();

    for(int i=0; i<students->size(); i++){
        float temp = compareSandP(students->at(i),project);
        if(highest <= temp){
            highest=temp;
            index = i;
        }
    }


    newTeam->push_back(students->at(index));
    teamPre->push_back(studentpres->at(index));
    fakeData = students->at(index);
    fakeDataPre = studentpres->at(index);

    students->erase(students->begin()+index);
    studentpres->erase(studentpres->begin()+index);

    teamSize -= 1;

    for(int i=0; i < teamSize; i++){
        highest = 0;
        index = 0;
        for(int j=0; j<students->size(); j++){
            float temp = compareSandM(students->at(j),studentpres->at(j),fakeData,fakeDataPre);
            if(highest <= temp){
                highest = temp;
                index = j;
            }
        }

        newTeam->push_back(students->at(index));
        teamPre->push_back(studentpres->at(index));
        fakeData = new student_obj();
        fakeDataPre = new studentpre_obj();

        calculateAvg(newTeam,fakeData);
        calculateAvgPre(teamPre,fakeDataPre);

        students->erase(students->begin()+index);
        studentpres->erase(studentpres->begin()+index);
    }
}


void PPIDpart2::calculateAvg(vector<student_obj *> *team, student_obj* fakeData)
{
    float     gpa=0;
    float     objectDev=0;
    float     database=0;
    float     webDev=0;
    float     flexibility=0;
    float     communication=0;
    float     workExperience=0;
    float     criticalThinking=0;
    float     documentation=0;
    float     teamwork=0;
    float     multitasking=0;
    float     leadership=0;
    float     agileKnowledge=0;

    for(int i=0; i<team->size(); i++){
        gpa+=(team->at(i))->getGpa();
        objectDev+=(team->at(i))->getObjectDev();
        database+=(team->at(i))->getDatabase();
        webDev+=(team->at(i))->getWebDev();
        flexibility+=(team->at(i))->getFlexibility();
        communication+=(team->at(i))->getCommunication();
        workExperience+=(team->at(i))->getWorkExperience();
        criticalThinking+=(team->at(i))->getCriticalThinking();
        documentation+=(team->at(i))->getDocumentation();
        teamwork+=(team->at(i))->getTeamWork();
        multitasking+=(team->at(i))->getMultitasking();
        leadership+=(team->at(i))->getLeadership();
        agileKnowledge+=(team->at(i))->getAgileKnowledge();
    }
    fakeData->setGpa(gpa/team->size());
    fakeData->setObjectDev(objectDev/team->size());
    fakeData->setDatabase(database/team->size());
    fakeData->setWebDev(webDev/team->size());
    fakeData->setFlexibility(flexibility/team->size());
    fakeData->setCommunication(communication/team->size());
    fakeData->setWorkExperience(workExperience/team->size());
    fakeData->setCriticalThinking(criticalThinking/team->size());
    fakeData->setDocumentation(documentation/team->size());
    fakeData->setTeamWork(teamwork/team->size());
    fakeData->setMultitasking(multitasking/team->size());
    fakeData->setLeadership(leadership/team->size());
    fakeData->setAgileKnowledge(agileKnowledge/team->size());
}

void PPIDpart2::calculateAvgPre(vector<studentpre_obj *> * team, studentpre_obj * fakeData)
{
    float     gpa=0;
    float     objectDev=0;
    float     database=0;
    float     webDev=0;
    float     flexibility=0;
    float     communication=0;
    float     workExperience=0;
    float     criticalThinking=0;
    float     documentation=0;
    float     teamwork=0;
    float     multitasking=0;
    float     leadership=0;
    float     agileKnowledge=0;

    for(int i=0; i<team->size(); i++){
        gpa+=(team->at(i))->getGpa();
        objectDev+=(team->at(i))->getObjectDev();
        database+=(team->at(i))->getDatabase();
        webDev+=(team->at(i))->getWebDev();
        flexibility+=(team->at(i))->getFlexibility();
        communication+=(team->at(i))->getCommunication();
        workExperience+=(team->at(i))->getWorkExperience();
        criticalThinking+=(team->at(i))->getCriticalThinking();
        documentation+=(team->at(i))->getDocumentation();
        teamwork+=(team->at(i))->getTeamWork();
        multitasking+=(team->at(i))->getMultitasking();
        leadership+=(team->at(i))->getLeadership();
        agileKnowledge+=(team->at(i))->getAgileKnowledge();
    }
    fakeData->setGpa(gpa/team->size());
    fakeData->setObjectDev(objectDev/team->size());
    fakeData->setDatabase(database/team->size());
    fakeData->setWebDev(webDev/team->size());
    fakeData->setFlexibility(flexibility/team->size());
    fakeData->setCommunication(communication/team->size());
    fakeData->setWorkExperience(workExperience/team->size());
    fakeData->setCriticalThinking(criticalThinking/team->size());
    fakeData->setDocumentation(documentation/team->size());
    fakeData->setTeamWork(teamwork/team->size());
    fakeData->setMultitasking(multitasking/team->size());
    fakeData->setLeadership(leadership/team->size());
    fakeData->setAgileKnowledge(agileKnowledge/team->size());
}
