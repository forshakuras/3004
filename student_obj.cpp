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
    int     student_number=0;
    string  firstName="";
    string  lastName="";
    float   gpa=0;
    int     pmSkill=0;
    int     database=0;
    int     java=0;
    int     cCpp=0;
    int     jsHtml=0;
    int     python=0;
    int     debuggingTesting=0;
    int     documentation=0;
    int     mobile=0;
    int     networking=0;
    int     ui=0;
    int     algorithm=0;
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

void    student_obj::setPmSkill(int i){
    pmSkill=i;
}

int     student_obj::getPmSkill(){
    return pmSkill;
}

void    student_obj::setDatabase(int i){
    database=i;
}

int     student_obj::getDatabase(){
    return database;
}

void    student_obj::setJava(int i){
    java=i;
}

int     student_obj::getJava(){
    return java;
}

void    student_obj::setJsHtml(int i){
    jsHtml=i;
}

int     student_obj::getJsHtml(){
    return jsHtml;
}

void    student_obj::setPython(int i){
    python=i;
}

int     student_obj::getPython(){
    return python;
}

void    student_obj::setDebug(int i){
    debuggingTesting=i;
}

int     student_obj::getDebug(){
    return debuggingTesting;
}

void    student_obj::setDocument(int i){
    documentation=i;
}

int     student_obj::getDocument(){
    return documentation;
}

void    student_obj::setMobile(int i){
    mobile=i;
}

int     student_obj::getMobile(){
    return mobile;
}

void    student_obj::setNetwork(int i){
    networking=i;
}

int     student_obj::getNetwork(){
    return networking;
}

void    student_obj::setUi(int i){
    ui=i;
}

int     student_obj::getUi(){
    return ui;
}

void    student_obj::setAlgor(int i){
    algorithm=i;
}

int     student_obj::getAlgor(){
    return algorithm;
}
