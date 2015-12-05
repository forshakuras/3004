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

student_obj::student_obj(int student_number, string firstName, string lastName, float gpa, int pmSkill, int database, int java, int cCpp, int jsHtml, int python, int debuggingTesting, int documentation, int mobile, int networking, int ui, int algorithm)
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

//void    student_obj::setPmSkill(int i){
//    pmSkill=i;
//}

//int     student_obj::getPmSkill(){
//    return pmSkill;
//}

//void    student_obj::setJava(int i){
//    java=i;
//}

//int     student_obj::getJava(){
//    return java;
//}

//void    student_obj::setCCpp(int i){
//    cCpp=i;
//}

//int     student_obj::getCCpp(){
//    return cCpp;
//}

//void    student_obj::setJsHtml(int i){
//    jsHtml=i;
//}

//int     student_obj::getJsHtml(){
//    return jsHtml;
//}

//void    student_obj::setPython(int i){
//    python=i;
//}

//int     student_obj::getPython(){
//    return python;
//}

//void    student_obj::setDebug(int i){
//    debuggingTesting=i;
//}

//int     student_obj::getDebug(){
//    return debuggingTesting;
//}

//void    student_obj::setDocument(int i){
//    documentation=i;
//}

//int     student_obj::getDocument(){
//    return documentation;
//}

//void    student_obj::setMobile(int i){
//    mobile=i;
//}

//int     student_obj::getMobile(){
//    return mobile;
//}

//void    student_obj::setNetwork(int i){
//    networking=i;
//}

//int     student_obj::getNetwork(){
//    return networking;
//}

//void    student_obj::setUi(int i){
//    ui=i;
//}

//int     student_obj::getUi(){
//    return ui;
//}

//void    student_obj::setAlgor(int i){
//    algorithm=i;
//}

//int     student_obj::getAlgor(){
//    return algorithm;
//}

void    student_obj::setDatabase(int i){
    database=i;
}

int     student_obj::getDatabase(){
    return database;
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



