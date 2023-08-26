#ifndef ADMINVIEWALLMEMBERS_H
#define ADMINVIEWALLMEMBERS_H

#include <QDialog>

class AdminCatalogue;
class AdminMembership;
class AdminManageBooks;

namespace Ui {
class AdminViewAllMembers;
}

class AdminViewAllMembers : public QDialog
{
    Q_OBJECT

public:
    explicit AdminViewAllMembers(QWidget *parent = nullptr);
    ~AdminViewAllMembers();

private slots:
    void on_catalogue_clicked();

    void on_manageBooks_clicked();

    void on_pushButton_2_clicked();

    void on_back_clicked();

private:
    Ui::AdminViewAllMembers *ui;
    AdminCatalogue *adminCatalogue;
    AdminManageBooks *adminManageBooks;
    AdminMembership *adminMembership;
};

#endif // ADMINVIEWALLMEMBERS_H
