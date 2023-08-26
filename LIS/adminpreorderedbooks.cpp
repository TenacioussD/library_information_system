#include "adminpreorderedbooks.h"
#include "ui_adminpreorderedbooks.h"

#include "admincatalogue.h"            // Including the necessary header files
#include "adminmanagebooks.h"
#include "adminviewstatus.h"
#include "adminhome.h"
//#include "adminmembership.h"
#include "globalinstances.h"

#include <QMessageBox>



AdminPreOrderedBooks::AdminPreOrderedBooks(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AdminPreOrderedBooks)
{
    ui->setupUi(this);
}

AdminPreOrderedBooks::~AdminPreOrderedBooks()
{
    delete ui;
}

void AdminPreOrderedBooks::on_catalogueButton_clicked()
   {
    hide();
    if (!GlobalInstances::adminCatalogueInstance) {
        GlobalInstances::adminCatalogueInstance = new AdminCatalogue(this);   // Creates a new instance of adminCatalogue if it hasn't been set up prior
    }
    GlobalInstances::adminCatalogueInstance->show();                          // Opens adminCatalogue                              // Show the AdminCatalogue window
   }


void AdminPreOrderedBooks::on_manageBooksButton_clicked()
     {
                                                               // Hide the current AdminPreOrderedBooks window
       hide();

                                                                   // Create and show the ManageBooks window
      AdminManageBooks *adminManageBooks = new AdminManageBooks;
      adminManageBooks->show();
     }




void AdminPreOrderedBooks::on_status_clicked()
     {
                                                                    // Hide the current AdminPreOrderedBooks window
       hide();

                                                                // Create and show the status window
       AdminViewStatus *adminViewStatus = new AdminViewStatus;
       adminViewStatus->show();
     }


/*void AdminPreOrderedBooks::on_membershipButton_clicked()
     {
                                                                     // Hide the current AdminPreOrderedBooks window
       hide();

                                                                    // Create and show the Membership window
      AdminMembership *adminMembership = new AdminMembership;
      adminMembership->show();
     }*/

void AdminPreOrderedBooks::on_logout_clicked()
{
       QMessageBox::StandardButton reply = QMessageBox::question(this, "Logout", "Are you sure you want to logout?", QMessageBox::Yes | QMessageBox::No);

       if (reply == QMessageBox::Yes) {         // If "Yes" application will quit
           QApplication::quit();
       }
}


void AdminPreOrderedBooks::on_back_clicked()
{
       hide();
       AdminHome *adminhome =new AdminHome (this);                     // Opens admin home
       adminhome->show();
}

