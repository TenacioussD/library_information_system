#include <QCoreApplication>

#include "adminviewstatus.h"   // you must include this in your main for it to run

#include <QApplication>  // also include this
#include <QWidget>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    AdminViewStatus w;
    w.show();

    return a.exec();
}
