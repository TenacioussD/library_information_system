#include "adminviewstatus.h"
#include "ui_adminviewstatus.h"

#include "admincatalogue.h"         // Including the necessary header files
#include "adminmanagebooks.h"
#include "adminhome.h"
#include "adminoverdue.h"
#include "adminpreorderedbooks.h"
#include "adminviewstatusreturn.h"
#include "globalinstances.h"
#include "adminmembership.h"

//#include "adminmembership.h"

#include <QMessageBox>

AdminViewStatus::AdminViewStatus(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AdminViewStatus)
{
    ui->setupUi(this);
}

AdminViewStatus::~AdminViewStatus()
{
    delete ui;
}

void AdminViewStatus::on_catalogue_clicked()                              // opend the catalogue with the globalinstance set up
{
    hide();
    if (!GlobalInstances::adminCatalogueInstance) {
        GlobalInstances::adminCatalogueInstance = new AdminCatalogue(this);   // Creates a new instance of adminCatalogue if it hasn't been set up prior
    }
    GlobalInstances::adminCatalogueInstance->show();                          // Opens adminCatalogue
}


void AdminViewStatus::on_manageBooks_clicked()
{                                                             // Hide the current AdminViewStatus window
    hide();

                                                               // Create and show the ManageBooks window
    AdminManageBooks *adminManageBooks = new AdminManageBooks;
    adminManageBooks->show();
}


/*void AdminViewStatus::on_membership_clicked()
{
                                                                    // Hide the current AdminViewStatus window
    hide();

                                                                   // Create and show the Membership window
    AdminMembership *adminMembership = new AdminMembership;
    adminMembership->show();
}*/


void AdminViewStatus::on_logout_clicked()                          // Logout button pressed
{
    QMessageBox::StandardButton reply = QMessageBox::question(this, "Logout", "Are you sure you want to logout?", QMessageBox::Yes | QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        QApplication::quit();
    }
}


void AdminViewStatus::on_back_clicked()                           // back button pressed
{
    hide();                                                       // Hides the current AdminViewStatus page
    AdminHome *adminHomeInstance = new AdminHome;                 // Opens AdminHome
    adminHomeInstance->show();                                    // Show the AdminHome window
}


void AdminViewStatus::on_adminoverdue_clicked()
{
                                                                // Hide the current AdminViewStatus window
    hide();
                                                                // Create and show the AdminOverdue Window
    AdminOverdue *adminOverdue = new AdminOverdue;
    adminOverdue->show();
}


void AdminViewStatus::on_adminpreorderedbooks_clicked()
{
                                                                   // Hide the current AdminViewStatus Window
    hide();
                                                                   // Create and show the AdminPreOrderedBooks Window
    AdminPreOrderedBooks * adminPreOrderedBooks = new AdminPreOrderedBooks;
    adminPreOrderedBooks->show();

}


void AdminViewStatus::on_adminreturn_clicked()
{
                                                                    // Hide the current AdminViewStatus window
    hide();
                                                                    //Create and show the AdminReturn Window
   AdminViewStatusReturn *adminViewStatusReturn = new AdminViewStatusReturn;
   adminViewStatusReturn->show();
}

void AdminViewStatus::on_membership_clicked()
{
   hide();
   AdminMembership *adminMembership = new AdminMembership;
   adminMembership->show();
}

