#include "adminhome.h"
#include "ui_adminhome.h"

#include "admincatalogue.h"               // Including the necessary header files
#include "adminmanagebooks.h"
#include "adminhome.h"
#include "globalinstances.h"
#include "adminviewstatus.h"
#include "adminmembership.h"

#include <QMessageBox>
#include <QFile>

AdminHome::AdminHome(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AdminHome)

{
    ui->setupUi(this);
    memberCount();
    overdueCount();
    booksAmount();
}

AdminHome::~AdminHome()
{
    delete ui;
}

void AdminHome::on_pushButton_clicked()                                       // Slot for when logout clicked - confirmation of logout
{
    QMessageBox::StandardButton reply = QMessageBox::question(this, "Logout", "Are you sure you want to logout?", QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes) {                                          // If "Yes" application will quit
        QApplication::quit();
    }
}

void AdminHome::on_catalogue_clicked()                                        // Slot for when catalogue is clicked
{
    hide();
    if (!GlobalInstances::adminCatalogueInstance) {
        GlobalInstances::adminCatalogueInstance = new AdminCatalogue(this);   // Creates a new instance of adminCatalogue if it hasn't been set up prior
    }
    GlobalInstances::adminCatalogueInstance->show();                          // Opens adminCatalogue
}

void AdminHome::on_manageBooks_clicked()                                      // Slot for when manage books is clicked
{
    hide();                                                                   // Hides current window
    AdminManageBooks *adminmanagebooks =new AdminManageBooks(this);           // Creates a new instance of AdminManageBooks
    adminmanagebooks->show();                                                 // Shows the page
}

void AdminHome::on_status_clicked()                                           // Slot for when status menu item is clicked
{
    hide();                                                                   // Hides current window
    AdminViewStatus *adminStatus =new AdminViewStatus(this);                  // Creates a new instance of AdminStatus
    adminStatus->show();                                                      // Shows the window
}

void AdminHome::on_membership_clicked()                                       // Slot for when Membership is clicked
{
    hide();                                                                   // Hides current window
    AdminMembership *adminMembership =new AdminMembership(this);              // creates a new instance of AdminMembership
    adminMembership->show();                                                  // Shows the window
}

void AdminHome::memberCount()
{
    QFile file("memberships.txt");
    if(!file.open(QFile::ReadWrite | QFile::Text))
    {
        QMessageBox::warning(this, "Filing Problem", "File is not open");
        return;
    }

    //read the file
    QStringList data;
    QTextStream in(&file);
    while (!in.atEnd())
    {
        QString line = in.readLine();
        data.append(line);
    }
    file.close();

    int memberCount = data.size(); //calculate the member count

    //Update the QPlainTextEdit to display member count
    ui->plainTextEdit->setPlainText(QString::number(memberCount));
}


void AdminHome::overdueCount()
{
    QFile file("overdue.txt");
    if(!file.open(QFile::ReadWrite | QFile::Text))
    {
        QMessageBox::warning(this, "Filing Problem", "File is not open");
        return;
    }

    //read the file
    QStringList data;
    QTextStream in(&file);

    while(!in.atEnd())
    {
        QString line = in.readLine();
        data.append(line);
    }
    file.close();

    int overdueCount = data.size(); //calculate overdue books

    //update ui
    ui->plainTextEdit_6->setPlainText((QString::number(overdueCount)));
}

void AdminHome::booksAmount()
{
    QFile file("catalogue.txt");
    if(!file.open(QFile::ReadWrite | QFile::Text))
    {
        QMessageBox::warning(this, "Filing Problem", "File is not open");
        return;
    }
    //read file
    QStringList data;
    QTextStream in(&file);

    while(!in.atEnd())
    {
        QString line = in.readLine();
        data.append(line);
    }
    file.close();

    int booksAmount = data.size(); //calculate amount books

    //update ui
    ui->booksAmount->setPlainText((QString::number(booksAmount)));
}
