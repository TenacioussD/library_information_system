#include "login.h"
#include "adminlogin.h"
#include "adminhome.h"
#include "memberhome.h"

#include <QMessageBox>

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Login w;
    w.show();
    return a.exec();
}
