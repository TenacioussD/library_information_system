#ifndef ADMINMEMBERSHIP_H
#define ADMINMEMBERSHIP_H

#include <QDialog>

class AdminHome;
class AdminCatalogue;
class AdminManageBooks;
class AdminAddMember;
class AdminEditMember;
class AdminRemoveMember;
class AdminViewAllMembers;

namespace Ui {
class AdminMembership;
}

class AdminMembership : public QDialog
{
    Q_OBJECT

public:
    explicit AdminMembership(QWidget *parent = nullptr);
    ~AdminMembership();

private slots:
    void on_membership_clicked();

    void on_catalogue_clicked();

    void on_manageBooks_clicked();

    void on_add_Book_clicked();

    void on_back_clicked();

    void on_add_Book_3_clicked();

    void on_removeMem_clicked();

    void on_add_Book_2_clicked();

private:
    Ui::AdminMembership *ui;
    AdminHome *adminHome;
    AdminCatalogue *adminCatalogue;
    AdminManageBooks *adminManageBooks;
    AdminAddMember *adminAddMember;
    AdminEditMember *adminEditMember;
    AdminRemoveMember *adminRemoveMem;
    AdminViewAllMembers *adminViewAllMem;
};

#endif // ADMINMEMBERSHIP_H
