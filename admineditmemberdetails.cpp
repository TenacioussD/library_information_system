#include "admineditmemberdetails.h"
#include "ui_admineditmemberdetails.h"
#include "admincatalogue.h"
#include "adminmanagebooks.h"
#include "adminaddmember.h"

#include <QMessageBox>
#include <QString>
#include <QFile>

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

void AdminEditMemberDetails::displayMember()
{
    layout = new QVBoxLayout(this);

    QString lisNum;
    QString firstName = ui->firstName->text();
    QString lastName = ui->lastName->text();
    QString contactNum = ui->contactNum->text();

    QString accNum, memberFirstName, memberLastName, phoneNum;

    //open and read from member file

    QFile file("memberships.txt");
    if (!file.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::warning(this, "Filing Problem", "File is not open");
        return;
    }

    QTextStream in(&file);

    //Search for the member's information and store it in variables
    while (!in.atEnd())
    {
        QString line = in.readLine();
        QStringList parts = line.split(" ");
        if (parts.size() >= 4)
        {
            accNum = parts[0];
            memberFirstName = parts[1];
            memberLastName = parts[2];
            phoneNum = parts[3];

            // Create labels to display member information
            QLabel *accNumLabel = new QLabel("LIS Access Number: " + accNum);
            QLabel *firstNameLabel = new QLabel("First Name: " + memberFirstName);
            QLabel *lastNameLabel = new QLabel("Last Name: " + memberLastName);
            QLabel *phoneNumLabel = new QLabel("Contact Number: " + phoneNum);

            // Add labels to the layout
            layout->addWidget(accNumLabel);
            layout->addWidget(firstNameLabel);
            layout->addWidget(lastNameLabel);
            layout->addWidget(phoneNumLabel);
        }
    }

    //close file
    file.close();
}
