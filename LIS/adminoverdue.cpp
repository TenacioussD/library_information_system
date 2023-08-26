#include "adminoverdue.h"
#include "ui_adminoverdue.h"

#include "admincatalogue.h"        // Including the necessary header files
#include "adminmanagebooks.h"
#include "adminviewstatus.h"
//#include "adminmembership.h"
#include "globalinstances.h"
#include "adminhome.h"

#include <QMessageBox>



AdminOverdue::AdminOverdue(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AdminOverdue)
{
    ui->setupUi(this);
}

AdminOverdue::~AdminOverdue()
{
    delete ui;
}

void AdminOverdue::on_catalogueButton_clicked()
    {
    hide();
    if (!GlobalInstances::adminCatalogueInstance) {
        GlobalInstances::adminCatalogueInstance = new AdminCatalogue(this);   // Creates a new instance of adminCatalogue if it hasn't been set up prior
    }
    GlobalInstances::adminCatalogueInstance->show();                          // Opens adminCatalogue                                      // Show the AdminCatalogue window
    }



void AdminOverdue::on_manageBooksButton_clicked()
    {
    hide();                                                        // Hide the current AdminOverdue window

                                                                         // Create a new instance of AdminManageBooks window
    AdminManageBooks *adminManageBooks = new AdminManageBooks;
    adminManageBooks->show();                                     // Show the AdminManageBooks window
}

void AdminOverdue::on_adminviewstatus_clicked()
{
    AdminViewStatus *adminViewStatus = new AdminViewStatus;
    adminViewStatus->show();
}


/*void AdminOverdue::on_membershipButton_clicked()
   {
     hide();                                                               // Hide the current AdminOverdue window

                                                                          // Create a new instance of AdminMembership window
     AdminMembership *adminMembership = new AdminMembership;
     adminMembership->show();                                            // Show the AdminMembership window
   }*/


void AdminOverdue::on_logout_clicked()
                                                                             // Logout button pressed
   {
      QMessageBox::StandardButton reply = QMessageBox::question(this, "Logout", "Are you sure you want to logout?", QMessageBox::Yes | QMessageBox::No);
      if (reply == QMessageBox::Yes) {
          QApplication::quit();
      }
   }


void AdminOverdue::on_back_clicked()                                 // back button pressed
   {
      hide();                                                       // Hides the current AdminOverdue page
      AdminHome *adminHomeInstance = new AdminHome;                 // Opens AdminHome
      adminHomeInstance->show();                                    // Show the AdminHome window
   }




