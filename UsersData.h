#ifndef USERSDATA_H
#define USERSDATA_H
#include <QVector>
#include <vector>

#include "user.h"
extern std::vector<User> Users_Seller; // A vector storing users' information (attrubutes for a user in class) after reading them from files and uses them to write new name later on, used for sellers
extern std::vector<User> Users_Buyer;
#endif // USERSDATA_H// A vector storing users' information (attrubutes for a user in class) after reading them from files and uses them to write new name later on, used for buyers
