#include "login.h"
#include "adminlogin.h"
#include "adminhome.h"
#include "./ui_login.h"
#include <QDebug>
#include <QMessageBox>

Login::Login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Login)
{
    ui->setupUi(this);
}

Login::~Login()
{
    delete ui;
}


/*void Login::on_pushButton_clicked()
{
    qDebug() << "User clicked on a button";
    QMessageBox::information(this, "Message", "You clicked on the button", QMessageBox::Ok);
}*/



void Login::on_pushButton_2_clicked()  // To show the adminlogin page (modaless approach) opens in new window
{
    hide();
    adminlogin =new AdminLogin (this);  // open admin login page
    adminlogin->show();
}

