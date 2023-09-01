#include "adminmembership.h"
#include "ui_adminmembership.h"
#include "adminhome.h"
#include "admincatalogue.h"
#include "adminmanagebooks.h"
#include "adminaddmember.h"
#include "admineditmember.h"
#include "adminremovemember.h"
#include "adminviewallmembers.h"
#include "globalinstances.h"

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
    if (!GlobalInstances::adminCatalogueInstance) {
        GlobalInstances::adminCatalogueInstance = new AdminCatalogue(this);   // Creates a new instance of adminCatalogue if it hasn't been set up prior
    }
    GlobalInstances::adminCatalogueInstance->show();                          // Opens adminCatalogue
}

void AdminMembership::on_manageBooks_clicked()
{
    hide();
    adminManageBooks = new AdminManageBooks(this);
    adminManageBooks->show();
}

void AdminMembership::on_add_Book_clicked()
{
    hide();
    adminAddMember = new AdminAddMember(this);
    adminAddMember->show();
}

void AdminMembership::on_back_clicked()
{
    hide();
    AdminHome *adminhome =new AdminHome (this);                           // Opens admin home
    adminhome->show();
}

void AdminMembership::on_add_Book_3_clicked()
{
    hide();
    adminEditMember = new AdminEditMember(this);
    adminEditMember->show();
}

void AdminMembership::on_removeMem_clicked()
{
    hide();
    adminRemoveMem = new AdminRemoveMember(this);
    adminRemoveMem->show();
}

void AdminMembership::on_add_Book_2_clicked()
{
    hide();
    adminViewAllMem = new AdminViewAllMembers(this);
    adminViewAllMem->show();
}

