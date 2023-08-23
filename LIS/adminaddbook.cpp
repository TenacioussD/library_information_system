#include "adminaddbook.h"
#include "ui_adminaddbook.h"

#include "adminhome.h"                                      // Declaration of headers used in this file
#include "admincatalogue.h"
#include "adminbookconfirmation.h"
#include "globalinstances.h"

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

void AdminAddBook::on_back_clicked()                         // Back button clicked
{
    hide();                                                  // Hides previous window/page
    AdminHome *adminhome =new AdminHome (this);              // Opens admin home by creating a new instance of AdminHome with a variable of adminhome to hold a pointer
    adminhome->show();                                       // Using the show() method will display the AdminHome page
}

void AdminAddBook::on_pushButton_2_clicked()                 // Logout button pressed
{
    QMessageBox::StandardButton reply = QMessageBox::question(this, "Logout", "Are you sure you want to logout?", QMessageBox::Yes | QMessageBox::No);    // Opens a message box with the options yes and no

    if (reply == QMessageBox::Yes) {                         // If "Yes" application will quit, else nothing will happen
        QApplication::quit();
    }
}

void AdminAddBook::on_catalogue_clicked()                    // When catalogue is clicked
{
    hide();
    AdminCatalogue *admincatalogue = new AdminCatalogue(this);
    globalAdminCatalogue = admincatalogue;                     // Assigns the globalAdminCatalogue pointer to the instance

}

void AdminAddBook::on_confirm_clicked()                      // Will open up confirmation page
{
    QString title = ui->lineEdit_title->text();              // Get text from LineEdit for title
    QString author = ui->lineEdit_author->text();            // Get text from LineEdit for author

    hide();                                                  // Hides the previous window
    AdminBookConfirmation *confirmationPage = new AdminBookConfirmation(title, author);       // To open the confirmation page which takes the title and autor as arguments
    confirmationPage->show();
}


