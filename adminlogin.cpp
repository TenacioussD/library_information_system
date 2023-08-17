#include "adminlogin.h"
#include "ui_adminlogin.h"

#include <QMessageBox>
#include "adminhome.h"

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

void AdminLogin::on_pushButton_password_clicked()         // Forgot password button
{
     QMessageBox::information(this, "Change Password", "Please contact another administrator to change your password", QMessageBox::Ok);
}


void AdminLogin::on_pushButton_login_clicked()            // Login button clicked
{
     QString username = ui->lineEdit_username->text();
     QString password = ui->lineEdit_password->text();

     if(username == "admin" && password == "admin") {       // When login button clicked either display next page or error message
         hide();
         AdminHome *adminhome =new AdminHome (this);                   // Opens admin dashboard
         adminhome->show();
     }
     else {
         QMessageBox::warning(this, "Login", "Incorrect username and password");
     }
}

