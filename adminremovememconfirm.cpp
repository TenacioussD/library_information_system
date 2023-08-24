#include "adminremovememconfirm.h"
#include "ui_adminremovememconfirm.h"
#include "admincatalogue.h"
#include "adminmanagebooks.h"
#include "adminremovemember.h"

#include <QMessageBox>

AdminRemoveMemConfirm::AdminRemoveMemConfirm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminRemoveMemConfirm)
{
    ui->setupUi(this);
}

AdminRemoveMemConfirm::~AdminRemoveMemConfirm()
{
    delete ui;
}

void AdminRemoveMemConfirm::on_catalogue_clicked()
{
    hide();
    adminCatalogue = new AdminCatalogue(this);
    adminCatalogue->show();
}

void AdminRemoveMemConfirm::on_manageBooks_clicked()
{
    hide();
    adminManageBooks = new AdminManageBooks(this);
    adminManageBooks->show();
}

void AdminRemoveMemConfirm::on_pushButton_2_clicked() //Loggout button
{
    QMessageBox::StandardButton reply = QMessageBox::question(this, "Logout", "Are you sure you want to logout?", QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes) {                          // If "Yes" application will quit
        QApplication::quit();
    }
}

void AdminRemoveMemConfirm::on_back_clicked()
{
    hide();
    adminRemoveMem = new AdminRemoveMember(this);
    adminRemoveMem->show();
}

