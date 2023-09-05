#include "adminremovememconfirm.h"
#include "ui_adminremovememconfirm.h"
#include "admincatalogue.h"
#include "adminmanagebooks.h"
#include "adminremovemember.h"
#include "globalinstances.h"

#include <QMessageBox>
#include <QString>
#include <QFile>
#include <QTextStream>

AdminRemoveMemConfirm::AdminRemoveMemConfirm(AdminRemoveMember *removeMemberInstance, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminRemoveMemConfirm),
    adminRemoveMem(removeMemberInstance) //Initialize adminRemoveMem
{
    ui->setupUi(this);

    //call the displayMember function to populate and display member information
   displayMember();
}

AdminRemoveMemConfirm::~AdminRemoveMemConfirm()
{
    delete ui;
}

void AdminRemoveMemConfirm::on_catalogue_clicked()
{
    hide();
    if (!GlobalInstances::adminCatalogueInstance) {
        GlobalInstances::adminCatalogueInstance = new AdminCatalogue(this);   // Creates a new instance of adminCatalogue if it hasn't been set up prior
    }
    GlobalInstances::adminCatalogueInstance->show();                          // Opens adminCatalogue
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

void AdminRemoveMemConfirm::displayMember()
{
    lisNum = adminRemoveMem->getLisNum(); // Replace this with the appropriate function to get lisNum from AdminRemoveMember

    layout = new QVBoxLayout(this);

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
        if (parts.size() >= 4 && parts[0] == lisNum) //Check for mathing LIS Access Number
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

            break;
        }
    }

    //Add vertical spacing between labels
    layout->addSpacing(5);
    layout->setAlignment(Qt::AlignTop); //Align the layout to center
    layout->setContentsMargins(365, 200, 0, 0);

    //close file
    file.close();
}

void AdminRemoveMemConfirm::on_pushButton_clicked() //confirm removal
{   
    //open the membership file for reading and writing
    QFile file("memberships.txt");
    if(!file.open(QFile::ReadWrite | QFile::Text))
    {
        QMessageBox::warning(this, "Filing Problem", "File is not open");
        return;
    }

    QTextStream stream(&file);
    QStringList updatedLines;

    //Read all lines fron the file and update corresponding m,ember info

    while (!stream.atEnd())
    {
        QString removeLine = stream.readLine();
        QStringList parts = removeLine.split(" ");
        if (parts.size() >= 4)
        {
            QString lisNUM = parts[0];
            if (lisNUM != lisNum) //Check if the access Number matches current member
            {
                updatedLines.append(removeLine);
            }
        }
    }

    // Clear the file content
    file.resize(0);

    //write modified lines back to file
    QTextStream out(&file);

    for (const QString &removeLine : updatedLines)
    {
        out << removeLine << Qt::endl;
    }

    //close file
    file.close();

    //Notify admin that removal was successful
    QMessageBox::information(this, "Removal Success", "Member removed successfully.");
}

