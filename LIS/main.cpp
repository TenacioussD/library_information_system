#include "login.h"
#include "adminlogin.h"
#include <Qfile>

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Login w;
    w.show();
    return a.exec();
}
