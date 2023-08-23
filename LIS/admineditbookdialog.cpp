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


AdminEditBookDialog::AdminEditBookDialog(int index, const QString &title, const QString &author, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminEditBookDialog),
    bookIndex(index)

{
    ui->setupUi(this);
    ui->lineEditTitle->setText(title);               // Display the text in lineEditTitle for title
    ui->lineEditAuthor->setText(author);             // Display the text in lineEditAuthor for author
}

AdminEditBookDialog::~AdminEditBookDialog()
{
    delete ui;
}

void AdminEditBookDialog::on_pushButton_clicked()            // Thank you pop-up when confirm button clicked
{
    QString updatedTitle = ui->lineEditTitle->text();        // Takes the text for liineEdit and stores it in the variable newTitle
    QString updatedAuthor = ui->lineEditAuthor->text();

    emit globalAdminEditBookDialog->bookDetailsUpdated(bookIndex, updatedTitle, updatedAuthor);      // Signal emitted for the update book information, uses the globaladmineditbook and passes the index, title and author

    qDebug() << "emitting: " << bookIndex << ", " << updatedTitle << " and " << updatedAuthor;       // qDebug message to ensure the emit signal emits the correct details

    QMessageBox* messageBox = new QMessageBox(this);
    messageBox->setWindowTitle("Thank you");
    messageBox->setText("Thank you, the book has been edited and added to the catalogue.");
    messageBox->setStandardButtons(QMessageBox::Ok);
    connect(messageBox, &QMessageBox::finished, this, &AdminEditBookDialog::handleMessageBoxFinished);
    messageBox->exec();


    //QMessageBox::information(this, "Thank you", "Thank you, the book has edited and added to the catalogue.", QMessageBox::Ok);


   //accept();
    //emit bookEditCompleted();

   // close();

   // AdminHome *adminhome =new AdminHome(this);
    //adminhome->show();                              // Opens admin home by creating a new instance of AdminHome with a variable of adminhome to hold a pointer

}

void AdminEditBookDialog::on_cancelButton_clicked()             // Cancel button clicked
{
    hide();                                                     // Hides the AdminEditBookDialog
}

void AdminEditBookDialog::handleMessageBoxFinished(int result)  // This had to be created to correctly close the dialog window
{
    if (result == QMessageBox::Ok)
    {
        accept();                                               // Closes the dialog after the user clicks "OK" in the message box
    }
}
