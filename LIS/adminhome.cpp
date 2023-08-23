#include "adminhome.h"
#include "ui_adminhome.h"

#include "admincatalogue.h"               // Including the necessary header files
#include "adminmanagebooks.h"
#include "adminhome.h"
#include "globalinstances.h"
#include "adminenterbookupdate.h"

//#include "adminstatus.h"
//#include "adminmembership.h"

#include <QMessageBox>

AdminHome::AdminHome(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AdminHome)

{
    ui->setupUi(this);
}

AdminHome::~AdminHome()
{
    delete ui;
}

void AdminHome::on_pushButton_clicked()      // Confirmation of logout
{
    QMessageBox::StandardButton reply = QMessageBox::question(this, "Logout", "Are you sure you want to logout?", QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes) {         // If "Yes" application will quit
        QApplication::quit();
    }
}

void AdminHome::on_catalogue_clicked()
{
    hide();
    if (!GlobalInstances::adminCatalogueInstance) {
        GlobalInstances::adminCatalogueInstance = new AdminCatalogue(this);   // Creates a new instance of adminCatalogue if it hasn't been set up prior
    }
    GlobalInstances::adminCatalogueInstance->show();                          // Opens adminCatalogue
}

void AdminHome::on_manageBooks_clicked()
{
    hide();
    AdminManageBooks *adminmanagebooks =new AdminManageBooks(this);         // Opens book management page using new instance
    adminmanagebooks->show();
}

