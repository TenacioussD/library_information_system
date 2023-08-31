#include "membercatalogue.h"
#include "ui_membercatalogue.h"

#include "memberhome.h"
#include "memberoverdue.h"
#include "memberpreorder.h"
#include "membermembership.h"
#include "UserManager.h"

#include <QMessageBox>
#include <QString>
#include <QFile>
#include <QTextStream>
#include <QLineEdit>
#include <QMessageBox>
#include <QDate>


MemberCatalogue::MemberCatalogue(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MemberCatalogue)
   {
    ui->setupUi(this);

    //Retrieve logged-in user from UserManager
    loggedInUsername = UserManager::getInstance().getLoggedInUser();

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

void MemberCatalogue::on_logout_clicked()                  // Logout button pressed
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

    //Read exsiting catalogue information
    QMap<QString, QString> existingCatalogue;
    QFile file("catalogue.txt");
    if (file.open(QFile::ReadOnly | QFile::Text))
    {
        QTextStream in(&file);
        while (!in.atEnd())
        {
            QString line = in.readLine();
            QStringList parts = line.split("/");
            if (parts.size() >= 2)
            {
                QString title = parts[0];
                QString author = parts[1];
                existingCatalogue.insert(title, author);
            }
        }
        file.close();
    }


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
            ui->authorTwo->toPlainText(),
            ui->authorThree->toPlainText(),
            ui->authorFour->toPlainText(),
            ui->authorFive->toPlainText(),
            ui->authorSix->toPlainText(),
            ui->authorSeven->toPlainText(),
            ui->authorEight->toPlainText(),
            ui->authorNine->toPlainText(),
            ui->authorTen->toPlainText(),
            ui->authorEleven->toPlainText(),
            ui->authorTwelfe->toPlainText(),
        };

    bool catalogueChanged = false;
    for (int i = 0; i < static_cast<int>(sizeof(titles) / sizeof(titles[0])); ++i)
    {
        if (!existingCatalogue.contains(titles[i]) || existingCatalogue[titles[i]] != authors[i])
        {
            catalogueChanged = true;
            existingCatalogue[titles[i]] = authors[i];
        }
    }

    // If changes were made, update the file
    if (catalogueChanged)
    {
        if (file.open(QFile::WriteOnly | QFile::Text))
        {
            QTextStream out(&file);
            for (const QString &title : existingCatalogue.keys())
            {
                out << title << "/" << existingCatalogue[title] << Qt::endl;
            }
            file.close();
        }
    }
}

// Add this function definition to your MemberCatalogue class
bool MemberCatalogue::isBookOrdered(const QString &title, const QString &author)
{
    QFile orderFile("order.txt");
    if (!orderFile.open(QFile::ReadOnly | QFile::Text))
    {
        return false; // Assume not ordered if order file cannot be opened
    }

    QTextStream in(&orderFile);

    while (!in.atEnd())
    {
        QString line = in.readLine();
        QStringList parts = line.split("/");

        QString bookTitle = parts[1];
        QString bookAuthor = parts[2];

        if (title == bookTitle && author == bookAuthor)
        {
            return true; // Book is already ordered
        }
    }

    return false; // Book is not ordered
}

//compare ui from form data to catalogue database
void MemberCatalogue::on_pushButton_clicked()
{
    //assign variable to match user inputs
    QString entreredTitle = ui->lineEdit_title->text();
    QString entreredAuthor = ui->lineEdit_author->text();

    //open file
    QFile file("catalogue.txt");
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
        QStringList parts = line.split("/");

        QString bookTitle = parts[0];
        QString bookAuthor = parts[1];

        if(entreredTitle == bookTitle && entreredAuthor == bookAuthor)
        {
            found = true;

            if (isBookOrdered(bookTitle, bookAuthor))
            {
                //if already booked in order.txt
                    QMessageBox::StandardButton reply = QMessageBox::question(this, "This book has been booked", "The book " + bookTitle + " by " + bookAuthor + " has alreay been booked. Would you like to prebook it?", QMessageBox::Yes | QMessageBox::No);

                    if (reply == QMessageBox::Yes)//if user would like to prebook book
                    {
                        //create file
                        QFile prebookFile("prebook.txt");
                        //check if file is open
                        if (!prebookFile.open(QFile::Append | QFile::Text))
                        {
                            QMessageBox::warning(this, "Filing Problem", "File is not open");
                            return; //return if file open fails
                        }

                        //write book information to the file
                        QTextStream out(&prebookFile);

                        //Iterate over arrays and write each pair to file
                        out << loggedInUsername << "/" << bookTitle << "/" << bookAuthor << "/" << QDate::currentDate().toString("yyyy-MM-dd") << Qt::endl;

                        //close file
                        prebookFile.close();

                        QMessageBox::warning(this, "Thank You!", "You have made a pre-booking on " + bookTitle + " by " + bookAuthor);
                    }
                    break;
            }
            else
            {
                //ordering logic
                    QMessageBox::StandardButton reply = QMessageBox::question(this, "Order", "Would you like to order the book " + bookTitle + " by " + bookAuthor + " ?", QMessageBox::Yes | QMessageBox::No);

                    if (reply == QMessageBox::Yes) // If "Yes" add book to order.txt
                    {
                        //create file
                        QFile orderFile("order.txt");
                        //check if file is open
                        if (!orderFile.open(QFile::Append | QFile::Text))
                        {
                            QMessageBox::warning(this, "Filing Problem", "File is not open");
                            return; //return if file open fails
                        }

                        //write book information to the file
                        QTextStream out(&orderFile);

                        //Iterate over arrays and write each pair to file
                        out << loggedInUsername << "/" << bookTitle << "/" << bookAuthor << "/" << QDate::currentDate().toString("yyyy-MM-dd") << Qt::endl;

                        //close file
                        orderFile.close();

                        QMessageBox::warning(this, "Thank You!", "You have ordered" + bookTitle + " by " + bookAuthor);
                    }
                    break;
            }
        }
    }
    //end of while loop

          file.close();

            if (!found)
            {
             QMessageBox::warning(this, "Wrong Information", "The title and author you have requested is not found in the catalogue, make sure you typed information from the availible catalogue.");
            }
 }

