#include "memberlogin.h"

#include "ui_memberlogin.h"
#include <QMessageBox>

#include "memberhome.h"

MemberLogin::MemberLogin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MemberLogin)
{
    ui->setupUi(this);
}

MemberLogin::~MemberLogin()
{
    delete ui;
}

void MemberLogin::on_pushButton_password_clicked()             // Forget password button clicked
{
    QMessageBox::information(this, "Change Password", "Please contact an administrator to change your password", QMessageBox::Ok);
}


void MemberLogin::on_pushButton_login_clicked()                // Login button clicked, when login button clicked either display next page or error message
{
    QString username = ui->lineEdit_username->text();          // Assigning variable username to match the text user input
    QString password = ui->lineEdit_password->text();          // Assigning variable password to match the text user input

    if(username == "member" && password == "member") {         // if statement that checks whether the username and password match
        hide();
        MemberHome *memberhome =new MemberHome (this);         // Opens member dashboard if username and password match
        memberhome->show();
    }
    else {
        QMessageBox::warning(this, "Login", "Incorrect username and password");       // Error message "Wrong username and password"
    }
}

