#include "adminviewallmembers.h"
#include "ui_adminviewallmembers.h"
#include "admincatalogue.h"
#include "adminmanagebooks.h"
#include "adminmembership.h"

#include <QMessageBox>

AdminViewAllMembers::AdminViewAllMembers(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminViewAllMembers)
{
    ui->setupUi(this);
}

AdminViewAllMembers::~AdminViewAllMembers()
{
    delete ui;
}

void AdminViewAllMembers::on_catalogue_clicked()
{
    hide();
    adminCatalogue = new AdminCatalogue(this);
    adminCatalogue->show();
}

void AdminViewAllMembers::on_manageBooks_clicked()
{
    hide();
    adminManageBooks = new AdminManageBooks(this);
    adminManageBooks->show();
}

void AdminViewAllMembers::on_pushButton_2_clicked() //logg out button
{
    QMessageBox::StandardButton reply = QMessageBox::question(this, "Logout", "Are you sure you want to logout?", QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes) {                          // If "Yes" application will quit
        QApplication::quit();
    }
}

void AdminViewAllMembers::on_back_clicked() //back button
{
    hide();
    adminMembership = new AdminMembership(this);
    adminMembership->show();
}

