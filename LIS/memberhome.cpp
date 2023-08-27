#include "memberhome.h"
#include "ui_memberhome.h"

#include "membercatalogue.h"
#include "memberoverdue.h"
#include "memberpreorder.h"
#include "membermembership.h"

#include <QMessageBox>

MemberHome::MemberHome(QWidget *parent, const QString &username, const QString &name) :
    QMainWindow(parent),
    ui(new Ui::MemberHome),
    loggedInUsername(username),
    loggedInName(name)
{
    ui->setupUi(this);

    // Display the logged-in user's name in the plainTextEdit widget
    displayName();
}

MemberHome::~MemberHome()
{
    delete ui;
}

void MemberHome::on_logout_clicked()              // Confirmation of logout
{
    QMessageBox::StandardButton reply = QMessageBox::question(this, "Logout", "Are you sure you want to logout?", QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes) {              // If "Yes" application will quit, else if no the messagebox will close
        QApplication::quit();
    }
}

void MemberHome::on_catalogue_2_clicked()
{
    hide();
    MemberCatalogue *membercatalogue =new MemberCatalogue;     // Creates a new instance of memberCatalogue
    membercatalogue->show();                                   // Opens the member catalogue
}

void MemberHome::on_overdue_clicked()
{
    hide();
    memberOverdue = new MemberOverdue;
    memberOverdue->show();
}

void MemberHome::on_booked_clicked()
{
    hide();
    memberPreOrder = new MemberPreOrder;
    memberPreOrder->show();
}

void MemberHome::on_membership_2_clicked()
{
    hide();
    memberMembership = new MemberMembership;
    memberMembership->show();
}

void MemberHome::displayName() //the name of the user that logged in
{
    //to the plainTextEdit called userName
    QString displayText = "Welcome, " + loggedInName + "!";
    ui->userName->setPlainText(displayText); // Assuming you have a widget named 'userName' in your UI
}
