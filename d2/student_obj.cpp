//
//  student_obj.cpp
//
//
//  Created by Xianchi Zou on 2015-11-01.
//
//

#include "student_obj.h"


student_obj::student_obj()
{
    student_number=0;
    firstName="";
    lastName="";
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

student_obj::student_obj(int student_number, string firstName, string lastName, float gpa, int objectDev, int database,int webDev,int flexibility,int communication,int workExperience,int criticalThinking,int     documentation,int     teamwork,int     multitasking,int     leadership, int     agileKnowledge)
{
    this->student_number=student_number;
    this->firstName=firstName;
    this->lastName=lastName;
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

void    student_obj::setStudent_number(int i){
    student_number=i;
}

int     student_obj::getStudent_number(){
    return student_number;
}

void    student_obj::setFirstName(string i){
    firstName=i;
}

string  student_obj::getFirstName(){
    return firstName;
}

void    student_obj::setLastName(string i){
    lastName=i;
}

string  student_obj::getLastName(){
    return lastName;
}

void    student_obj::setGpa(float i){
    gpa=i;
}

float   student_obj::getGpa(){
    return gpa;
}

void    student_obj::setDatabase(int i){
    database=i;
}

int     student_obj::getDatabase(){
    return database;
}

void    student_obj::setObjectDev(int i){
    objectDev=i;
}

int    student_obj::getObjectDev(){
    return objectDev;
}

void        student_obj::setWebDev(int i){
    webDev=i;
}

int         student_obj::getWebDev(){
    return webDev;
}
void        student_obj::setFlexibility(int i){
    flexibility =i;
}
int         student_obj::getFlexibility(){
    return flexibility;
}
void        student_obj::setCommunication(int i){
    communication = i;
}

int         student_obj::getCommunication(){
    return communication;
}

void        student_obj::setWorkExperience(int i){
    workExperience = i;
}

int         student_obj::getWorkExperience(){
    return workExperience;
}

void        student_obj::setCriticalThinking(int i){
    criticalThinking = i;
}

int         student_obj::getCriticalThinking(){
    return criticalThinking;
}

void        student_obj::setDocumentation(int i){
    documentation = i;
}

int         student_obj::getDocumentation(){
    return documentation;
}

void        student_obj::setTeamWork(int i){
    teamwork=i;
}

int         student_obj::getTeamWork(){
    return teamwork;
}

void        student_obj::setMultitasking(int i){
    multitasking=i;
}

int         student_obj::getMultitasking(){
    return multitasking;
}

void        student_obj::setLeadership(int i){
    leadership =i;
}

int         student_obj::getLeadership(){
    return leadership;
}

void        student_obj::setAgileKnowledge(int i){
    agileKnowledge = i;
}

int         student_obj::getAgileKnowledge(){
    return agileKnowledge;
}


void        student_obj::toVector(vector<float> *data){

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
