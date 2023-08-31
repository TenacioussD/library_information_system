#include "adminviewallmembers.h"
#include "ui_adminviewallmembers.h"
#include "admincatalogue.h"
#include "adminmanagebooks.h"
#include "adminmembership.h"

#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QTableView>
#include <QStandardItemModel>

AdminViewAllMembers::AdminViewAllMembers(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminViewAllMembers)
{
    ui->setupUi(this);

    //call view all members function
    viewAllMembers();
}

AdminViewAllMembers::~AdminViewAllMembers()
{
    delete ui;
}

void AdminViewAllMembers::on_catalogue_clicked()
{
    hide();
    adminCatalogue = new AdminCatalogue(this);
    adminCatalogue->show();
}

void AdminViewAllMembers::on_manageBooks_clicked()
{
    hide();
    adminManageBooks = new AdminManageBooks(this);
    adminManageBooks->show();
}

void AdminViewAllMembers::on_pushButton_2_clicked() //logg out button
{
    QMessageBox::StandardButton reply = QMessageBox::question(this, "Logout", "Are you sure you want to logout?", QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes) {                          // If "Yes" application will quit
        QApplication::quit();

    }
}

void AdminViewAllMembers::on_back_clicked() //back button
{
    hide();
    adminMembership = new AdminMembership(this);
    adminMembership->show();
}

void AdminViewAllMembers::viewAllMembers()
{
    QFile file("memberships.txt");
    if(!file.open(QFile::ReadWrite | QFile::Text))
    {
        QMessageBox::warning(this, "Filing Problem", "File is not open");
        return;
    }

    //read file

    QStringList data;
    QTextStream in(&file);
    while (!in.atEnd())
    {
        QString line = in.readLine();
        data.append(line);
    }
    file.close();

    //create the model and populate it

    QStandardItemModel *model = new QStandardItemModel(data.size(), 4, this);
    for (int row = 0; row < data.size(); ++row)
    {
        QStringList fields = data.at(row).split(" ");
        for (int col = 0; col < fields.size(); ++col)
        {
            QStandardItem *item = new QStandardItem(fields.at(col));
            QFont font("Segoe UI", 9, QFont::Normal); // Create QFont instance with Segoe UI, size 9, and normal style
            item->setFont(font); // Apply the font to the item
            model->setItem(row, col, item); // Set the item in the model
        }
    }

    ui->tableView->setModel(model);
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch); // Set columns to stretch to fit

    // Hide row and column headers
    ui->tableView->verticalHeader()->setVisible(false);
    ui->tableView->horizontalHeader()->setVisible(false);
}
