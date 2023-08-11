#include "adminmanagebooks.h"
#include "ui_adminmanagebooks.h"
#include "adminaddbook.h"

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

void AdminManageBooks::on_pushButton_clicked()     // Logout button clicked
{
    QMessageBox::StandardButton reply = QMessageBox::question(this, "Logout", "Are you sure you want to logout?", QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes) {         // If "Yes" application will quit
        QApplication::quit();
    }
}

void AdminManageBooks::on_add_Book_clicked()
{
    hide();
    adminaddbook =new class AdminAddBook;                       // Opens admin catalogue
    adminaddbook->show();
}

