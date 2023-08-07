#include "adminlogin.h"
#include "ui_adminlogin.h"
#include "adminhome.h"
#include <QMessageBox>

AdminLogin::AdminLogin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AdminLogin)
{
    ui->setupUi(this);
}

AdminLogin::~AdminLogin()
{
    delete ui;
}

void AdminLogin::on_pushButton_login_clicked()             // Login button
{
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();

    if(username == "admin" && password == "admin") {       // When login button clicked either display next page or error message
        hide();
        adminhome =new adminHome (this);                   // Opens admin dashboard
        adminhome->show();
    }
    else {
        QMessageBox::warning(this, "Login", "Incorrect username and password");
    }
}


void AdminLogin::on_pushButton_admin_clicked()             // Password button clicked
{
    QMessageBox::information(this, "Change Password", "Please contact another administrator to change your password", QMessageBox::Ok);
}

