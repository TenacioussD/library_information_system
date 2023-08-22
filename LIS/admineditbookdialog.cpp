#include "admineditbookdialog.h"
#include "ui_admineditbookdialog.h"

#include "adminhome.h"                             // Declaring relevant header files that are to be use in this class
#include "adminenterbookupdate.h"
#include "databasemanager.h"

#include <QMessageBox>
#include <QString>
#include <QLineEdit>


AdminEditBookDialog::AdminEditBookDialog(const QString &title, const QString &author, AdminEnterBookUpdate *enterBookUpdate, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminEditBookDialog),
    enterBookUpdate(enterBookUpdate)

{
    ui->setupUi(this);
    ui->lineEditTitle->setText(title);               // Display the text in lineEditTitle for title
    ui->lineEditAuthor->setText(author);             // Display the text in lineEditAuthor for author
}

AdminEditBookDialog::~AdminEditBookDialog()
{
    delete ui;
}

void AdminEditBookDialog::on_pushButton_clicked()       // Thank you pop-up when confirm button clicked
{
    QString newTitle = ui->lineEditTitle->text();        // Takes the text for liineEdit and stores it in the variable newTitle
    QString newAuthor = ui->lineEditAuthor->text();

   // bool success = DatabaseManager::updateBook(originalTitle, newTitle, newAuthor);

    QMessageBox::StandardButton ok = QMessageBox::information(this, "Thank you", "Thank you, the book has edited and added to the catalogue.", QMessageBox::Ok);

    if (ok == QMessageBox::Ok) {                        // When Ok button clicked it will redirect the user back to the home page with the use of an if statement
        hide();
        AdminHome *adminhome =new AdminHome(this);
        adminhome->show();                              // Opens admin home by creating a new instance of AdminHome with a variable of adminhome to hold a pointer
    }

    if(enterBookUpdate) {                               // Will close the previous window - AdminEnterBookUpdate
        enterBookUpdate->close();
    }
    accept();
}

void AdminEditBookDialog::on_cancelButton_clicked()     // Cancel button clicked
{
    reject();                                           // Hides the AdminEditBookDialog
}

