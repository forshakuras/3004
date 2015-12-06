#include "project_control.h"

project_control::project_control()
{
}

void project_control::SearchProjectTeams(string projectId,vector<int>* studentIdList, vector<int>* teamId,vector<int>* projectIdList){
    db_control* dbc = new db_control();
    dbc->projectstorage("searchTeam",projectId,studentIdList,teamId,projectIdList);
}

void project_control::CreateProject(project_obj *project)
{
    db_control* dbc = new db_control();
    dbc->projectstorage("add",project);
}


void project_control::DeleteProject(project_obj *project)
{
    db_control* dbc = new db_control();
    dbc->projectstorage("remove",project);
}


void project_control::ModifyProject(project_obj *project)
{
    db_control* dbc = new db_control();
    dbc->projectstorage("modify",project);
}


void project_control::SearchProject(string projectId, project_obj *project)
{
    db_control* dbc = new db_control();
    dbc->projectstorage("search",projectId,project);

}


void project_control::SearchAllProject(vector<project_obj *> * projectList)
{
    db_control* dbc = new db_control();
    dbc->projectstorage("searchAll",projectList);
}


void project_control::SearchStudentInProj(vector<int> *students, project_obj *project)
{
    db_control* dbc = new db_control();
    dbc->projectstorage("searchStudent",students,project);
}

void project_control::SearchProjectofstudent(string studentId,vector<project_obj*> *projectlist){
    db_control *dbc = new db_control();
    vector<int> *projectIDlist = new vector<int>();
    project_obj *temp;

    dbc->studentstorage("searchProject", studentId, projectIDlist);

    for (int i = 0; i<projectIDlist->size();i++){
        temp = new project_obj();

        string Result;//string which will contain the result

        stringstream convert; // stringstream used for the conversion

        convert << projectIDlist->at(i);//add the value of Number to the characters in the stream

        Result = convert.str();//set Result to the content of the stream

        SearchProject(Result,temp);

        projectlist->push_back(temp);
    }

}
