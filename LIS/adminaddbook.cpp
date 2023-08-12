#include "adminaddbook.h"
#include "ui_adminaddbook.h"
#include "adminhome.h"
#include "admincatalogue.h"

#include <QMessageBox>
#include <QString>


AdminAddBook::AdminAddBook(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AdminAddBook)
{
    ui->setupUi(this);
}

AdminAddBook::~AdminAddBook()
{
    delete ui;
}

void AdminAddBook::on_back_clicked()
{
    hide();
    adminhome =new class AdminHome;                           // Opens admin home
    adminhome->show();
}


void AdminAddBook::on_pushButton_2_clicked()                 // Logout button pressed
{
    QMessageBox::StandardButton reply = QMessageBox::question(this, "Logout", "Are you sure you want to logout?", QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes) {                          // If "Yes" application will quit
        QApplication::quit();
    }
}


void AdminAddBook::on_catalogue_clicked()
{
    hide();
    admincatalogue =new class AdminCatalogue;                 // Opens catalogue
    admincatalogue->show();
}


/*void AdminAddBook::on_confirm_clicked()
{
    QString bookTitle = ui->lineEdit_title->text();
    QString bookAuthor = ui->lineEdit_author->text();

    hide();
    addbookconfirmation =new class AddBookConfirmation;                 // Opens catalogue
    addbookconfirmation->show();

}*/



