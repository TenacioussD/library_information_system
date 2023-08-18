#ifndef ADMINMEMBERSHIP_H
#define ADMINMEMBERSHIP_H

#include <QDialog>

class AdminHome;
class AdminCatalogue;
class AdminManageBooks;

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

private:
    Ui::AdminMembership *ui;
    AdminHome *adminHome;
    AdminCatalogue *adminCatalogue;
    AdminManageBooks *adminManageBooks;
};

#endif // ADMINMEMBERSHIP_H
