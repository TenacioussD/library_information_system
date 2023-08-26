
#include "login.h"

#include "globalinstances.h"

#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Login w;
    w.show();

    GlobalInstances::initializeGlobalInstances();

    return a.exec();
}
