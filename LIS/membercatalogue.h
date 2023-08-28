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

private:
    Ui::MemberCatalogue *ui;
    MemberHome *memberhome;                    // Creating the member variables
    MemberMembership *memberMembership;
    MemberPreOrder *memberPreOrder;
    MemberOverdue *memberOverdue;
};

#endif // MEMBERCATALOGUE_H
