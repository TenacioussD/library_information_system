#include "admineditmember.h"
#include "ui_admineditmember.h"
#include "admincatalogue.h"
#include "adminmanagebooks.h"
#include "adminmembership.h"

#include <QMessageBox>
#include <QString>
#include <QFile>

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


void AdminEditMember::on_addMemberBut_clicked()
{
    QString firstName = ui->firstName->text();
    QString lastName = ui->lastName->text();
    QString lisNum = ui->lisNum->text();
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

        file.close();

        //show pop-up message if member is added
        QMessageBox::information(this, "Success", "Member added successfully.");
    }
}

