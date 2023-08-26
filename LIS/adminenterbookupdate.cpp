#include "adminenterbookupdate.h"
#include "ui_adminenterbookupdate.h"

#include "admineditbookdialog.h"
#include "adminhome.h"
#include "admincatalogue.h"
#include "adminmanagebooks.h"
#include "adminviewstatus.h"
#include "globalinstances.h"

#include <QString>
#include <QLineEdit>
#include <QPixmap>
#include <QLabel>
#include <QMessageBox>

AdminEnterBookUpdate::AdminEnterBookUpdate(const QString &title, const QString &author, const QPixmap &image, int bookIndex, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AdminEnterBookUpdate),
    currentBookIndex(bookIndex)             // Initalises the member variable for currentBookIndex
{
    ui->setupUi(this);

    ui->titleLabel->setText(title);         // Set the received title
    ui->authorLabel->setText(author);       // Set the received author
    ui->imageLabel->setPixmap(image);       // Set the received QPixmap as the image

    connect(this, &AdminEnterBookUpdate::bookDetailsUpdated, GlobalInstances::adminCatalogueInstance, &AdminCatalogue::updateBookDetails);  // connection for bookDetailsUpdated signal and updateBookDetails slot
}

AdminEnterBookUpdate::~AdminEnterBookUpdate()
{
    delete ui;
}

void AdminEnterBookUpdate::on_confirm_2_clicked()                  // Passes title and author to the dialog to be displayed
{
    QString title = ui->lineEditTitle->text();                     // Takes the information entered in the lineEdit by storing the text in a variable
    QString author = ui->lineEditAuthor->text();

    emit bookDetailsUpdated(currentBookIndex, title, author);      // Signal emitted for the update book information, uses the globaladmineditbook and passes the index, title and author

    qDebug() << "emitting: " << currentBookIndex << ", " << title << " and " << author;      // qDebug message to ensure the emit signal emits the correct details

    AdminEditBookDialog *admineditdialog = new AdminEditBookDialog (title, author);          // Passess the stored title and author to the dialog
    //connect(admineditdialog, &AdminEditBookDialog::bookEditCompleted, this, &AdminEnterBookUpdate::handleBookEditCompleted);     // connects the closing of enterbookupdate
    admineditdialog->show();
}

void AdminEnterBookUpdate::on_catalogue_clicked()
{
    hide();
    if (!GlobalInstances::adminCatalogueInstance) {
        GlobalInstances::adminCatalogueInstance = new AdminCatalogue(this);   // Creates a new instance of adminCatalogue if it hasn't been set up prior
    }
    GlobalInstances::adminCatalogueInstance->show();                          // Opens adminCatalogue page
}

void AdminEnterBookUpdate::handleBookEditCompleted()
{
    hide();       // Hides the AdminEnterBookUpdate window when connected
}

void AdminEnterBookUpdate::on_back_clicked()                 // When back button is clicked
{
    hide();                                                  // Hides previous window/page
    AdminHome *adminhome =new AdminHome (this);              // Opens admin home by creating a new instance of AdminHome with a variable of adminhome to hold a pointer
    adminhome->show();                                       // Using the show() method will display the AdminHome page
}

void AdminEnterBookUpdate::on_pushButton_2_clicked()         // When logout clicked
{
    QMessageBox::StandardButton reply = QMessageBox::question(this, "Logout", "Are you sure you want to logout?", QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes) {                         // If "Yes" application will quit
        QApplication::quit();
    }
}

void AdminEnterBookUpdate::on_manageBooks_clicked()          // When managebooks is clicked from the main menu
{
    hide();                                                  // Hides previous window/page
    AdminManageBooks *adminManage =new AdminManageBooks (this);      // Opens managebooks by creating a new instance of AdminManageBooks with a variable of adminManage to hold a pointer
    adminManage->show();
}

void AdminEnterBookUpdate::on_status_clicked()              // When status is clicked
{
    hide();                                                  // Hides previous window/page
    AdminViewStatus *adminStatus =new AdminViewStatus (this);      // Opens admin managebooks
    adminStatus->show();
}

