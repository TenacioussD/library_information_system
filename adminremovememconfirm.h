#ifndef ADMINREMOVEMEMCONFIRM_H
#define ADMINREMOVEMEMCONFIRM_H

#include "qboxlayout.h"
#include <QDialog>

class AdminCatalogue;
class AdminManageBooks;
class AdminRemoveMember;
class QVBoxLayout;

namespace Ui {
class AdminRemoveMemConfirm;
}

class AdminRemoveMemConfirm : public QDialog
{
    Q_OBJECT

public:
    explicit AdminRemoveMemConfirm(AdminRemoveMember *removeMemberInstance, QWidget *parent = nullptr);
    ~AdminRemoveMemConfirm();

private slots:
    void on_catalogue_clicked();

    void on_manageBooks_clicked();

    void on_pushButton_2_clicked();

    void on_back_clicked();

    void displayMember();

    void on_pushButton_clicked();

private:
    Ui::AdminRemoveMemConfirm *ui;
    AdminCatalogue *adminCatalogue;
    AdminManageBooks *adminManageBooks;
    AdminRemoveMember *adminRemoveMem, *removeMemInstance;
    QVBoxLayout *layout;
    QString lisNum; //Add a member to store the LIS Access Number
};

#endif // ADMINREMOVEMEMCONFIRM_H
