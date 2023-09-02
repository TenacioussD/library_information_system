#include "admineditbookdialog.h"
#include "ui_admineditbookdialog.h"

#include "adminhome.h"                             // Declaring relevant header files that are to be use in this class
#include "adminenterbookupdate.h"
#include "globalinstances.h"
#include "admincatalogue.h"

#include <QMessageBox>
#include <QString>
#include <QLineEdit>
#include <QDebug>


AdminEditBookDialog::AdminEditBookDialog(const QString &title, const QString &author, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminEditBookDialog)

{
    ui->setupUi(this);
    ui->lineEditTitle->setText(title);               // Display the text in lineEditTitle for title
    ui->lineEditAuthor->setText(author);             // Display the text in lineEditAuthor for author
}

AdminEditBookDialog::~AdminEditBookDialog()
{
    delete ui;
}

void AdminEditBookDialog::on_pushButton_clicked()    // Slot for when confirm button clicked - Thank you pop up
{

    QMessageBox* messageBox = new QMessageBox(this);                                                      // Creates new instance of QMessageBox
    messageBox->setWindowTitle("Thank you");                                                              // Sets the messagebox title
    messageBox->setText("Thank you, the book has been edited and added to the catalogue.");               // Thank you message
    messageBox->setStandardButtons(QMessageBox::Ok);                                                      // Sets a standard Ok button
    connect(messageBox, &QMessageBox::finished, this, &AdminEditBookDialog::handleMessageBoxFinished);    // Connect statement to make a connection to handleMessageBoxFinished slot.
    messageBox->exec();
}

void AdminEditBookDialog::on_cancelButton_clicked()             // Slot for when Cancel button clicked
{
    hide();                                                     // Hides the AdminEditBookDialog
}

void AdminEditBookDialog::handleMessageBoxFinished(int result)  // This had to be created to correctly close the dialog window - slot to handle closure of dialog
{
    if (result == QMessageBox::Ok)                              // If statement to check if the value == Ok
    {
        hide();                                                 // Closes the dialog after the user clicks "OK" in the message box
    }
}
