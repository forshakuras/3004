//
//  project_obj.h
//
//
//  Created by Xianchi Zou on 2015-10-31.
//
//

#ifndef ____project_obj__
#define ____project_obj__

#include <stdio.h>
#include <string>
using namespace std;

class project_obj
{

private:
    int     id;
    string  title;
    int     maxStudents;
    int     currentStudents;
    int     idealNumberStudents;
    string  description;
    float   gpa;
    int     pmSkill;
    int     database;
    int     java;
    int     cCpp;
    int     jsHtml;
    int     python;
    int     debuggingTesting;
    int     documentation;
    int     mobile;
    int     networking;
    int     ui;
    int     algorithm;
public:
    project_obj();
    project_obj(int, string, int, int, string, float, int, int, int, int, int, int, int, int, int, int , int , int);
    void    setId(int);
    int     getId();
    void    setTitle(string);
    string  getTitle();
    void    setMaxStudents(int);
    int     getMaxStudents();
    void    setCurrentStudent(int);
    int     getCurrentStudent();
    void    setIdealNumberStudents(int);
    int     getIdealNumberStudents();
    void    setDescription(string);
    string  getDescription();
    void    setGpa(float);
    float   getGpa();
    void    setPmSkill(int);
    int     getPmSkill();
    void    setDatabase(int);
    int     getDatabase();
    void    setJava(int);
    int     getJava();
    void    setCCpp(int);
    int     getCCpp();
    void    setJsHtml(int);
    int     getJsHtml();
    void    setPython(int);
    int     getPython();
    void    setDebug(int);
    int     getDebug();
    void    setDocument(int);
    int     getDocument();
    void    setMobile(int);
    int     getMobile();
    void    setNetwork(int);
    int     getNetwork();
    void    setUi(int);
    int     getUi();
    void    setAlgor(int);
    int     getAlgor();

};


#endif /* defined(____project_obj__) */
