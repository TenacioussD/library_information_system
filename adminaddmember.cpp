#include "adminaddmember.h"
#include "ui_adminaddmember.h"
#include "adminmembership.h"
#include "admincatalogue.h"
#include "adminmanagebooks.h"

AdminAddMember::AdminAddMember(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminAddMember)
{
    ui->setupUi(this);
}

AdminAddMember::~AdminAddMember()
{
    delete ui;
}

void AdminAddMember::on_back_clicked()
{
    hide();
    adminMembership = new AdminMembership(this);
    adminMembership->show();
}


void AdminAddMember::on_catalogue_clicked()
{
    hide();
    adminCatalogue = new AdminCatalogue(this);
    adminCatalogue->show();
}


void AdminAddMember::on_manageBooks_clicked()
{
    hide();
    adminManageBooks = new AdminManageBooks(this);
    adminManageBooks->show();
}

