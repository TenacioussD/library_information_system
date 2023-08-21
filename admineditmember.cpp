#include "admineditmember.h"
#include "ui_admineditmember.h"
#include "admincatalogue.h"
#include "adminmanagebooks.h"
#include "adminmembership.h"

#include <QMessageBox>

AdminEditMember::AdminEditMember(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminEditMember)
{
    ui->setupUi(this);
}

AdminEditMember::~AdminEditMember()
{
    delete ui;
}

void AdminEditMember::on_catalogue_clicked()
{
    hide();
    adminCatalogue = new AdminCatalogue(this);
    adminCatalogue->show();
}

void AdminEditMember::on_manageBooks_clicked()
{
    hide();
    adminManageBooks = new AdminManageBooks(this);
    adminManageBooks->show();
}

void AdminEditMember::on_pushButton_2_clicked() //Loggout button
{
    QMessageBox::StandardButton reply = QMessageBox::question(this, "Logout", "Are you sure you want to logout?", QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes) {                          // If "Yes" application will quit
        QApplication::quit();
    }
}


void AdminEditMember::on_back_clicked()
{
    hide();
    adminMembership = new AdminMembership(this);
    adminMembership->show();
}

