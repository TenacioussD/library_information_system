#ifndef MEMBERMEMBERSHIP_H
#define MEMBERMEMBERSHIP_H

#include <QDialog>

//Foward declaration of MemberHome class
class MemberHome;
class MemberCatalogue;
class MemberOverdue;
class MemberPreOrder;

namespace Ui {
class MemberMembership;
}

class MemberMembership : public QDialog
{
    Q_OBJECT

public:
    explicit MemberMembership(QWidget *parent = nullptr);
    ~MemberMembership();

private slots:
    void on_back_clicked();

    void on_catalogue_clicked();

    void on_manageBooks_clicked();

    void on_status_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MemberMembership *ui;
    MemberHome *memberHome;
    MemberCatalogue *memberCatalogue;
    MemberPreOrder *memberPreOrder;
    MemberOverdue *memberOverdue;
};

#endif // MEMBERMEMBERSHIP_H
