#ifndef ADMINEDITMEMBERDETAILS_H
#define ADMINEDITMEMBERDETAILS_H

#include "qboxlayout.h"
#include <QDialog>

class AdminCatalogue;
class AdminManageBooks;
class AdminAddMember;
class QVBoxLayout;

namespace Ui {
class AdminEditMemberDetails;
}

class AdminEditMemberDetails : public QDialog
{
    Q_OBJECT

public:
    explicit AdminEditMemberDetails(QWidget *parent = nullptr);
    ~AdminEditMemberDetails();

private slots:
    void on_catalogue_clicked();

    void on_manageBooks_clicked();

    void on_pushButton_2_clicked();

    void on_back_clicked();

    void displayMember();

    void on_pushButton_clicked();

private:
    Ui::AdminEditMemberDetails *ui;
    AdminCatalogue *adminCatalogue;
    AdminManageBooks *adminManageBooks;
    AdminAddMember *adminAddMember;
    QVBoxLayout *layout;
};

#endif // ADMINEDITMEMBERDETAILS_H
