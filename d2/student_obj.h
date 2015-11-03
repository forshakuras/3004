//
//  student_obj.h
//
//
//  Created by Xianchi Zou on 2015-11-01.
//
//

#ifndef ____student_obj__
#define ____student_obj__

#include <stdio.h>
#include <string>
using namespace std;

class student_obj
{
private:
    int     student_number;
    string  firstName;
    string  lastName;
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
    student_obj();
    student_obj(int, string, string, float, int, int, int, int, int, int, int, int, int, int , int , int);
    void    setStudent_number(int);
    int     getStudent_number();
    void    setFirstName(string);
    string  getFirstName();
    void    setLastName(string);
    string  getLastName();
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


#endif /* defined(____student_obj__) */
