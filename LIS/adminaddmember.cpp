#include "adminaddmember.h"
#include "ui_adminaddmember.h"
#include "adminmembership.h"
#include "admincatalogue.h"
#include "adminmanagebooks.h"
#include "globalinstances.h"

#include <QMessageBox>


AdminAddMember::AdminAddMember(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminAddMember)
{
    ui->setupUi(this);

//Initialize the line edit poointers
firstNameLineEdit = new QLineEdit(this);
lastNameLineEdit = new QLineEdit(this);
contactNumLineEdit = new QLineEdit(this);

}

AdminAddMember::~AdminAddMember()
{
    delete ui;
}

void AdminAddMember::on_back_clicked()
{
    hide();
    adminMembership = new AdminMembership(this);
    adminMembership->show();
}

void AdminAddMember::on_catalogue_clicked()
{
    hide();
    if (!GlobalInstances::adminCatalogueInstance) {
        GlobalInstances::adminCatalogueInstance = new AdminCatalogue(this);   // Creates a new instance of adminCatalogue if it hasn't been set up prior
    }
    GlobalInstances::adminCatalogueInstance->show();                          // Opens adminCatalogue
}

void AdminAddMember::on_manageBooks_clicked()
{
    hide();
    adminManageBooks = new AdminManageBooks(this);
    adminManageBooks->show();
}

void AdminAddMember::on_pushButton_2_clicked()
{
    QMessageBox::StandardButton reply = QMessageBox::question(this, "Logout", "Are you sure you want to logout?", QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes) {                          // If "Yes" application will quit
        QApplication::quit();
    }
}

void AdminAddMember::on_addMemberBut_clicked()
{
    QString firstName = ui->firstName->text();
    QString lastName = ui->lastName->text();
    QString contactNum = ui->contactNum->text();

    if (!firstName.isEmpty() && !lastName.isEmpty() && !contactNum.isEmpty())
    {
        QFile file("memberships.txt");

        if (!file.open(QFile::Append | QFile::Text))
        {
            QMessageBox::warning(this, "Filing Problem", "File is not open");
            return; //return if file open fails
        }
            QTextStream out(&file);

            QString accountNumber = generateAccountNumber();
            out << accountNumber << " " << firstName << " " << lastName << " " << contactNum << Qt::endl;


            //Clear the input fields after adding member
            firstNameLineEdit->clear();
            lastNameLineEdit->clear();
            contactNumLineEdit->clear();

            //show pop-up message if member is added

            QMessageBox::information(this, "Success", "Member added successfully.");
    }
}

QString AdminAddMember::generateAccountNumber()
{
    QFile file("memberships.txt");
    int memberCount = 0;

    if (file.open(QFile::ReadOnly | QFile::Text))
    {
            QTextStream in(&file);

            while (!in.atEnd())
            {
            in.readLine(); // Read each line, but don't process it
            memberCount++;
            }

            file.close();
    }

    memberCount++; // Increment the count for the new member
    QString accountNumber = QString("LIS%1").arg(memberCount, 4, 10, QLatin1Char('0'));
    return accountNumber;
}



