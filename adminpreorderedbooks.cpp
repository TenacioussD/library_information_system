#include "adminpreorderedbooks.h"
#include "ui_adminpreorderedbooks.h"

//#include "admincatalogue.h"            // Including the necessary header files
//#include "adminmanagebooks.h"
#include "adminviewstatus.h"
//#include "adminmembership.h"
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

/*void AdminPreOrderedBooks::on_catalogueButton_clicked()
   {
     hide();                                                  // Hide the current AdminPreOrderedBooks window

                                                              // Create a new instance of AdminCatalogue window
   AdminCatalogue *adminCatalogue = new AdminCatalogue;
   adminCatalogue->show();                                  // Show the AdminCatalogue window
   }*/


/*void AdminPreOrderedBooks::on_manageBooksButton_clicked()
     {
                                                               // Hide the current AdminPreOrderedBooks window
       hide();

                                                                   // Create and show the ManageBooks window
      AdminManageBooks *adminManageBooks = new AdminManageBooks;
      adminManageBooks->show();
     }*/




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
