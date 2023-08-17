#include "memberoverdue.h"
#include "memberhome.h"
#include "ui_memberoverdue.h"
#include "membercatalogue.h"
#include "memberpreorder.h"
#include "membermembership.h"

#include <QMessageBox>

MemberOverdue::MemberOverdue(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MemberOverdue)
{
    ui->setupUi(this);
}

MemberOverdue::~MemberOverdue()
{
    delete ui;
}

void MemberOverdue::on_back_clicked()
{
    hide();
    memberHome = new MemberHome(this);
    memberHome->show();
}


void MemberOverdue::on_catalogue_clicked()
{
    hide();
    memberCatalogue = new MemberCatalogue(this);
    memberCatalogue->show();
}


void MemberOverdue::on_status_clicked()
{
    hide();
    memberPreOrder = new MemberPreOrder(this);
    memberPreOrder->show();
}


void MemberOverdue::on_membership_clicked()
{
    hide();
    memberMembership = new MemberMembership(this);
    memberMembership->show();
}


void MemberOverdue::on_logout_clicked()
{
    QMessageBox::StandardButton reply = QMessageBox::question(this, "Logout", "Are you sure you want to logout?", QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes)
    {                    // If "Yes" application will quit
        QApplication::quit();
    }
}

