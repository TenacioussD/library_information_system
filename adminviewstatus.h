#ifndef ADMINVIEWSTATUS_H
#define ADMINVIEWSTATUS_H

#include <QMainWindow>

class AdminOverdue;    // You need to make sure you are using this to connect the pages in the header files
class AdminPreOrderedBooks;
class AdminViewStatus;
class AdminViewStatusReturn;

namespace Ui {
class AdminViewStatus;
}

class AdminViewStatus : public QMainWindow
{
    Q_OBJECT

public:
    explicit AdminViewStatus(QWidget *parent = nullptr);
    ~AdminViewStatus();

private slots:
    //void on_catalogue_clicked();

    //void on_manageBooks_clicked();

    //void on_membership_clicked();

    void on_logout_clicked();

    //void on_back_clicked();

    void on_adminoverdue_clicked();

    void on_adminpreorderedbooks_clicked();

    void on_adminreturn_clicked();


private:
    Ui::AdminViewStatus *ui;
};

#endif // ADMINVIEWSTATUS_H
