//
//  project_obj.cpp
//
//
//  Created by Xianchi Zou on 2015-10-31.
//
//

#include "project_obj.h"

project_obj::project_obj()
{
    id=0;
    title="";
    maxStudents=0;
    currentStudents=0;
    idealNumberStudents=0;
    description="";
    gpa=0;
    objectDev=0;
    database=0;
    webDev=0;
    flexibility=0;
    communication=0;
    workExperience=0;
    criticalThinking=0;
    documentation=0;
    teamwork=0;
    multitasking=0;
    leadership=0;
    agileKnowledge=0;
}

project_obj::project_obj(int id, string title, int maxStudents, int idealNumberStudents, string description, float gpa, int objectDev, int database,int webDev,int flexibility,int communication,int workExperience,int criticalThinking,int     documentation,int     teamwork,int     multitasking,int     leadership, int     agileKnowledge)
{
    this->id=id;
    this->title=title;
    this->maxStudents=maxStudents;
    this->idealNumberStudents=idealNumberStudents;
    this->description=description;
    this->gpa=gpa;
    this->objectDev=objectDev;
    this->database=database;
    this->webDev=webDev;
    this->flexibility=flexibility;
    this->communication=communication;
    this->workExperience=workExperience;
    this->criticalThinking=criticalThinking;
    this->documentation=documentation;
    this->teamwork=teamwork;
    this->multitasking=multitasking;
    this->leadership=leadership;
    this->agileKnowledge=agileKnowledge;
}

void    project_obj::setId(int i){
    id=i;
}

int     project_obj::getId(){
    return id;
}

void    project_obj::setTitle(string i){
    title=i;
}

string  project_obj::getTitle(){
    return title;
}

void    project_obj::setMaxStudents(int i){
    maxStudents=i;
}

int     project_obj::getMaxStudents(){
    return maxStudents;
}

void    project_obj::setCurrentStudent(int i){
    currentStudents=i;
}

int     project_obj::getCurrentStudent(){
    return currentStudents;
}

void    project_obj::setIdealNumberStudents(int i){
    idealNumberStudents=i;
}

int     project_obj::getIdealNumberStudents(){
    return idealNumberStudents;
}

void    project_obj::setDescription(string i){
    description=i;
}

string  project_obj::getDescription(){
    return description;
}

void    project_obj::setGpa(float i){
    gpa=i;
}

float   project_obj::getGpa(){
    return gpa;
}

void    project_obj::setObjectDev(int i){
    objectDev=i;
}

int    project_obj::getObjectDev(){
    return objectDev;
}

void    project_obj::setDatabase(int i){
    database=i;
}

int     project_obj::getDatabase(){
    return database;
}

void        project_obj::setWebDev(int i){
    webDev=i;
}

int         project_obj::getWebDev(){
    return webDev;
}
void        project_obj::setFlexibility(int i){
    flexibility =i;
}
int         project_obj::getFlexibility(){
    return flexibility;
}
void        project_obj::setCommunication(int i){
    communication = i;
}

int         project_obj::getCommunication(){
    return communication;
}

void        project_obj::setWorkExperience(int i){
    workExperience = i;
}

int         project_obj::getWorkExperience(){
    return workExperience;
}

void        project_obj::setCriticalThinking(int i){
    criticalThinking = i;
}

int         project_obj::getCriticalThinking(){
    return criticalThinking;
}

void        project_obj::setDocumentation(int i){
    documentation = i;
}

int         project_obj::getDocumentation(){
    return documentation;
}

void        project_obj::setTeamWork(int i){
    teamwork=i;
}

int         project_obj::getTeamWork(){
    return teamwork;
}

void        project_obj::setMultitasking(int i){
    multitasking=i;
}

int         project_obj::getMultitasking(){
    return multitasking;
}

void        project_obj::setLeadership(int i){
    leadership =i;
}

int         project_obj::getLeadership(){
    return leadership;
}

void        project_obj::setAgileKnowledge(int i){
    agileKnowledge = i;
}

int         project_obj::getAgileKnowledge(){
    return agileKnowledge;
}

void        project_obj::toVector(vector<float> *data){

    data->push_back(gpa);
    data->push_back(objectDev);
    data->push_back(database);
    data->push_back(webDev);
    data->push_back(flexibility);
    data->push_back(communication);
    data->push_back(workExperience);
    data->push_back(criticalThinking);
    data->push_back(documentation);
    data->push_back(teamwork);
    data->push_back(multitasking);
    data->push_back(leadership);
    data->push_back(agileKnowledge);

}


