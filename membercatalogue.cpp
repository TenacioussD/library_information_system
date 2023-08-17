#include "membercatalogue.h"
#include "ui_membercatalogue.h"
#include "memberhome.h"
#include "memberoverdue.h"
#include "memberpreorder.h"
#include "membermembership.h"

#include <QMessageBox>

MemberCatalogue::MemberCatalogue(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MemberCatalogue)
{
    ui->setupUi(this);
}

MemberCatalogue::~MemberCatalogue()
{
    delete ui;
}

void MemberCatalogue::on_back_clicked()
{
    hide();
    MemberHome *memberhome =new MemberHome;                // Opens member home
    memberhome->show();
}

void MemberCatalogue::on_logout_clicked()                  // Login button pressed
{
    QMessageBox::StandardButton reply = QMessageBox::question(this, "Logout", "Are you sure you want to logout?", QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes)
    {                    // If "Yes" application will quit
        QApplication::quit();
    }
}


void MemberCatalogue::on_manageBooks_clicked()
{
    hide();
    memberOverdue = new MemberOverdue(this);
    memberOverdue->show();
}


void MemberCatalogue::on_status_clicked()
{
    hide();
    memberPreOrder = new MemberPreOrder(this);
    memberPreOrder->show();
}


void MemberCatalogue::on_membership_clicked()
{
    hide();
    memberMembership = new MemberMembership(this);
    memberMembership->show();
}

