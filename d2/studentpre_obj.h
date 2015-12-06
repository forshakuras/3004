//
//  studentpre_obj.h
//
//
//  Created by Xianchi Zou on 2015-11-01.
//
//

#ifndef ____studentpre_obj__
#define ____studentpre_obj__

#include <stdio.h>
#include <string>
#include <vector>

using namespace std;

class studentpre_obj
{
private:
    int     student_number;
    string  firstName;
    string  lastName;
    float   gpa;
    int     objectDev;
    int     database;
    int     webDev;
    int     flexibility;
    int     communication;
    int     workExperience;
    int     criticalThinking;
    int     documentation;
    int     teamwork;
    int     multitasking;
    int     leadership;
    int     agileKnowledge;
public:
    studentpre_obj();
    studentpre_obj(int, string, string, float, int, int, int, int, int, int, int, int, int, int , int , int);
    void    setStudent_number(int);
    int     getStudent_number();
    void    setFirstName(string);
    string  getFirstName();
    void    setLastName(string);
    string  getLastName();
    void    setGpa(float);
    float   getGpa();
    void        setObjectDev(int);
    int         getObjectDev();
    void        setDatabase(int);
    int         getDatabase();
    void        setWebDev(int);
    int         getWebDev();
    void        setFlexibility(int);
    int         getFlexibility();
    void        setCommunication(int);
    int         getCommunication();
    void        setWorkExperience(int);
    int         getWorkExperience();
    void        setCriticalThinking(int);
    int         getCriticalThinking();
    void        setDocumentation(int);
    int         getDocumentation();
    void        setTeamWork(int);
    int         getTeamWork();
    void        setMultitasking(int);
    int         getMultitasking();
    void        setLeadership(int);
    int         getLeadership();
    void        setAgileKnowledge(int);
    int         getAgileKnowledge();

    void        toVector(vector<float>*);

};

#endif /* defined(____studentpre_obj__) */
