#include "admineditmemberdetails.h"
#include "ui_admineditmemberdetails.h"
#include "admincatalogue.h"
#include "adminmanagebooks.h"
#include "adminaddmember.h"

#include <QMessageBox>

AdminEditMemberDetails::AdminEditMemberDetails(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminEditMemberDetails)
{
    ui->setupUi(this);
}

AdminEditMemberDetails::~AdminEditMemberDetails()
{
    delete ui;
}

void AdminEditMemberDetails::on_catalogue_clicked()
{
    hide();
    adminCatalogue = new AdminCatalogue(this);
    adminCatalogue->show();
}


void AdminEditMemberDetails::on_manageBooks_clicked()
{
    hide();
    adminManageBooks = new AdminManageBooks(this);
    adminManageBooks->show();
}


void AdminEditMemberDetails::on_pushButton_2_clicked()
{
    QMessageBox::StandardButton reply = QMessageBox::question(this, "Logout", "Are you sure you want to logout?", QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes) {                          // If "Yes" application will quit
        QApplication::quit();
    }
}


void AdminEditMemberDetails::on_back_clicked()
{
    hide();
    adminAddMember = new AdminAddMember(this);
    adminAddMember->show();
}


void AdminEditMemberDetails::on_pushButton_clicked() //edit info button
{

}

