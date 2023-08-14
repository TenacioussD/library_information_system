#include "adminenterbookupdate.h"
#include "ui_adminenterbookupdate.h"

#include <QListWidget>
#include <QString>
#include "admineditbookdialog.h"

AdminEnterBookUpdate::AdminEnterBookUpdate(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AdminEnterBookUpdate)
{
    ui->setupUi(this);
}

AdminEnterBookUpdate::~AdminEnterBookUpdate()
{
    delete ui;
}

void AdminEnterBookUpdate::on_confirm_2_clicked()
{
    QString title = ui->lineEdit_title->text();
    QString author = ui->lineEdit_author_2->text();

    AdminEditBookDialog *admineditdialog = new AdminEditBookDialog (title, author, this);
    admineditdialog->show();
}
