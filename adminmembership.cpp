#include "adminmembership.h"
#include "ui_adminmembership.h"
#include "adminhome.h"
#include "admincatalogue.h"
#include "adminmanagebooks.h"

AdminMembership::AdminMembership(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminMembership)
{
    ui->setupUi(this);
}

AdminMembership::~AdminMembership()
{
    delete ui;
}

void AdminMembership::on_membership_clicked()
{
    hide();
    adminHome = new AdminHome(this);
    adminHome->show();
}


void AdminMembership::on_catalogue_clicked()
{
    hide();
    adminCatalogue = new AdminCatalogue(this);
    adminCatalogue->show();
}


void AdminMembership::on_manageBooks_clicked()
{
    hide();
    adminManageBooks = new AdminManageBooks(this);
    adminManageBooks->show();
}

