#ifndef ADMINREMOVEMEMBER_H
#define ADMINREMOVEMEMBER_H

#include <QDialog>

class AdminCatalogue;
class AdminManageBooks;
class AdminMembership;
class AdminRemoveMemConfirm;

namespace Ui {
class AdminRemoveMember;
}

class AdminRemoveMember : public QDialog
{
    Q_OBJECT

public:
    explicit AdminRemoveMember(QWidget *parent = nullptr);
    ~AdminRemoveMember();

private slots:
    void on_catalogue_clicked();

    void on_manageBooks_clicked();

    void on_back_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::AdminRemoveMember *ui;
    AdminCatalogue *adminCatalogue;
    AdminManageBooks *adminManageBooks;
    AdminMembership *adminMembership;
    AdminRemoveMemConfirm *adminRemoveMemConfirm;
};

#endif // ADMINREMOVEMEMBER_H
