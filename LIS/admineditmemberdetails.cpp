#include "admineditmemberdetails.h"
#include "ui_admineditmemberdetails.h"
#include "admincatalogue.h"
#include "adminmanagebooks.h"
#include "adminaddmember.h"
#include "adminmembership.h"
#include "globalinstances.h"

#include <QMessageBox>
#include <QString>
#include <QFile>

AdminEditMemberDetails::AdminEditMemberDetails(const QString &firstName, const QString &lastName, const QString &contactNum, const QString &lisNum, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminEditMemberDetails),
    lisNum(lisNum) //Initializing LIS Access Number member
{
    ui->setupUi(this);

    //call the displayMember function to populate and display member information
    displayMember();

    //Populate UI fields with provided data
    ui->firstName->setText(firstName);
    ui->lastName->setText(lastName);
    ui->contactNum->setText(contactNum);
}

AdminEditMemberDetails::~AdminEditMemberDetails()
{
    delete ui;
}

void AdminEditMemberDetails::on_catalogue_clicked()
{
    hide();
    if (!GlobalInstances::adminCatalogueInstance) {
        GlobalInstances::adminCatalogueInstance = new AdminCatalogue(this);   // Creates a new instance of adminCatalogue if it hasn't been set up prior
    }
    GlobalInstances::adminCatalogueInstance->show();                          // Opens adminCatalogue
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
    adminMembership = new AdminMembership(this);
    adminMembership->show();
}

void AdminEditMemberDetails::displayMember()
{
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

void AdminEditMemberDetails::on_pushButton_clicked()
{
    QString newContactNum = ui->contactNum->text();
    QString newFirstName = ui->firstName->text();
    QString newLastName = ui->lastName->text();

    //Open the file for reading and writing
    QFile file("memberships.txt");

    if(!file.open(QFile::ReadWrite | QFile::Text))
    {
        QMessageBox::warning(this, "Filing Problem", "File is not open");
        return;
    }

    QTextStream in(&file);
    QStringList lines;

    //Read all lines fron the file and update corresponding m,ember info

    while (!in.atEnd())
    {
        QString line = in.readLine();
        QStringList parts = line.split(" ");
        if (parts.size() >= 4)
        {
            QString lisNUM = parts[0];
            if (lisNUM == lisNum) //Check if the access Number matches current member
            {
            QString updatedLine = lisNUM + " " + newFirstName + " " + newLastName + " " + newContactNum;
            lines.append(updatedLine);
            }
            else
            {
            lines.append(line);
            }
        }
    }

    file.close();

    //open file again to write the updated information

    if (!file.open(QFile::WriteOnly | QFile::Text | QFile::Truncate))
    {
        QMessageBox::warning(this, "File Problem", "Unable to open the file for writing");
        return;
    }

        QTextStream out(&file);
        for (const QString &line : lines)
        {
            out << line << "\n";
        }

        file.close();
        //reload displayMember function to update the information
        // Clear the existing layout before adding new labels
        QLayoutItem* child;
        while ((child = layout->takeAt(0)) != nullptr)
        {
            delete child->widget();
            delete child;
        }
        displayMember();
}

