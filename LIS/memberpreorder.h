#ifndef MEMBERPREORDER_H
#define MEMBERPREORDER_H

#include <QDialog>

//Foward declaration of MemberHome class
class MemberHome;
class MemberCatalogue;
class MemberMembership;
class MemberOverdue;

namespace Ui {
class MemberPreOrder;
}

class MemberPreOrder : public QDialog
{
    Q_OBJECT

public:
    explicit MemberPreOrder(QWidget *parent = nullptr);
    ~MemberPreOrder();

private slots:
    void on_back_clicked();

    void on_catalogue_clicked();

    void on_manageBooks_clicked();

    void on_membership_clicked();

    void on_logout_clicked();

    void viewPreOrder();

private:
    Ui::MemberPreOrder *ui;
    MemberHome *memberHome;
    MemberCatalogue *memberCatalogue;
    MemberMembership *memberMembership;
    MemberOverdue *memberOverdue;
    QString loggedInUsername;
};

#endif // MEMBERPREORDER_H
