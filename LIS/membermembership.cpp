#include "membermembership.h"
#include "ui_membermembership.h"
#include "QMessageBox"

MemberMembership::MemberMembership(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MemberMembership)
{
    ui->setupUi(this);
}

MemberMembership::~MemberMembership()
{
    delete ui;
}


//this will be our message box that pops up to inform user that a request for change of details has been made
void MemberMembership::on_request_button_clicked()
{
    QMessageBox::about (this, "My Title", "This is my custom message");
}

