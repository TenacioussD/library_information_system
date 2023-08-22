#include "databasemanager.h"

#include <QSqlDatabase>
#include <QSqlQuery>

bool DatabaseManager::updateBook(const QString &oldTitle, const QString &newTitle, const QString &newAuthor)
{
    QSqlDatabase db = QSqlDatabase::database();
    QSqlQuery query;
    query.prepare("UPDATE Books SET Title = :newTitle, Author = :newAuthor WHERE Title = :oldTitle");
    query.bindValue(":newTitle", newTitle);
    query.bindValue(":newAuthor", newAuthor);
    query.bindValue(":oldTitle", oldTitle);

    return query.exec();
}
