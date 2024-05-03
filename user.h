#ifndef USER_H
#define USER_H
#include <QString>
class User
{
public:
    User(QString name_user,int age_user,QString email_user,QString phone_user,QString password_user);
    QString Get_Name();
    int Get_Age();
    QString Get_Email();
    QString Get_Phone();
    QString Get_Password();
private:
    QString name;
    int age;
    QString email;
    QString phone;
    QString password;
};

#endif // USER_H
