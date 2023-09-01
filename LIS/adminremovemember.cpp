#include "adminremovemember.h"
#include "ui_adminremovemember.h"
#include "admincatalogue.h"
#include "adminmanagebooks.h"
#include "adminmembership.h"
#include "adminremovememconfirm.h"
#include "globalinstances.h"

#include <QMessageBox>
#include <QFile>
#include <QString>
#include <QDebug>

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
    if (!GlobalInstances::adminCatalogueInstance) {
        GlobalInstances::adminCatalogueInstance = new AdminCatalogue(this);   // Creates a new instance of adminCatalogue if it hasn't been set up prior
    }
    GlobalInstances::adminCatalogueInstance->show();                          // Opens adminCatalogue
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

void AdminRemoveMember::on_pushButton_clicked() //Remove Member Push Button
{
    //fetching input values from UI
    QString firstName = ui->firstName->text();
    QString lastName = ui->lastName->text();
    lisNum = ui->lisNum->text();
    QString contactNum;

    if (!firstName.isEmpty() && !lastName.isEmpty() && !lisNum.isEmpty())
    {
        QFile file("memberships.txt");

        if (!file.open(QFile::ReadOnly | QFile::Text))
        {
            QMessageBox::warning(this, "Filing Problem", "File is not open");
        }
        QTextStream in(&file); //in means we are reading from the file

        QString lineToRead = lisNum + " " + firstName + " " + contactNum + "\n";
        in.readAll();
        ui->lisNum->setText(lisNum);
        ui->firstName->setText(firstName);
        ui->lastName->setText(lastName);

        hide();
        adminRemoveMemConfirm = new AdminRemoveMemConfirm(this); // Correct constructor
        adminRemoveMemConfirm->show();
    }
}

QString AdminRemoveMember::getLisNum() const
{
    return lisNum; // Assuming 'lisNum' is a member variable of AdminRemoveMember
}
