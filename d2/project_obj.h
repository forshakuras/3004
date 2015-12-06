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

};


#endif /* defined(____project_obj__) */
