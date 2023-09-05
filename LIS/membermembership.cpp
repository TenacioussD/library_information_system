#include "membermembership.h"
#include "ui_membermembership.h"
#include "memberhome.h"
#include "membercatalogue.h"
#include "memberpreorder.h"
#include "memberoverdue.h"

#include <QMessageBox>

MemberMembership::MemberMembership(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MemberMembership)
{
    ui->setupUi(this);
}

MemberMembership::~MemberMembership()
{
    delete ui;
}

void MemberMembership::on_back_clicked()
{
    hide();
    memberHome = new MemberHome(this);
    memberHome->show();
}


void MemberMembership::on_catalogue_clicked()
{
    hide();
    memberCatalogue = new MemberCatalogue(this);
    memberCatalogue->show();
}


void MemberMembership::on_manageBooks_clicked()
{
    hide();
    memberOverdue = new MemberOverdue(this);
    memberOverdue->show();
}


void MemberMembership::on_status_clicked()
{
    hide();
    memberPreOrder = new MemberPreOrder(this);
    memberPreOrder->show();
}


void MemberMembership::on_pushButton_2_clicked()
{
    QMessageBox::StandardButton reply = QMessageBox::question(this, "Logout", "Are you sure you want to logout?", QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes)
    {                    // If "Yes" application will quit
        QApplication::quit();
    }
}

