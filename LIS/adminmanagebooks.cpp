#include "adminmanagebooks.h"
#include "ui_adminmanagebooks.h"

#include "adminaddbook.h"
#include "adminhome.h"
#include "admincatalogue.h"
#include "adminupdatebook.h"
#include "globalinstances.h"

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


void AdminManageBooks::on_add_Book_clicked()
{
    hide();
    AdminAddBook *adminaddbook =new AdminAddBook (this);                // Opens admin add new book page
    adminaddbook->show();
}

void AdminManageBooks::on_catalogue_clicked()
{
    hide();
    if (!GlobalInstances::adminCatalogueInstance) {
        GlobalInstances::adminCatalogueInstance = new AdminCatalogue(this);   // Creates a new instance of adminCatalogue if it hasn't been set up prior
    }
    GlobalInstances::adminCatalogueInstance->show();                          // Opens adminCatalogue page
}

void AdminManageBooks::on_back_clicked()
{
    hide();
    AdminHome *adminhome =new AdminHome (this);            // Opens admin home
    adminhome->show();
}

void AdminManageBooks::on_pushButton_2_clicked()             // Logout button clicked
{
    QMessageBox::StandardButton reply = QMessageBox::question(this, "Logout", "Are you sure you want to logout?", QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes) {                         // If "Yes" application will quit
        QApplication::quit();
    }
}

void AdminManageBooks::on_add_Book_3_clicked()
{
    hide();
    AdminUpdateBook *adminupdatebook =new AdminUpdateBook (this);    // Opens admin add new book page
    adminupdatebook->show();
}

