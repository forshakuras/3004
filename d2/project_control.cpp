#include "project_control.h"

project_control::project_control()
{
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
