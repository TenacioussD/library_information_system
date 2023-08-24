#include "adminremovemember.h"
#include "ui_adminremovemember.h"
#include "admincatalogue.h"
#include "adminmanagebooks.h"
#include "adminmembership.h"

#include <QMessageBox>

AdminRemoveMember::AdminRemoveMember(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminRemoveMember)
{
    ui->setupUi(this);
}

AdminRemoveMember::~AdminRemoveMember()
{
    delete ui;
}

void AdminRemoveMember::on_catalogue_clicked()
{
    hide();
    adminCatalogue = new AdminCatalogue(this);
    adminCatalogue->show();
}


void AdminRemoveMember::on_manageBooks_clicked()
{
    hide();
    adminManageBooks = new AdminManageBooks(this);
    adminManageBooks->show();
}


void AdminRemoveMember::on_back_clicked()
{
    hide();
    adminMembership = new AdminMembership(this);
    adminMembership->show();
}


void AdminRemoveMember::on_pushButton_2_clicked() //Logout button
{
    QMessageBox::StandardButton reply = QMessageBox::question(this, "Logout", "Are you sure you want to logout?", QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes) {                         // If "Yes" application will quit
        QApplication::quit();
    }
}

