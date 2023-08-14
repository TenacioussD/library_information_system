#include "admineditbookdialog.h"
#include "ui_admineditbookdialog.h"

#include "adminhome.h"
#include "adminenterbookupdate.h"

#include <QMessageBox>
#include <QString>

AdminEditBookDialog::AdminEditBookDialog(const QString &title, const QString &author, AdminEnterBookUpdate *enterBookUpdate, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminEditBookDialog),
    enterBookUpdate(enterBookUpdate)              // Initialise the variable enterBookUpdate

{
    ui->setupUi(this);
    ui->listWidget->addItem(title);               // Display the text in listWidget for title
    ui->listWidget_1->addItem(author);            // Display the text in listWidget_1 for author
}

AdminEditBookDialog::~AdminEditBookDialog()
{
    delete ui;
}

void AdminEditBookDialog::on_pushButton_clicked()       // Thank you pop-up when confirm button clicked
{
    QMessageBox::StandardButton ok = QMessageBox::information(this, "Thank you", "Thank you, the book has edited and added to the catalogue.", QMessageBox::Ok);

    if (ok == QMessageBox::Ok) {                        // When Ok button clicked it will redirect the user back to the home page with the use of an if statement
        hide();
        AdminHome *adminhome =new AdminHome(this);
        adminhome->show();                              // Opens admin home by creating a new instance of AdminHome with a variable of adminhome to hold a pointer

        if(enterBookUpdate) {                           // Will close the previous window - AdminEnterBookUpdate
            enterBookUpdate->close();
        }
    }
}


void AdminEditBookDialog::on_cancelButton_clicked()     // Cancel button clicked
{
    hide();                                             // Hides the AdminEditBookDialog
}

