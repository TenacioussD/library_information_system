#ifndef ADMINADDMEMBER_H
#define ADMINADDMEMBER_H

#include <QDialog>

class AdminMembership;
class AdminCatalogue;
class AdminManageBooks;

namespace Ui {
class AdminAddMember;
}

class AdminAddMember : public QDialog
{
    Q_OBJECT

public:
    explicit AdminAddMember(QWidget *parent = nullptr);
    ~AdminAddMember();

private slots:
    void on_back_clicked();

    void on_catalogue_clicked();

    void on_manageBooks_clicked();

private:
    Ui::AdminAddMember *ui;
    AdminMembership *adminMembership;
    AdminCatalogue *adminCatalogue;
    AdminManageBooks *adminManageBooks;
};

#endif // ADMINADDMEMBER_H
