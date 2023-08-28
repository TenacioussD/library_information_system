#ifndef MEMBERCATALOGUE_H
#define MEMBERCATALOGUE_H

#include <QMainWindow>

class MemberHome;
class MemberOverdue;          // Added the forward declarations
class MemberPreOrder;
class MemberMembership;

namespace Ui {
class MemberCatalogue;
}

class MemberCatalogue : public QMainWindow
{
    Q_OBJECT

public:
    explicit MemberCatalogue(QWidget *parent = nullptr);
    ~MemberCatalogue();

private slots:

    void on_back_clicked();

    void on_logout_clicked();

    void on_manageBooks_clicked();

    void on_status_clicked();

    void on_membership_clicked();

    void saveBookInfo(); //create a function that will be used to save books and titles

    void onBookClicked(); //this function will be when a book has been clicked on

private:
    Ui::MemberCatalogue *ui;
    MemberHome *memberhome;                    // Creating the member variables
    MemberMembership *memberMembership;
    MemberPreOrder *memberPreOrder;
    MemberOverdue *memberOverdue;
    QString titles[12]; //12 because there is 12 books in the ui
    QString authors[12];

protected:
    void mousePressEvent (QMouseEvent *event) override; //attempting to enable mouse tracking as QLabel does not have a clicked signal
};

#endif // MEMBERCATALOGUE_H
