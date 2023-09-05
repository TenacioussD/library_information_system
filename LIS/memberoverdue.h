#ifndef MEMBEROVERDUE_H
#define MEMBEROVERDUE_H

#include <QDialog>

//Foward declaration of MemberHome class
class MemberHome;
class MemberCatalogue;
class MemberPreOrder;
class MemberMembership;


namespace Ui
{
class MemberOverdue;
}

class MemberOverdue : public QDialog
{
    Q_OBJECT

public:
    explicit MemberOverdue(QWidget *parent = nullptr);
    ~MemberOverdue();

private slots:
    void on_back_clicked();

    void on_catalogue_clicked();

    void on_status_clicked();

    void on_membership_clicked();

    void on_logout_clicked();

    void viewOverdue();

private:
    Ui::MemberOverdue *ui;
    MemberHome *memberHome;
    MemberCatalogue *memberCatalogue;
    MemberMembership *memberMembership;
    MemberPreOrder *memberPreOrder;
    QString loggedInUsername;
    QSet<QString> addedEntries;
   };

#endif // MEMBEROVERDUE_H
