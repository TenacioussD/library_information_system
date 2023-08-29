#include "memberlogin.h"

#include "ui_memberlogin.h"
#include <QMessageBox>
#include <QFile>

#include "memberhome.h"
#include "usermanager.h"

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
    QString enteredUsername = ui->lineEdit_username->text();          // Assigning variable username to match the text user input
    QString enteredPassword = ui->lineEdit_password->text();          // Assigning variable password to match the text user input

    //open file
    QFile file("memberships.txt");
    if (!file.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::warning(this, "Filing Problem", "File is not open");
        return;
    }

    //read file
    QTextStream in(&file);
    bool found = false;

    while (!in.atEnd())
    {
        QString line = in.readLine();
        QStringList parts = line.split(" ");

        QString password = parts[0];
        QString username = parts[1];
        QString lastName = parts[2];
        QString contactNum = parts[3];

    if(enteredUsername == username && enteredPassword == password)// if statement that checks whether the username and password match
    {
        found = true;
        UserManager::getInstance().setLoggedInUser(username); // Store the logged-in username using UserManager
        hide();
        MemberHome *memberhome =new MemberHome (this); // Pass username and name
        memberhome->show();
        break;
    }

    }

    file.close();

    if (!found)
    {
        QMessageBox::warning(this, "Login", "Incorrect username and password");       // Error message "Wrong username and password"
    }
}

