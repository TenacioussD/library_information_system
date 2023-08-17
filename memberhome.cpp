#include "memberhome.h"
#include "ui_memberhome.h"
#include "membercatalogue.h"
#include "memberoverdue.h"
#include "memberpreorder.h"
#include "membermembership.h"


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
    MemberCatalogue *membercatalogue =new MemberCatalogue;                   // Opens catalogue page using pointer in header file
    membercatalogue->show();
}

//when clicked on overdue books, display memberoverdue.ui
void MemberHome::on_overdue_clicked()
{
    hide();
    memberOverdue = new MemberOverdue(this);
    memberOverdue->show();
}


void MemberHome::on_booked_clicked()
{
    hide();
    memberPreOrder = new MemberPreOrder(this);
    memberPreOrder->show();
}


void MemberHome::on_membership_2_clicked()
{
    hide();
    memberMembership = new MemberMembership(this);
    memberMembership->show();
}

