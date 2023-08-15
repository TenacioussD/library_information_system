<<<<<<< HEAD
#include "adminupdatebook.h"
#include "ui_adminupdatebook.h"

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
=======
#include "adminupdatebook.h"
#include "ui_adminupdatebook.h"

#include "admincatalogue.h"
#include "adminhome.h"
#include "adminenterbookupdate.h"

#include <QMessageBox>

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

void AdminUpdateBook::on_greatLakes_clicked()                       // Opens enterbookupdate page when title of book is clicked
{
    hide();
    AdminEnterBookUpdate *adminenterupdate =new AdminEnterBookUpdate (this);
    adminenterupdate->show();
}

>>>>>>> origin/master
