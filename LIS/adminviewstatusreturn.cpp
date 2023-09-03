#include "adminviewstatusreturn.h"
#include "ui_adminviewstatusreturn.h"

#include "AdminCatalogue.h"     // Including the necessary header files
#include "AdminmanageBooks.h"
#include "AdminViewStatus.h"
#include "Adminmembership.h"
#include "AdminHome.h"
#include "globalinstances.h"

#include <QMessageBox>

AdminViewStatusReturn::AdminViewStatusReturn(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AdminViewStatusReturn)
{
    ui->setupUi(this);
}

AdminViewStatusReturn::~AdminViewStatusReturn()
{
    delete ui;
}

void AdminViewStatusReturn::on_catalogueButton_clicked()             // Opens catalogue
{
    hide();
    if (!GlobalInstances::adminCatalogueInstance) {
        GlobalInstances::adminCatalogueInstance = new AdminCatalogue(this);   // Creates a new instance of adminCatalogue if it hasn't been set up prior
    }
    GlobalInstances::adminCatalogueInstance->show();                          // Opens adminCatalogue
}


void AdminViewStatusReturn::on_manageBooksButton_clicked()
{                                                             // Hide the current AdminViewStatusReturn window
    hide();

                                                                 // Create and show the ManageBooks window
   AdminManageBooks *adminManageBooks = new AdminManageBooks;
   adminManageBooks->show();
}


void AdminViewStatusReturn::on_status_clicked()
{
    hide();                                                      // Hide the current AdminViewStatusReturn window

                                                                 // Create a new instance of AdminViewStatus window
    AdminViewStatus *adminViewStatus = new AdminViewStatus;
    adminViewStatus->show();                                         // Show the AdminStatus window
}


void AdminViewStatusReturn::on_logout_clicked()                  // logout button clicked
{
    QMessageBox::StandardButton reply = QMessageBox::question(this, "Logout", "Are you sure you want to logout?", QMessageBox::Yes | QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        QApplication::quit();
    }
}


void AdminViewStatusReturn::on_back_clicked()
{
    hide();                                                       // Hides the current AdminViewStatusReturn page
   AdminHome *adminHomeInstance = new AdminHome;                 // Opens AdminHome
    adminHomeInstance->show();                                    // Show the AdminHome window
}

void AdminViewStatusReturn::on_membershipButton_clicked()
{
    hide();
    AdminMembership *adminMembership = new AdminMembership;
    adminMembership->show();
}

