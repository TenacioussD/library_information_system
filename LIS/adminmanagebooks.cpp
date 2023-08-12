#include "adminmanagebooks.h"
#include "ui_adminmanagebooks.h"
#include "adminaddbook.h"
#include "adminhome.h"
#include "admincatalogue.h"

#include <QMessageBox>


AdminManageBooks::AdminManageBooks(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AdminManageBooks)
{
    ui->setupUi(this);
}

AdminManageBooks::~AdminManageBooks()
{
    delete ui;
}


void AdminManageBooks::on_add_Book_clicked()
{
    hide();
    adminaddbook =new class AdminAddBook;                       // Opens admin add new book page
    adminaddbook->show();
}

void AdminManageBooks::on_catalogue_clicked()
{
    hide();
    admincatalogue =new class AdminCatalogue;                   // Opens catalogue page
    admincatalogue->show();
}

void AdminManageBooks::on_back_clicked()
{
    hide();
    adminhome =new class AdminHome;                           // Opens admin home
    adminhome->show();
}


void AdminManageBooks::on_pushButton_2_clicked()             // Logout button clicked
{
    QMessageBox::StandardButton reply = QMessageBox::question(this, "Logout", "Are you sure you want to logout?", QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes) {                         // If "Yes" application will quit
        QApplication::quit();
    }
}
