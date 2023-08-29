#include "memberoverdue.h"
#include "memberhome.h"
#include "ui_memberoverdue.h"
#include "membercatalogue.h"
#include "memberpreorder.h"
#include "membermembership.h"
#include "usermanager.h"

#include <QMessageBox>
#include <QFile>
#include <QString>
#include <QTextStream>
#include <QDate>
#include <QTableView>
#include <QStandardItemModel>

MemberOverdue::MemberOverdue(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MemberOverdue)
{
    ui->setupUi(this);

    //Retrieve logged-in user from UserManager
    loggedInUsername = UserManager::getInstance().getLoggedInUser();

    //call the function to update info
    viewOverdue();
}

MemberOverdue::~MemberOverdue()
{
    delete ui;
}

void MemberOverdue::on_back_clicked()
{
    hide();
    memberHome = new MemberHome(this);
    memberHome->show();
}


void MemberOverdue::on_catalogue_clicked()
{
    hide();
    memberCatalogue = new MemberCatalogue(this);
    memberCatalogue->show();
}


void MemberOverdue::on_status_clicked()
{
    hide();
    memberPreOrder = new MemberPreOrder(this);
    memberPreOrder->show();
}


void MemberOverdue::on_membership_clicked()
{
    hide();
    memberMembership = new MemberMembership(this);
    memberMembership->show();
}


void MemberOverdue::on_logout_clicked()
{
    QMessageBox::StandardButton reply = QMessageBox::question(this, "Logout", "Are you sure you want to logout?", QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes)
    {                    // If "Yes" application will quit
        QApplication::quit();
    }
}

void MemberOverdue::viewOverdue()
{
    //open order.txt to check if data needs to be added to overdue
    QFile file("order.txt");

    if(!file.open(QFile::ReadWrite | QFile::Text))
    {
        QMessageBox::warning(this, "Filing Problem", "File is not open");
        return;
    }

    //read file

    QStringList data;
    QTextStream in(&file);

    bool hasOverdue = false;
    QDate currentDate = QDate::currentDate();
    QDate fourTeenDaysAgo = currentDate.addDays(-14); //assuming that if the book is longer than 14 days with the member it's overdue

    while (!in.atEnd())
    {
        QString line = in.readLine();
        data = line.split("/");

        QString memberName = data[0];
        QString bookTitle = data[1];
        QString bookAuthor = data[2];
        QString dateString =data[3];

        QDate orderDate = QDate::fromString(dateString,"yyyy-MM-dd" );

        //I want to compare the date in the file with today's date
        if (orderDate < fourTeenDaysAgo)
        {
            hasOverdue = true;

            //append the overdue entry to overdue.txt

            QFile overdueFile("overdue.txt");
            if (overdueFile.open(QFile::Append | QFile::Text))
            {
                QTextStream out(&overdueFile);
                out << memberName << "/" << bookTitle << "/" << bookAuthor << "/" << dateString << Qt::endl;
                overdueFile.close();
            }
            else
            {
                QMessageBox::warning(this, "Filing Problem", "Overdue file could not be opened");
            }

            QMessageBox::information(this, "Updated", "Overdue status is up to date");

        }
    }

    if (!hasOverdue)
    {
        QMessageBox::information(this, "Updated", "Overdue status is up to date");
    }

    file.close();

    //Now I can pull data from my updated overdue.txt file to display

    QFile overdueFile("overdue.txt");
    if(!overdueFile.open(QFile::ReadWrite | QFile::Text))
    {
        QMessageBox::warning(this, "Filing Problem", "File is not open");
        return;
    }

    //read file

    QStringList parts;
    QTextStream overdueIn(&overdueFile);

    bool memberOverdue = false;

    while (!overdueIn.atEnd())
    {
        QString line = overdueIn.readLine();
        parts = line.split("/");

        QString memberNameII = parts[0];
        QString bookTitleII = parts[1];
        QString bookAuthorII = parts[2];
        QString dateII =parts[3];

        //I only want to display a table if a book is overdue by the member that logged in

        if (memberNameII == loggedInUsername)
        {
            memberOverdue = true;

            //create the model and populate

            QStandardItemModel *model = new QStandardItemModel(1, parts.size(), this); // Use 1 row and parts.size() columns
            for (int col = 0; col < parts.size(); ++col)
            {
                model->setItem(0, col, new QStandardItem(parts.at(col))); // Set item at row 0 and column col
            }

            QTableView tableView;
            ui->viewOverdue->setModel(model); //call the ui model
            tableView.show();

        }
    }

    overdueFile.close();

    if (!memberOverdue)
    {
        //Set the message in the ui->preOrderView widget
        QStandardItemModel *messageModel = new QStandardItemModel(1, 1, this);
        messageModel->setItem(0, 0, new QStandardItem("You have no pre-orders at the moment"));
        ui->viewOverdue->setModel(messageModel);

        //resize the columns to fit the content
        ui->viewOverdue->resizeColumnsToContents();
    }

}

