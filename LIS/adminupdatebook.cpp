#include "adminupdatebook.h"
#include "ui_adminupdatebook.h"

#include "admincatalogue.h"
#include "adminhome.h"
#include "adminenterbookupdate.h"
#include "databasemanager.h"

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
    AdminCatalogue *admincatalogue =new AdminCatalogue (this);      // Opens catalogue page
    admincatalogue->show();
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


void AdminUpdateBook::on_edit1_clicked()
{
    QString title = "Great Lakes";                          // Sets the title for book1
    QString author = "Peter Jackson";                       // Sets the author for book1
    QPixmap image(":/images/book-covers/book14.png");       // Loads the image from the path specificed in resources

    emit editBookClicked(title, author, image);             // Emits the signal and takes the three arguments that were previously specified

    hide();
    AdminEnterBookUpdate *adminenterbookupdate = new AdminEnterBookUpdate(title, author, image, this);
    adminenterbookupdate->show();
}


void AdminUpdateBook::on_edit2_clicked()
{
    QString title = "A Love Story";                         // Sets the title for book1
    QString author = "Franklin Sierra";                     // Sets the author for book1
    QPixmap image(":/images/book-covers/book11.png");       // Loads the image from the path specificed in resources

    emit editBookClicked(title, author, image);             // Emits the signal and takes the three arguments that were previously specified

    hide();
    AdminEnterBookUpdate *adminenterbookupdate = new AdminEnterBookUpdate(title, author, image, this);
    adminenterbookupdate->show();
}


void AdminUpdateBook::on_edit3_clicked()
{
    QString title = "Embrace The Wild";                     // Sets the title for book1
    QString author = "Kylan Gentry";                        // Sets the author for book1
    QPixmap image(":/images/book-covers/book12.png");       // Loads the image from the path specificed in resources

    emit editBookClicked(title, author, image);             // Emits the signal and takes the three arguments that were previously specified

    hide();
    AdminEnterBookUpdate *adminenterbookupdate = new AdminEnterBookUpdate(title, author, image, this);
    adminenterbookupdate->show();
}


void AdminUpdateBook::on_edit4_clicked()
{
    QString title = "Atomic Love";                          // Sets the title for book1
    QString author = "Bowen Higgins";                       // Sets the author for book1
    QPixmap image(":/images/book-covers/book9.png");        // Loads the image from the path specificed in resources

    emit editBookClicked(title, author, image);             // Emits the signal and takes the three arguments that were previously specified

    hide();
    AdminEnterBookUpdate *adminenterbookupdate = new AdminEnterBookUpdate(title, author, image, this);
    adminenterbookupdate->show();
}

