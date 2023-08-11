#include "memberhome.h"
#include "ui_memberhome.h"
#include "membercatalogue.h"
#include <QMessageBox>

MemberHome::MemberHome(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MemberHome)
{
    ui->setupUi(this);
}

MemberHome::~MemberHome()
{
    delete ui;
}

void MemberHome::on_logout_clicked()              // Confirmation of logout
{
    QMessageBox::StandardButton reply = QMessageBox::question(this, "Logout", "Are you sure you want to logout?", QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes) {         // If "Yes" application will quit
        QApplication::quit();
    }
}

void MemberHome::on_catalogue_2_clicked()
{
    hide();
    membercatalogue =new class MemberCatalogue;                   // Opens catalogue page using pointer in header file
    membercatalogue->show();
}

