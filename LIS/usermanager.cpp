#include "UserManager.h"

UserManager::UserManager()
{
    // Initialize any necessary data or variables here
}

UserManager& UserManager::getInstance()
{
    static UserManager instance;
    return instance;
}

void UserManager::setLoggedInUser(const QString& user)
{
    loggedInUser = user;
}

QString UserManager::getLoggedInUser() const
{
    return loggedInUser;
}

