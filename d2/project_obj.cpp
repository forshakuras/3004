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

project_obj::project_obj(int id, string title, int maxStudents, int idealNumberStudents, string description, float gpa, int pmSkill, int database, int java, int cCpp, int jsHtml, int python, int debuggingTesting, int documentation, int mobile, int networking, int ui, int algorithm)
{
    this->id=id;
    this->title=title;
    this->maxStudents=maxStudents;
    this->idealNumberStudents=idealNumberStudents;
    this->description=description;
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

void    project_obj::setPmSkill(int i){
    pmSkill=i;
}

int     project_obj::getPmSkill(){
    return pmSkill;
}

void    project_obj::setDatabase(int i){
    database=i;
}

int     project_obj::getDatabase(){
    return database;
}

void    project_obj::setJava(int i){
    java=i;
}

int     project_obj::getJava(){
    return java;
}

void    project_obj::setCCpp(int i){
    cCpp=i;
}

int     project_obj::getCCpp(){
    return cCpp;
}

void    project_obj::setJsHtml(int i){
    jsHtml=i;
}

int     project_obj::getJsHtml(){
    return jsHtml;
}

void    project_obj::setPython(int i){
    python=i;
}

int     project_obj::getPython(){
    return python;
}

void    project_obj::setDebug(int i){
    debuggingTesting=i;
}

int     project_obj::getDebug(){
    return debuggingTesting;
}

void    project_obj::setDocument(int i){
    documentation=i;
}

int     project_obj::getDocument(){
    return documentation;
}

void    project_obj::setMobile(int i){
    mobile=i;
}

int     project_obj::getMobile(){
    return mobile;
}

void    project_obj::setNetwork(int i){
    networking=i;
}

int     project_obj::getNetwork(){
    return networking;
}

void    project_obj::setUi(int i){
    ui=i;
}

int     project_obj::getUi(){
    return ui;
}

void    project_obj::setAlgor(int i){
    algorithm=i;
}

int     project_obj::getAlgor(){
    return algorithm;
}
