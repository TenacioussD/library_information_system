#include "memberlogin.h"
#include "ui_memberlogin.h"
#include "memberhome.h"
#include <QMessageBox>

memberLogin::memberLogin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::memberLogin)
{
    ui->setupUi(this);
}

memberLogin::~memberLogin()
{
    delete ui;
}


void memberLogin::on_pushButton_password_clicked()            // Change password button clicked
{
    QMessageBox::information(this, "Change Password", "Please contact administrator to change your password", QMessageBox::Ok);
}


void memberLogin::on_pushButton_login_clicked()
{
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();

    if(username == "member" && password == "member") {       // When login button clicked either display next page or error message
        hide();
        memberhome =new memberHome (this);                   // Opens member dashboard
        memberhome->show();
    }
    else {
        QMessageBox::warning(this, "Login", "Incorrect username and password");
    }
}

