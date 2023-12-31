#include "adminaddbook.h"
#include "ui_adminaddbook.h"

#include "adminhome.h"                                      // Declaration of headers used in this file
#include "admincatalogue.h"
#include "adminbookconfirmation.h"
#include "globalinstances.h"
#include "adminviewstatus.h"
#include "adminmanagebooks.h"
#include "adminmembership.h"

#include <QString>                                          // Declaring the use of QString functions in this file
#include <QMessageBox>

AdminAddBook::AdminAddBook(QWidget *parent) :               // Constructor
    QMainWindow(parent),
    ui(new Ui::AdminAddBook)
{
    ui->setupUi(this);
}

AdminAddBook::~AdminAddBook()
{
    delete ui;
}

void AdminAddBook::on_back_clicked()                         // Slot for when Back button clicked
{
    hide();                                                  // Hides previous window/page
    AdminHome *adminhome =new AdminHome (this);              // Opens admin home by creating a new instance of AdminHome with a variable of adminhome to hold a pointer
    adminhome->show();                                       // Using the show() method will display the AdminHome page
}

void AdminAddBook::on_pushButton_2_clicked()                 // Slot for when Logout button pressed
{
    QMessageBox::StandardButton reply = QMessageBox::question(this, "Logout", "Are you sure you want to logout?", QMessageBox::Yes | QMessageBox::No);    // Opens a message box with the options yes and no

    if (reply == QMessageBox::Yes) {                         // If "Yes" application will quit, else nothing will happen
        QApplication::quit();
    }
}

void AdminAddBook::on_catalogue_clicked()                    // Slot for when catalogue is clicked
{
    hide();
    if (!GlobalInstances::adminCatalogueInstance) {
        GlobalInstances::adminCatalogueInstance = new AdminCatalogue(this);   // Assigns the globalAdminCatalogue pointer to the instance if it hasn't been set up prior
    }
    GlobalInstances::adminCatalogueInstance->show();
}

void AdminAddBook::on_confirm_clicked()                      // Slot for when user clicks on confirm button. open up confirmation page
{
    QString title = ui->lineEdit_title->text();              // Get text from LineEdit for title
    QString author = ui->lineEdit_author->text();            // Get text from LineEdit for author

    hide();                                                  // Hides the previous window
    AdminBookConfirmation *confirmationPage = new AdminBookConfirmation(title, author);       // To open the confirmation page which takes the title and autor as arguments
    confirmationPage->show();
}

void AdminAddBook::on_status_clicked()                      // Slot for when status is clicked from the main menu
{
    hide();
    AdminViewStatus *adminStatus = new AdminViewStatus;     // Creates new instance of adminViewStatus
    adminStatus->show();                                    // Opens adminViewStatus page
}

void AdminAddBook::on_manageBooks_clicked()                 // Slot for when manage books is clicked
{
    hide();
    AdminManageBooks *adminManage = new AdminManageBooks;   // Creates new instance of adminManageBooks
    adminManage->show();                                    // Opens adminManageBooks
}


void AdminAddBook::on_membership_clicked()                  // Slot for when membership page is clicked
{
    hide();
    AdminMembership *adminMembership =new AdminMembership(this);  // Create new instance of adminMembership
    adminMembership->show();                                // Opens adminMembership page
}

