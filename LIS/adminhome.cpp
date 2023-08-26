#include "adminhome.h"
#include "ui_adminhome.h"

#include "admincatalogue.h"               // Including the necessary header files
#include "adminmanagebooks.h"
#include "adminhome.h"
#include "globalinstances.h"
#include "adminenterbookupdate.h"
#include "adminviewstatus.h"
#include "adminmembership.h"

#include <QMessageBox>

AdminHome::AdminHome(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AdminHome)

{
    ui->setupUi(this);
}

AdminHome::~AdminHome()
{
    delete ui;
}

void AdminHome::on_pushButton_clicked()      // Confirmation of logout
{
    QMessageBox::StandardButton reply = QMessageBox::question(this, "Logout", "Are you sure you want to logout?", QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes) {         // If "Yes" application will quit
        QApplication::quit();
    }
}

void AdminHome::on_catalogue_clicked()                   // When catalogue is clicked
{
    hide();
    if (!GlobalInstances::adminCatalogueInstance) {
        GlobalInstances::adminCatalogueInstance = new AdminCatalogue(this);   // Creates a new instance of adminCatalogue if it hasn't been set up prior
    }
    GlobalInstances::adminCatalogueInstance->show();                          // Opens adminCatalogue
}

void AdminHome::on_manageBooks_clicked()                // When manage books is clicked
{
    hide();
    AdminManageBooks *adminmanagebooks =new AdminManageBooks(this);         // Opens book management page using new instance
    adminmanagebooks->show();
}

void AdminHome::on_status_clicked()          // When status menu item is clicked
{
    hide();
    AdminViewStatus *adminStatus =new AdminViewStatus(this);         // Opens status page using new instance
    adminStatus->show();
}

void AdminHome::on_membership_clicked()      // When Membership is clicked
{
    hide();
    AdminMembership *adminMembership =new AdminMembership(this);         // Opens status page using new instance
    adminMembership->show();
}

