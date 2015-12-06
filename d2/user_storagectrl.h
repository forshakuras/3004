#ifndef USER_STORAGECTRL_H
#define USER_STORAGECTRL_H
#include <QtSql>
#include <iostream>
#include <sstream>
#include <vector>
#include "admin_obj.h"
#include <QMessageBox>
#include "student_obj.h"

using namespace std;


class user_storagectrl
{
private:

    QSqlDatabase db;


public:
    user_storagectrl();
    void DBSearch_Admin(string, string, admin_obj*);
    void DBSearch_Student(string,string,student_obj*);
    string floatToString(float);
    string intToString(int);
    void DBClose();
};


#endif // USER_STORAGECTRL_H
