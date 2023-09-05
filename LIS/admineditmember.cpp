#include "admineditmember.h"
#include "ui_admineditmember.h"
#include "admincatalogue.h"
#include "adminmanagebooks.h"
#include "adminmembership.h"
#include "admineditmemberdetails.h"
#include "globalinstances.h"

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
    if (!GlobalInstances::adminCatalogueInstance) {
        GlobalInstances::adminCatalogueInstance = new AdminCatalogue(this);   // Creates a new instance of adminCatalogue if it hasn't been set up prior
    }
    GlobalInstances::adminCatalogueInstance->show();                          // Opens adminCatalogue
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
    //fetching input values from UI
    QString enterFirstName = ui->firstName->text();
    QString enterLastName = ui->lastName->text();
    QString enterLisNum = ui->lisNum->text();
    QString contactNum;

    if (!enterFirstName.isEmpty() && !enterLastName.isEmpty() && !enterLisNum.isEmpty())
    {
        QFile file("memberships.txt");

        if (!file.open(QFile::ReadOnly | QFile::Text))
        {
            QMessageBox::warning(this, "Filing Problem", "File is not open");
        }
        QTextStream in(&file); //in means we are reading from the file
        bool inDatabase = false; //create bool

        while (!in.atEnd())
        {
            QString line = in.readLine();
            //the parts gets split by spaces
            QStringList parts = line.split(" ");

            //assign strings to diffrent parts
            QString lisNum = parts[0];
            QString firstName = parts[1];
            QString lastName = parts[2];
            contactNum = parts[3];

            //compare ui information with parts
            if (enterFirstName == firstName && enterLastName == lastName && enterLisNum == lisNum)
            {
                //if the bool is true member information can be edited
                inDatabase = true;
                hide();
                adminEditMemberDetails = new AdminEditMemberDetails(firstName, lastName, contactNum, lisNum);
                adminEditMemberDetails->show();
            }
        }
        file.close();

        //if bool is false then message will display
        if (!inDatabase)
        {
            QMessageBox::warning(this, "Member Not Found", "Sorry, the information is not in the database, please make sure you have the correct credentials");
        }
    }

}

