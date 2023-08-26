#include "adminupdatebook.h"
#include "ui_adminupdatebook.h"

#include "admincatalogue.h"
#include "adminhome.h"
#include "adminenterbookupdate.h"
#include "admineditbookdialog.h"
#include "adminviewstatus.h"
#include "adminmanagebooks.h"
#include "globalinstances.h"

#include <QMessageBox>
#include <QString>
#include <QPixmap>

AdminUpdateBook::AdminUpdateBook(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AdminUpdateBook)
{
    ui->setupUi(this);
}

AdminUpdateBook::~AdminUpdateBook()
{
    delete ui;
}

void AdminUpdateBook::on_catalogue_3_clicked()                      // When catalogue is clicked from the menu section
{
    hide();
    if (!GlobalInstances::adminCatalogueInstance) {
        GlobalInstances::adminCatalogueInstance = new AdminCatalogue(this);   // Creates a new instance of adminCatalogue if it hasn't been set up prior
    }
    GlobalInstances::adminCatalogueInstance->show();                // Shows adminCatalogue page
}

void AdminUpdateBook::on_back_2_clicked()                           // When back button clicked
{
    hide();
    AdminHome *adminhome =new AdminHome (this);                     // Opens admin home
    adminhome->show();
}

void AdminUpdateBook::on_pushButton_3_clicked()                     // When logout clicked
{
    QMessageBox::StandardButton reply = QMessageBox::question(this, "Logout", "Are you sure you want to logout?", QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes) {                                // If "Yes" application will quit
        QApplication::quit();
    }
}

void AdminUpdateBook::updateCatalogue(int index, const QString &updatedTitle, const QString &updatedAuthor)
{
    if (GlobalInstances::adminCatalogueInstance)       // Checks if adminCatalogue is not nullptr
    {
        GlobalInstances::adminCatalogueInstance->updateBookDetails(index, updatedTitle, updatedAuthor);   // If condition is true, this calls the updateBookDetails function in catalogue and passes the three arguments to it
    }
}

void AdminUpdateBook::on_edit1_clicked()
{
    int bookIndex = 0;                                      // Sets the index to 0
    QString title = "Great Lakes";                          // Sets the title for book1
    QString author = "Peter Jackson";                       // Sets the author for book1
    QPixmap image(":/images/book-covers/book14.png");       // Loads the image from the path specificed in resources

    emit editBookClicked(title, author, image, bookIndex);  // Emits the signal and takes the four arguments that were previously specified

    hide();                                                 // Hides the adminUpdateBookPage
    AdminEnterBookUpdate *adminenterbookupdate = new AdminEnterBookUpdate(title, author, image, bookIndex, this);     // Creates a  new instance of adminEnterBookUpdate and passes the info specified in the constructor
    connect(adminenterbookupdate, &AdminEnterBookUpdate::bookDetailsUpdated, GlobalInstances::adminCatalogueInstance, &AdminCatalogue::updateBookDetails);  // The connection that is established between bookDetailsUpdated signal and the updateBookDetails slot
    adminenterbookupdate->show();                           // Opens adminEnterBookUpdate page
}

void AdminUpdateBook::on_edit2_clicked()
{
    int bookIndex = 1;                                      // Sets the index to 1
    QString title = "A Love Story";                         // Sets the title for book2
    QString author = "Franklin Sierra";                     // Sets the author for book2
    QPixmap image(":/images/book-covers/book11.png");       // Loads the image from the path specificed in resources

    emit editBookClicked(title, author, image, bookIndex);  // Emits the signal and takes the four arguments that were previously specified

    hide();                                                 // Hides the adminUpdateBookPage
    AdminEnterBookUpdate *adminenterbookupdate = new AdminEnterBookUpdate(title, author, image, bookIndex, this);     // Creates a  new instance of adminEnterBookUpdate and passes the info specified in the constructor
    connect(adminenterbookupdate, &AdminEnterBookUpdate::bookDetailsUpdated, GlobalInstances::adminCatalogueInstance, &AdminCatalogue::updateBookDetails);  // The connection that is established between bookDetailsUpdated signal and the updateBookDetails slot
    adminenterbookupdate->show();                           // Opens adminEnterBookUpdate page
}

void AdminUpdateBook::on_edit3_clicked()
{
    int bookIndex = 2;                                      // Sets the index to 2
    QString title = "Embrace The Wild";                     // Sets the title for book3
    QString author = "Kylan Gentry";                        // Sets the author for book3
    QPixmap image(":/images/book-covers/book12.png");       // Loads the image from the path specificed in resources

    emit editBookClicked(title, author, image, bookIndex);  // Emits the signal and takes the four arguments that were previously specified

    hide();                                                 // Hides the adminUpdateBookPage
    AdminEnterBookUpdate *adminenterbookupdate = new AdminEnterBookUpdate(title, author, image, bookIndex, this);     // Creates a  new instance of adminEnterBookUpdate and passes the info specified in the constructor
    connect(adminenterbookupdate, &AdminEnterBookUpdate::bookDetailsUpdated, GlobalInstances::adminCatalogueInstance, &AdminCatalogue::updateBookDetails);  // The connection that is established between bookDetailsUpdated signal and the updateBookDetails slot
    adminenterbookupdate->show();                           // Opens adminEnterBookUpdate page
}

void AdminUpdateBook::on_edit4_clicked()
{
    int bookIndex = 3;                                      // Sets the index to 3
    QString title = "Atomic Love";                          // Sets the title for book4
    QString author = "Bowen Higgins";                       // Sets the author for book4
    QPixmap image(":/images/book-covers/book9.png");        // Loads the image from the path specificed in resources

    emit editBookClicked(title, author, image, bookIndex);  // Emits the signal and takes the four arguments that were previously specified

    hide();                                                 // Hides the adminUpdateBookPage
    AdminEnterBookUpdate *adminenterbookupdate = new AdminEnterBookUpdate(title, author, image, bookIndex, this);     // Creates a  new instance of adminEnterBookUpdate and passes the info specified in the constructor
    connect(adminenterbookupdate, &AdminEnterBookUpdate::bookDetailsUpdated, GlobalInstances::adminCatalogueInstance, &AdminCatalogue::updateBookDetails);  // The connection that is established between bookDetailsUpdated signal and the updateBookDetails slot
    adminenterbookupdate->show();                           // Opens adminEnterBookUpdate page
}

void AdminUpdateBook::on_status_3_clicked()                 // When status is clicked on from the main menu
{
    hide();
    AdminViewStatus *adminStatus =new AdminViewStatus(this);
    adminStatus->show();
}

void AdminUpdateBook::on_manageBooks_3_clicked()            // When manage books is clicked on from the main menu
{
    hide();
    AdminManageBooks *adminManage =new AdminManageBooks(this);
    adminManage->show();
}

