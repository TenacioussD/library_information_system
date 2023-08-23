#include "adminenterbookupdate.h"
#include "ui_adminenterbookupdate.h"

#include "admineditbookdialog.h"
#include "globalinstances.h"

#include <QString>
#include <QLineEdit>
#include <QPixmap>
#include <QLabel>

AdminEnterBookUpdate::AdminEnterBookUpdate(const QString &title, const QString &author, const QPixmap &image, int bookIndex, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AdminEnterBookUpdate),
    currentBookIndex(bookIndex)
{
    ui->setupUi(this);

    connect(this, &AdminEnterBookUpdate::bookDetailsUpdated, GlobalInstances::adminCatalogueInstance, &AdminCatalogue::updateBookDetails);

    ui->titleLabel->setText(title);         // Set the received title
    ui->authorLabel->setText(author);       // Set the received author
    ui->imageLabel->setPixmap(image);       // Set the received QPixmap as the image
}

AdminEnterBookUpdate::~AdminEnterBookUpdate()
{
    delete ui;
}

void AdminEnterBookUpdate::on_confirm_2_clicked()              // Passes title and author to the dialog to be displayed
{
    QString title = ui->lineEditTitle->text();                 // Takes the information entered in the lineEdit by storing the text in a variable
    QString author = ui->lineEditAuthor->text();

    emit bookDetailsUpdated(currentBookIndex, title, author);      // Signal emitted for the update book information, uses the globaladmineditbook and passes the index, title and author

    qDebug() << "emitting: " << currentBookIndex << ", " << title << " and " << author;       // qDebug message to ensure the emit signal emits the correct details

    AdminEditBookDialog *admineditdialog = new AdminEditBookDialog (title, author);       // Passess the stored title and author to the dialog
    //connect(admineditdialog, &AdminEditBookDialog::bookEditCompleted, this, &AdminEnterBookUpdate::handleBookEditCompleted);     // connects the closing of enterbookupdate
    admineditdialog->show();

}


void AdminEnterBookUpdate::on_catalogue_clicked()
{
    hide();
    if (!GlobalInstances::adminCatalogueInstance) {
        GlobalInstances::adminCatalogueInstance = new AdminCatalogue(this);   // Assigns the globalAdminCatalogue pointer to the instance if it hasn't been set up prior
    }
    GlobalInstances::adminCatalogueInstance->show();

}

void AdminEnterBookUpdate::handleBookEditCompleted()
{
    hide();                            // Hides the AdminEnterBookUpdate window
}
