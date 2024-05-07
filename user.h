#ifndef USER_H
#define USER_H
#include <QString>
class User
{
public:
    User(QString name_user,int age_user,QString email_user,QString phone_user,QString password_user); //Constructor of User Class which takes in such paramters in order and assigns them to their corresponding appropriate attributes
    QString Get_Name(); //Returns the name stored in the name attribute
    int Get_Age();  //Returns the age stored in the name attribute
    QString Get_Email();    //Returns the email stored in the name attribute
    QString Get_Phone();    //Returns the phone number stored in the name attribute
    QString Get_Password(); //Returns the password stored in the name attribute
private:
    QString name;
    int age;
    QString email;
    QString phone;
    QString password;
};

#endif // USER_H
