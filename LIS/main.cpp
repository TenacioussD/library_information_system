// Admin header pages
#include "login.h"
#include "adminlogin.h"
#include "adminhome.h"
#include "admincatalogue.h"
#include "adminmanagebooks.h"
#include "adminupdatebook.h"
#include "adminaddbook.h"
#include "adminbookconfirmation.h"
#include "adminenterbookupdate.h"
#include "admineditbookdialog.h"
#include "databasemanager.h"

// Member header pages
#include "memberlogin.h"
#include "memberhome.h"
#include "membercatalogue.h"

// Other header delarations
#include <QApplication>
#include <QSqlDatabase>              // Headers for SQL database
#include <QSqlQuery>
#include <QSqlError>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Login w;
    w.show();

    /*QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("books.db");                              // Books database

    if (!db.open()) {
        qDebug() << "Error opening database:" << db.lastError().text();
        return 1; // Return an error code
    }

    db.close();*/

    return a.exec();
}
