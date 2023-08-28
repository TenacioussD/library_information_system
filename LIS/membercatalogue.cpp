#include "membercatalogue.h"
#include "ui_membercatalogue.h"

#include "memberhome.h"
#include "memberoverdue.h"
#include "memberpreorder.h"
#include "membermembership.h"

#include <QMessageBox>
#include <QString>
#include <QFile>
#include <QTextStream>
#include <QLineEdit>

MemberCatalogue::MemberCatalogue(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MemberCatalogue)
{
    ui->setupUi(this);
    //call function to save book information
    saveBookInfo();
}

MemberCatalogue::~MemberCatalogue()
{
    delete ui;
}

void MemberCatalogue::on_back_clicked()                    // When back button is clicked
{
    hide();
    MemberHome *memberhome =new MemberHome;                // Opens member home
    memberhome->show();
}

void MemberCatalogue::on_logout_clicked()                  // Login button pressed
{
    QMessageBox::StandardButton reply = QMessageBox::question(this, "Logout", "Are you sure you want to logout?", QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes) {                       // If "Yes" application will quit
        QApplication::quit();
    }
}

void MemberCatalogue::on_manageBooks_clicked()
{
    hide();
    MemberOverdue *memberOverdue =new MemberOverdue;                // Opens member home
    memberOverdue->show();
}

void MemberCatalogue::on_status_clicked()
{
    hide();
    MemberPreOrder *memberPreOrder = new MemberPreOrder;
    memberPreOrder->show();
}

void MemberCatalogue::on_membership_clicked()
{
    hide();
    MemberMembership *memberMembership =new MemberMembership;
    memberMembership->show();
}

void MemberCatalogue::saveBookInfo()
{
    //retrieve data from each created UI to store in attempt to create a database
    //add titles and authors into arays to make code shorted

    QString titles[]=
        {
            ui->titleOne->toPlainText(),
            ui->titleTwo->toPlainText(),
            ui->titleThree->toPlainText(),
            ui->titleFour->toPlainText(),
            ui->titleFive->toPlainText(),
            ui->titleSix->toPlainText(),
            ui->titleSeven->toPlainText(),
            ui->titleEight->toPlainText(),
            ui->titleNine->toPlainText(),
            ui->titleTen->toPlainText(),
            ui->titleEleven->toPlainText(),
            ui->titleTwelfe->toPlainText(),
        };

    QString authors[]=
        {
            ui->authorOne->toPlainText(),
            ui->titleTwo->toPlainText(),
            ui->titleThree->toPlainText(),
            ui->authorFour->toPlainText(),
            ui->titleFive->toPlainText(),
            ui->titleSix->toPlainText(),
            ui->titleSeven->toPlainText(),
            ui->titleEight->toPlainText(),
            ui->titleNine->toPlainText(),
            ui->titleTen->toPlainText(),
            ui->titleEleven->toPlainText(),
            ui->titleTwelfe->toPlainText(),
        };

    //create a file
    QFile file("catalogue.txt");
    //check if file is open
    if (!file.open(QFile::Append | QFile::Text))
    {
        QMessageBox::warning(this, "Filing Problem", "File is not open");
        return; //return if file open fails
    }
    //write book information to the file
    QTextStream out(&file);
    for (int i = 0; i < static_cast<int>(sizeof(titles) / sizeof(titles[0])); ++i)
    {
        //Iterate over arrays and write each pair to file
        out << titles[i] << " " << authors[i] << Qt::endl;
    }

    //close file
    file.close();
}
