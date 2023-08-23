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
#include "globalinstances.h"

// Member header pages
#include "memberlogin.h"
#include "memberhome.h"
#include "membercatalogue.h"

// Other header delarations
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Login w;
    w.show();

    GlobalInstances::initializeGlobalInstances();

    return a.exec();
}
