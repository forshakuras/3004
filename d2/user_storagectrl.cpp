#include "user_storagectrl.h"

user_storagectrl::user_storagectrl()
{

    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("cupidDB.db");
    if(db.open()){
        cout<< "Database open successful!" << endl;
    }else{
        cout<< "Database open fault!" << endl;
        exit(0);
    }

}


void user_storagectrl::DBSearch_Admin(string tableName, string admin_number, admin_obj* admin)
{
    string strSql = "select * from "+ tableName + " where admin_number = "+ admin_number;
    if(db.open()){
        QSqlQuery data;
        if(data.exec(QString::fromStdString(strSql))){
             while(data.next()){
                 admin->setFirstName(data.value(0).toString().toStdString());
                 admin->setLastName(data.value(1).toString().toStdString());
                 admin->setAdminNum(data.value(2).toInt());
             }
        }else{
            cout << db.lastError().text().toStdString() << endl;
        }
    }
}




string user_storagectrl::floatToString(float x)
{
    stringstream ss (stringstream::in | stringstream::out);
    ss << x;
    return ss.str();
}


string user_storagectrl::intToString(int x)
{
    stringstream ss;
    ss << x;
    return ss.str();
}


void user_storagectrl::DBClose()
{
    db.close();
}
