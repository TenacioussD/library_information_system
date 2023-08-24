#ifndef ADMINEDITMEMBERDETAILS_H
#define ADMINEDITMEMBERDETAILS_H

#include "qboxlayout.h"
#include <QDialog>

class AdminCatalogue;
class AdminManageBooks;
class AdminAddMember;
class QVBoxLayout;
class AdminMembership;

namespace Ui {
class AdminEditMemberDetails;
}

class AdminEditMemberDetails : public QDialog
{
    Q_OBJECT

public:
    explicit AdminEditMemberDetails(const QString &firstName, const QString &lastName, const QString &contactNum, const QString &lisNum, QWidget *parent = nullptr);
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
    AdminMembership *adminMembership;
    QString lisNum; //Add a member to store the LIS Access Number
};

#endif // ADMINEDITMEMBERDETAILS_H
