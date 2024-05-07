#include "user.h"
#include<QString>
#include "UsersData.h"


std::vector<QString> _Users_Buyer = { "Buyer1", "Buyer2", "Buyer3" , "Buyer4", "Buyer5" , "Buyer6" , "Buyer7", "Buyer8", "Buyer9", "Buyer10"  };
std::vector<QString> _Users_Seller = { "Seller1", "Seller2", "Seller3" , "Seller4" , "Seller5", "Seller6", "Seller7" , "Seller8" , "Seller9", "Seller10" };
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
