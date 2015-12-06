//
//  studentpre_obj.cpp
//
//
//  Created by Xianchi Zou on 2015-11-01.
//
//

#include "studentpre_obj.h"

studentpre_obj::studentpre_obj()
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

studentpre_obj::studentpre_obj(int student_number, string firstName, string lastName, float gpa, int objectDev, int database,int webDev,int flexibility,int communication,int workExperience,int criticalThinking,int     documentation,int     teamwork,int     multitasking,int     leadership, int     agileKnowledge)
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

void    studentpre_obj::setStudent_number(int i){
    student_number=i;
}

int     studentpre_obj::getStudent_number(){
    return student_number;
}

void    studentpre_obj::setFirstName(string i){
    firstName=i;
}

string  studentpre_obj::getFirstName(){
    return firstName;
}

void    studentpre_obj::setLastName(string i){
    lastName=i;
}

string  studentpre_obj::getLastName(){
    return lastName;
}

void    studentpre_obj::setGpa(float i){
    gpa=i;
}

float   studentpre_obj::getGpa(){
    return gpa;
}

void    studentpre_obj::setDatabase(int i){
    database=i;
}

int     studentpre_obj::getDatabase(){
    return database;
}

void    studentpre_obj::setWebDev(int i){
    webDev=i;
}

int     studentpre_obj::getWebDev(){
    return webDev;
}
void    studentpre_obj::setFlexibility(int i){
    flexibility =i;
}
int     studentpre_obj::getFlexibility(){
    return flexibility;
}
void    studentpre_obj::setCommunication(int i){
    communication = i;
}

int     studentpre_obj::getCommunication(){
    return communication;
}

void    studentpre_obj::setWorkExperience(int i){
    workExperience = i;
}

int     studentpre_obj::getWorkExperience(){
    return workExperience;
}

void    studentpre_obj::setCriticalThinking(int i){
    criticalThinking = i;
}

int     studentpre_obj::getCriticalThinking(){
    return criticalThinking;
}

void    studentpre_obj::setDocumentation(int i){
    documentation = i;
}

int     studentpre_obj::getDocumentation(){
    return documentation;
}

void    studentpre_obj::setTeamWork(int i){
    teamwork=i;
}

int     studentpre_obj::getTeamWork(){
    return teamwork;
}

void    studentpre_obj::setMultitasking(int i){
    multitasking=i;
}

int     studentpre_obj::getMultitasking(){
    return multitasking;
}

void    studentpre_obj::setLeadership(int i){
    leadership =i;
}

int     studentpre_obj::getLeadership(){
    return leadership;
}

void    studentpre_obj::setAgileKnowledge(int i){
    agileKnowledge = i;
}

int     studentpre_obj::getAgileKnowledge(){
    return agileKnowledge;
}
