#include "user.h"
#include<QString>
User::User( QString name_user, int age_user, QString email_user, QString phone_user,  QString password_user)
{
    name=name_user;
    age=age_user;
    email=email_user;
    phone=phone_user;
    password=password_user;
}
QString User::Get_Name()
{
    return name;
}
int User::Get_Age()
{
    return age;
}
QString User::Get_Email()
{
    return email;
}
QString User::Get_Password()
{
    return password;
}
QString User::Get_Phone()
{
    return phone;
}
