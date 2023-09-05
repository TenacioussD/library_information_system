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

void AdminLogin::on_pushButton_password_clicked()         // Slot for when Forgot password button is clicked
{
     QMessageBox::information(this, "Change Password", "Please contact another administrator to change your password", QMessageBox::Ok);   // Message box to inform user to contact admin to change password
}


void AdminLogin::on_pushButton_login_clicked()            // Slot for when Login button clicked, when login button clicked either display next page or error message
{
     QString username = ui->lineEdit_username->text();    // Assigning variable username to match the text user input
     QString password = ui->lineEdit_password->text();    // Assigning variable password to match the text user input

     if(username == "admin" && password == "admin")       // if statement that checks whether the username and password match
     {
         hide();                                          // Hides current window
         AdminHome *adminhome =new AdminHome (this);      // Creates new instance of AdminHome and opens admin dashboard if username and password match
         adminhome->show();
     }

     else                                                 // else block of code will run if the username and password don't match
     {
         QMessageBox::warning(this, "Login", "Incorrect username and password");      // Incorrect username or password warning if entered incorrectly
     }
}

