#ifndef DATABASEMANAGER_H
#define DATABASEMANAGER_H

#include <QString>

class DatabaseManager {

public:
    static bool updateBook(const QString &oldTitle, const QString &newTitle, const QString &newAuthor);


private:

    DatabaseManager() {}                   // Private constructor to prevent instantiation

};

#endif // DATABASEMANAGER_H
