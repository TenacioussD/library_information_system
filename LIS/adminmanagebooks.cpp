#include "adminmanagebooks.h"
#include "ui_adminmanagebooks.h"

#include "adminaddbook.h"               // Include relevant headers
#include "adminhome.h"
#include "admincatalogue.h"
#include "adminupdatebook.h"
#include "globalinstances.h"
#include "adminviewstatus.h"
#include "adminmembership.h"

#include <QMessageBox>

AdminManageBooks::AdminManageBooks(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AdminManageBooks)
{
    ui->setupUi(this);
}

AdminManageBooks::~AdminManageBooks()
{
    delete ui;
}

void AdminManageBooks::on_add_Book_clicked()                // When add book button is clicked
{
    hide();
    AdminAddBook *adminaddbook =new AdminAddBook (this);    // Opens admin add new book page
    adminaddbook->show();
}

void AdminManageBooks::on_catalogue_clicked()               // When catalogue is clicked from the main menu
{
    hide();
    if (!GlobalInstances::adminCatalogueInstance) {
        GlobalInstances::adminCatalogueInstance = new AdminCatalogue(this);   // Creates a new instance of adminCatalogue if it hasn't been set up prior
    }
    GlobalInstances::adminCatalogueInstance->show();        // Opens adminCatalogue page
}

void AdminManageBooks::on_back_clicked()                    // When back button clicked
{
    hide();
    AdminHome *adminhome =new AdminHome (this);             // Opens admin home
    adminhome->show();
}

void AdminManageBooks::on_pushButton_2_clicked()            // Logout button clicked
{
    QMessageBox::StandardButton reply = QMessageBox::question(this, "Logout", "Are you sure you want to logout?", QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes) {                        // If "Yes" application will quit
        QApplication::quit();
    }
}

void AdminManageBooks::on_add_Book_3_clicked()              // When edit book is clicked
{
    hide();
    AdminUpdateBook *adminupdatebook =new AdminUpdateBook (this);    // Opens adminUpdateBook page
    adminupdatebook->show();
}

void AdminManageBooks::on_status_clicked()                  // When status is clicked from the main menu
{
    hide();
    AdminViewStatus *adminStatus =new AdminViewStatus(this);
    adminStatus->show();
}

void AdminManageBooks::on_membership_clicked()              // When membership is clicked from the main menu
{
    hide();
    AdminMembership *adminMembership = new AdminMembership (this); // Creates a new instance of AdminMembership
    adminMembership->show();                                // Opens the membership page
}

