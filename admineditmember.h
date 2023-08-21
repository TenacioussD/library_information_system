#ifndef ADMINEDITMEMBER_H
#define ADMINEDITMEMBER_H

#include <QDialog>

class AdminCatalogue;
class AdminManageBooks;
class AdminMembership;

namespace Ui {
class AdminEditMember;
}

class AdminEditMember : public QDialog
{
    Q_OBJECT

public:
    explicit AdminEditMember(QWidget *parent = nullptr);
    ~AdminEditMember();

private slots:
    void on_catalogue_clicked();

    void on_manageBooks_clicked();

    void on_pushButton_2_clicked();

    void on_back_clicked();

private:
    Ui::AdminEditMember *ui;
    AdminCatalogue *adminCatalogue;
    AdminManageBooks *adminManageBooks;
    AdminMembership *adminMembership;
};

#endif // ADMINEDITMEMBER_H
