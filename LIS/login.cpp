#include "login.h"
#include "ui_login.h"

#include "adminlogin.h"                   // Include hheader files
#include "memberlogin.h"

Login::Login(QWidget *parent)
    : QMainWindow(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
}

Login::~Login()
{
    delete ui;
}

void Login::on_pushButton_2_clicked()                     // Admin login
{
    hide();
    AdminLogin *adminlogin =new AdminLogin(this);         // Opens admin login page
    adminlogin->show();
}

void Login::on_pushButton_3_clicked()                     // Member Login
{
    hide();
    MemberLogin *memberlogin = new MemberLogin(this);     // Opens member login page
    memberlogin->show();
}

