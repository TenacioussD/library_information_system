#include "admincatalogue.h"
#include "ui_admincatalogue.h"

#include "adminhome.h"                                  // Declaring relevant header files used in this class
#include "adminmanagebooks.h"
#include "admineditbookdialog.h"
#include "globalinstances.h"

#include <QMessageBox>
#include <QPlainTextEdit>
#include <QDebug>

AdminCatalogue::AdminCatalogue(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AdminCatalogue)

{
    ui->setupUi(this);

    connect(GlobalInstances::enterBookUpdateInstance, &AdminEnterBookUpdate::bookDetailsUpdated, this, &AdminCatalogue::updateBookDetails); // Establishing a connection between bookDetailsUpdated signal and updateBookDetails to pass the index, title and author to the catalogue
}

AdminCatalogue::~AdminCatalogue()
{
    delete ui;
}

void AdminCatalogue::on_back_clicked()                         // Back to home clicked
{
    hide();
    AdminHome *adminhome =new AdminHome;                       // Opens admin home
    adminhome->show();
}

void AdminCatalogue::on_logout_clicked()                       // Logout button clicked
{
    QMessageBox::StandardButton reply = QMessageBox::question(this, "Logout", "Are you sure you want to logout?", QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes) {                           // If "Yes" application will quit
        QApplication::quit();
    }
}

void AdminCatalogue::on_manageBooks_clicked()                   // Manage books button pressed
{
    hide();
    AdminManageBooks *adminmanagebooks =new AdminManageBooks;   // Opens admin manage books page
    adminmanagebooks->show();
}

void AdminCatalogue::updateBookDetails(int bookIndex, const QString &updatedTitle, const QString &updatedAuthor)   // Updates the catologue for book1
{
    qDebug() << "Receiving book details";              // Had to include this statement to ensure the signal was correctly connecting to this function

    if (bookIndex == 0)                                // if statement checks the index of the book being edited, if = to 0
    {
        qDebug() << "Entering book index 0";           // Debug message to ensure updateBookDetails receives the signal for book1

        ui->title1->setPlainText(updatedTitle);        // Updates the UI elements for title and author
        ui->author1->setPlainText(updatedAuthor);
    }

    if (bookIndex == 1)                                // if statement checks the index of the book being edited, if = to 1
    {
        qDebug() << "Entering book index 1";           // Debug message to ensure updateBookDetails receives the signal for book2

        ui->title2->setPlainText(updatedTitle);        // Updates the UI elements for title and author
        ui->author2->setPlainText(updatedAuthor);
    }

    if (bookIndex == 2)                                // if statement checks the index of the book being edited, if = to 2
    {
        qDebug() << "Entering book index 2";           // Debug message to ensure updateBookDetails receives the signal for book3

        ui->title3->setPlainText(updatedTitle);        // Updates the UI elements for title and author
        ui->author3->setPlainText(updatedAuthor);
    }


    if (bookIndex == 3)                                // if statement checks the index of the book being edited, if = to 3
    {
        qDebug() << "Entering book index 3";           // Debug message to ensure updateBookDetails receives the signal for book4

        ui->title4->setPlainText(updatedTitle);        // Updates the UI elements for title and author
        ui->author4->setPlainText(updatedAuthor);
    }
}
