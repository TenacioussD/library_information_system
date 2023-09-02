#include "adminbookconfirmation.h"
#include "ui_adminbookconfirmation.h"

#include "adminhome.h"                                     // Declaring header files
#include "adminaddbook.h"
#include "admincatalogue.h"
#include "adminmanagebooks.h"
#include "adminviewstatus.h"
#include "globalinstances.h"
#include "adminmembership.h"

#include <QMessageBox>                                     // Declaring the use of QMessageBox to be able to use it

AdminBookConfirmation::AdminBookConfirmation(const QString &title, const QString &author, QWidget *parent) :   // Constructor with parameters for QString title and author
    QMainWindow(parent),
    ui(new Ui::AdminBookConfirmation)
{
    ui->setupUi(this);

    ui->textEditOutputTitle->setPlainText(title);          // Display the text in TextEdit for title
    ui->textEditOutputAuthor->setPlainText(author);        // Display the text in TextEdit for author
}

AdminBookConfirmation::~AdminBookConfirmation()
{
    delete ui;
}

void AdminBookConfirmation::on_confirmDetails_clicked()    // Slot for when book details are confirmed
{

   QMessageBox::StandardButton ok = QMessageBox::information(this, "Thank you", "Thank you, the book has been added into the catalogue.", QMessageBox::Ok);

    if (ok == QMessageBox::Ok) {                           // When Ok button clicked it will redirect the user back to the home page with the use of an if statement

        hide();                                            // Hides current window
        AdminHome *adminhome =new AdminHome(this);
        adminhome->show();                                 // Opens admin home by creating a new instance of AdminHome with a variable of adminhome to hold a pointer
    }
}

void AdminBookConfirmation::on_back_2_clicked()            // Slot for when back button clicked
{
    hide();                                                // Hides the window
    AdminAddBook *adminaddbook = new AdminAddBook (this);  // Creates new instance of AdminAddBook
    adminaddbook->show();                                  // Open AdminAddBook page
}

void AdminBookConfirmation::on_catalogue_3_clicked()
{
    hide();
    if (!GlobalInstances::adminCatalogueInstance) {
        GlobalInstances::adminCatalogueInstance = new AdminCatalogue(this);   // Creates a new instance of adminCatalogue if it hasn't been set up prior
    }
    GlobalInstances::adminCatalogueInstance->show();                          // Opens the adminCatalogue page
}

void AdminBookConfirmation::on_pushButton_3_clicked()           // Slot for when Logout clicked - confirmation
{
    QMessageBox::StandardButton reply = QMessageBox::question(this, "Logout", "Are you sure you want to logout?", QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes) {                            // If "Yes" application will quit
        QApplication::quit();
    }
}

void AdminBookConfirmation::on_manageBooks_3_clicked()           // Slot for when managebooks is clicked in the main menu
{
    hide();
    AdminManageBooks *adminManage =new AdminManageBooks(this);   // Creates a new instance of AdminManageBooks
    adminManage->show();                                         // Shows the managebooks page
}

void AdminBookConfirmation::on_status_3_clicked()                // Slot for when status is clicked in the main menu
{
    hide();
    AdminViewStatus *adminStatus =new AdminViewStatus(this);     // Opens adminViewStatus page
    adminStatus->show();
}

void AdminBookConfirmation::on_membership_3_clicked()            // Slot for when membership is clicked from the main menu
{
    hide();
    AdminMembership *adminMembership = new AdminMembership(this);  // Creates a new instance of AdminMembership
    adminMembership->show();                                       // Opens the membership page
}

