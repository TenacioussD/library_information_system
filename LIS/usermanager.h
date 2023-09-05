#ifndef USERMANAGER_H
#define USERMANAGER_H

#include <QString>

class UserManager {
public:
    static UserManager& getInstance();

    void setLoggedInUser(const QString& user);
    QString getLoggedInUser() const;

private:
    QString loggedInUser;

    UserManager(); // Private constructor to enforce Singleton pattern
    UserManager(const UserManager&) = delete;
    UserManager& operator=(const UserManager&) = delete;
};

#endif // USERMANAGER_H
