#ifndef ADMINHOME_H
#define ADMINHOME_H

#include <QMainWindow>
#include <QObject>

class AdminCatalogue;                       // Forward Declarations
class AdminManageBooks;
class AdminEnterBookUpdate;
class AdminViewStatus;
class AdminMembership;

namespace Ui {
class AdminHome;
}

class AdminHome : public QMainWindow
{
    Q_OBJECT

public:
    explicit AdminHome(QWidget *parent = nullptr);
    ~AdminHome();


private slots:
    void on_pushButton_clicked();

    void on_catalogue_clicked();

    void on_manageBooks_clicked();

    void on_status_clicked();

    void on_membership_clicked();

    void memberCount(); //display amount members

    void overdueCount(); //display overdue books

    void booksAmount(); //display amount books

private:
    Ui::AdminHome *ui;
};

#endif // ADMINHOME_H
