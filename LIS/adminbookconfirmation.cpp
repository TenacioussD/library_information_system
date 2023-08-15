#include "adminbookconfirmation.h"
#include "ui_adminbookconfirmation.h"

#include "adminhome.h"
#include "adminaddbook.h"

#include <QMessageBox>                                        // Declaring the use of QMessageBox to be able to use its files

AdminBookConfirmation::AdminBookConfirmation(const QString &title, const QString &author, QWidget *parent) :       // Constructor with parameters for QString title and author
    QMainWindow(parent),
    ui(new Ui::AdminBookConfirmation)
{
    ui->setupUi(this);

    ui->textEditOutputTitle->setPlainText(title);              // Display the text in TextEdit for title
    ui->textEditOutputAuthor->setPlainText(author);            // Display the text in TextEdit for author
}

AdminBookConfirmation::~AdminBookConfirmation()
{
    delete ui;
}

void AdminBookConfirmation::on_confirmDetails_clicked()
{

   QMessageBox::StandardButton ok = QMessageBox::information(this, "Thank you", "Thank you, the book has been added into the catalogue.", QMessageBox::Ok);

    if (ok == QMessageBox::Ok) {                           // When Ok button clicked it will redirect the user back to the home page with the use of an if statement

        hide();
        adminhome =new AdminHome(this);
        adminhome->show();                            // Opens admin home by creating a new instance of AdminHome with a variable of adminhome to hold a pointer

    }
}

void AdminBookConfirmation::on_back_2_clicked()
{
    hide();
    AdminAddBook *adminaddbook = new AdminAddBook (this);
    adminaddbook->show();
}

