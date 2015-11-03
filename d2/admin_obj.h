#ifndef ADMIN_OBJ_H
#define ADMIN_OBJ_H
#include <stdio.h>
#include <string>
using namespace std;


class admin_obj
{
private:
    string firstName;
    string lastName;
    int admin_number;
public:
    admin_obj();
    void    setFirstName(string);
    string  getFirstName();
    void    setLastName(string);
    string  getLastName();
    void    setAdminNum(int);
    int     getAdminNum();
};

#endif // ADMIN_OBJ_H
