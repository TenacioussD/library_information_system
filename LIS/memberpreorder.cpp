#include "memberpreorder.h"
#include "ui_memberpreorder.h"
#include "memberhome.h"
#include "membercatalogue.h"
#include "membermembership.h"
#include "memberoverdue.h"

#include <QMessageBox>

MemberPreOrder::MemberPreOrder(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MemberPreOrder)
{
    ui->setupUi(this);
}

MemberPreOrder::~MemberPreOrder()
{
    delete ui;
}

void MemberPreOrder::on_back_clicked()
{
    hide();
    memberHome = new MemberHome(this);
    memberHome->show();
}


void MemberPreOrder::on_catalogue_clicked()
{
    hide();
    memberCatalogue = new MemberCatalogue(this);
    memberCatalogue->show();
}


void MemberPreOrder::on_manageBooks_clicked()
{
    hide();
    memberOverdue = new MemberOverdue(this);
    memberOverdue->show();
}


void MemberPreOrder::on_membership_clicked()
{
    hide();
    memberMembership = new MemberMembership(this);
    memberMembership->show();
}


void MemberPreOrder::on_logout_clicked()
{
    QMessageBox::StandardButton reply = QMessageBox::question(this, "Logout", "Are you sure you want to logout?", QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes)
    {                    // If "Yes" application will quit
        QApplication::quit();
    }
}

