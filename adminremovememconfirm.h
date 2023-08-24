#ifndef ADMINREMOVEMEMCONFIRM_H
#define ADMINREMOVEMEMCONFIRM_H

#include <QDialog>

class AdminCatalogue;
class AdminManageBooks;
class AdminRemoveMember;

namespace Ui {
class AdminRemoveMemConfirm;
}

class AdminRemoveMemConfirm : public QDialog
{
    Q_OBJECT

public:
    explicit AdminRemoveMemConfirm(QWidget *parent = nullptr);
    ~AdminRemoveMemConfirm();

private slots:
    void on_catalogue_clicked();

    void on_manageBooks_clicked();

    void on_pushButton_2_clicked();

    void on_back_clicked();

private:
    Ui::AdminRemoveMemConfirm *ui;
    AdminCatalogue *adminCatalogue;
    AdminManageBooks *adminManageBooks;
    AdminRemoveMember *adminRemoveMem;
};

#endif // ADMINREMOVEMEMCONFIRM_H
