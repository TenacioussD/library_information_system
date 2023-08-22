#include "adminenterbookupdate.h"
#include "ui_adminenterbookupdate.h"

#include "admineditbookdialog.h"

#include <QString>
#include <QLineEdit>
#include <QPixmap>
#include <QLabel>

AdminEnterBookUpdate::AdminEnterBookUpdate(const QString &title, const QString &author, const QPixmap &image,QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AdminEnterBookUpdate)
{
    ui->setupUi(this);

    connect(this, &AdminEnterBookUpdate::editBookClicked, this, &AdminEnterBookUpdate::handleEditBookClicked);
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

    AdminEditBookDialog *admineditdialog = new AdminEditBookDialog (title, author, this);       // Passess the stored title and author to the dialog
    admineditdialog->show();
}

void AdminEnterBookUpdate::handleEditBookClicked(const QString &title, const QString &author, const QPixmap &image) {

    ui->titleLabel->setText(title);                       // Displays the title
    ui->authorLabel->setText(author);
    ui->imageLabel->setPixmap(image);
}
