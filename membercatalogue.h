#ifndef MEMBERCATALOGUE_H
#define MEMBERCATALOGUE_H

#include <QMainWindow>
class MemberHome;
class MemberOverdue;
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

private:
    Ui::MemberCatalogue *ui;
    MemberHome *memberhome;
    MemberOverdue *memberOverdue;              // class pointer to object MemberOverdue
    MemberPreOrder *memberPreOrder;
    MemberMembership *memberMembership;
};

#endif // MEMBERCATALOGUE_H
