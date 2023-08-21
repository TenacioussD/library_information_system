#include "login.h"
//#include "adminlogin.h"  //Commented header out for now as we got errors due to files not being used directly
//#include "adminhome.h"
//#include "memberhome.h"
//#include "memberlogin.h"
//#include "admincatalogue.h"
//#include "membercatalogue.h"
//#include "adminmanagebooks.h"
//#include "adminaddbook.h"
//#include "adminbookconfirmation.h"

//#include <QMessageBox>

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Login w;
    w.show();
    return a.exec();
}
