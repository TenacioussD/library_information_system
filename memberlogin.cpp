#include "memberlogin.h"
#include "memberhome.h"
#include "ui_memberlogin.h"
#include <QMessageBox>

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

void MemberLogin::on_pushButton_password_clicked()      // Forget password button clicked
{
    QMessageBox::information(this, "Change Password", "Please contact administrator to change your password", QMessageBox::Ok);
}


void MemberLogin::on_pushButton_login_clicked()
{
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();

    if(username == "member" && password == "member") {          // When login button clicked either display next page or error message
        hide();
        MemberHome *memberhome =new MemberHome (this);                    // Opens member dashboard
        memberhome->show();
    }
    else {
        QMessageBox::warning(this, "Login", "Incorrect username and password");       // Error message "Wrong username and password"
    }
}

