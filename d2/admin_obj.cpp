#include "admin_obj.h"

admin_obj::admin_obj()
{
    string  firstName="";
    string  lastName="";
    int     admin_number=0;
}


void    admin_obj::setFirstName(string i){
    firstName=i;
}

string  admin_obj::getFirstName(){
    return firstName;
}

void    admin_obj::setLastName(string i){
    lastName=i;
}

string  admin_obj::getLastName(){
    return lastName;
}

void    admin_obj::setAdminNum(int i){
    admin_number=i;
}

int     admin_obj::getAdminNum(){
    return admin_number;
}
