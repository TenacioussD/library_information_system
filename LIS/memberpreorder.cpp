#include "memberpreorder.h"
#include "ui_memberpreorder.h"
#include "memberhome.h"
#include "membercatalogue.h"
#include "membermembership.h"
#include "memberoverdue.h"
#include "UserManager.h"

#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QTableView>
#include <QStandardItemModel>

MemberPreOrder::MemberPreOrder(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MemberPreOrder)
{
    ui->setupUi(this);

    //Retrieve logged-in user from UserManager
    loggedInUsername = UserManager::getInstance().getLoggedInUser();

    //call view all pre-orders function
    viewPreOrder();
}

MemberPreOrder::~MemberPreOrder()
{
    delete ui;
}

void MemberPreOrder::on_back_clicked()
{
    hide();
    memberHome = new MemberHome(this);
    memberHome->show();
}

void MemberPreOrder::on_catalogue_clicked()
{
    hide();
    memberCatalogue = new MemberCatalogue(this);
    memberCatalogue->show();
}

void MemberPreOrder::on_manageBooks_clicked()
{
    hide();
    memberOverdue = new MemberOverdue(this);
    memberOverdue->show();
}

void MemberPreOrder::on_membership_clicked()
{
    hide();
    memberMembership = new MemberMembership(this);
    memberMembership->show();
}

void MemberPreOrder::on_logout_clicked()
{
    QMessageBox::StandardButton reply = QMessageBox::question(this, "Logout", "Are you sure you want to logout?", QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes)
    {                    // If "Yes" application will quit
        QApplication::quit();
    }
}

//create view pre-order table

void MemberPreOrder::viewPreOrder()
{
    QFile file("prebook.txt");
    //check if file is open
    if(!file.open(QFile::ReadWrite | QFile::Text))
    {
        QMessageBox::warning(this, "Filing Problem", "File is not open");
        return;
    }

    //read file

    QStringList data;
    QTextStream in(&file);

    bool hasPreOrders = false;

    while (!in.atEnd())
    {
        QString line = in.readLine();
        data = line.split("/");

        QString memberName = data[0];
        QString bookTitle = data[1];
        QString bookAuthor = data[2];
        QString date =data[3];

       //I only want to display a table if a book was pre-ordered by the member that logged in
        if (memberName == loggedInUsername)
        {
            hasPreOrders = true;

            //create the model and populate it

            QStandardItemModel *model = new QStandardItemModel(1, data.size(), this); // Use 1 row and parts.size() columns
            for (int col = 0; col < data.size(); ++col)
            {
                model->setItem(0, col, new QStandardItem(data.at(col))); // Set item at row 0 and column col
            }

            QTableView tableView;
            ui->preOrderView->setModel(model); //call the ui model
            tableView.show();
        }
    }
        file.close();

    if (!hasPreOrders)
        {
          //Set the message in the ui->preOrderView widget
        QStandardItemModel *messageModel = new QStandardItemModel(1, 1, this);
        messageModel->setItem(0, 0, new QStandardItem("You have no pre-orders at the moment"));
        ui->preOrderView->setModel(messageModel);

        //resize the columns to fit the content
        ui->preOrderView->resizeColumnsToContents();
        }
}
