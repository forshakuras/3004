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
    pmSkill=0;
    database=0;
    java=0;
    cCpp=0;
    jsHtml=0;
    python=0;
    debuggingTesting=0;
    documentation=0;
    mobile=0;
    networking=0;
    ui=0;
    algorithm=0;
}

studentpre_obj::studentpre_obj(int student_number, string firstName, string lastName, float gpa, int pmSkill, int database, int java, int cCpp, int jsHtml, int python, int debuggingTesting, int documentation, int mobile, int networking, int ui, int algorithm)
{
    this->student_number=student_number;
    this->firstName=firstName;
    this->lastName=lastName;
    this->gpa=gpa;
    this->pmSkill=pmSkill;
    this->database=database;
    this->java=java;
    this->cCpp=cCpp;
    this->jsHtml=jsHtml;
    this->python=python;
    this->debuggingTesting=debuggingTesting;
    this->documentation=documentation;
    this->mobile=mobile;
    this->networking=networking;
    this->ui=ui;
    this->algorithm=algorithm;
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

//void    studentpre_obj::setPmSkill(int i){
//    pmSkill=i;
//}

//int     studentpre_obj::getPmSkill(){
//    return pmSkill;
//}

//void    studentpre_obj::setDatabase(int i){
//    database=i;
//}

//int     studentpre_obj::getDatabase(){
//    return database;
//}

//void    studentpre_obj::setJava(int i){
//    java=i;
//}

//int     studentpre_obj::getJava(){
//    return java;
//}

//void    studentpre_obj::setCCpp(int i){
//    cCpp = i;
//}

//int     studentpre_obj::getCCpp(){
//    return cCpp;
//}

//void    studentpre_obj::setJsHtml(int i){
//    jsHtml=i;
//}

//int     studentpre_obj::getJsHtml(){
//    return jsHtml;
//}

//void    studentpre_obj::setPython(int i){
//    python=i;
//}

//int     studentpre_obj::getPython(){
//    return python;
//}

//void    studentpre_obj::setDebug(int i){
//    debuggingTesting=i;
//}

//int     studentpre_obj::getDebug(){
//    return debuggingTesting;
//}

//void    studentpre_obj::setDocument(int i){
//    documentation=i;
//}

//int     studentpre_obj::getDocument(){
//    return documentation;
//}

//void    studentpre_obj::setMobile(int i){
//    mobile=i;
//}

//int     studentpre_obj::getMobile(){
//    return mobile;
//}

//void    studentpre_obj::setNetwork(int i){
//    networking=i;
//}

//int     studentpre_obj::getNetwork(){
//    return networking;
//}

//void    studentpre_obj::setUi(int i){
//    ui=i;
//}

//int     studentpre_obj::getUi(){
//    return ui;
//}

//void    studentpre_obj::setAlgor(int i){
//    algorithm=i;
//}

//int     studentpre_obj::getAlgor(){
//    return algorithm;
//}

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
