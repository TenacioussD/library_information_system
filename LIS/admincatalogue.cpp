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

    connect(GlobalInstances::enterBookUpdateInstance, &AdminEnterBookUpdate::bookDetailsUpdated, this, &AdminCatalogue::updateBookDetails);
}

AdminCatalogue::~AdminCatalogue()
{
    delete ui;
}


void AdminCatalogue::on_back_clicked()                        // Back to home clicked
{
    hide();
    AdminHome *adminhome =new AdminHome;                      // Opens admin home
    adminhome->show();
}

void AdminCatalogue::on_logout_clicked()                      // Logout button clicked
{
    QMessageBox::StandardButton reply = QMessageBox::question(this, "Logout", "Are you sure you want to logout?", QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes) {                          // If "Yes" application will quit
        QApplication::quit();
    }
}

void AdminCatalogue::on_manageBooks_clicked()                 // Manage books button pressed
{
    hide();
    AdminManageBooks *adminmanagebooks =new AdminManageBooks;      // Opens admin manage books page
    adminmanagebooks->show();
}

void AdminCatalogue::updateBookDetails(int bookIndex, const QString &updatedTitle, const QString &updatedAuthor)   // Updates the catologue for book1
{
    qDebug() << "Receiving book details";

    if (bookIndex == 0)                                // if statement checks the index of the book being edited
    {
        qDebug() << "Entering book index 0";

        ui->title1->setPlainText(updatedTitle);        // Updates the UI elements for title and author
        ui->author1->setPlainText(updatedAuthor);
    }
}
