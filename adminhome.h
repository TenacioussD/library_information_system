#ifndef ADMINHOME_H
#define ADMINHOME_H

#include <QMainWindow>
#include <QObject>

class AdminCatalogue;
class AdminManageBooks;

// class AdminStatus;
// class AdminMembership;

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

private:
    Ui::AdminHome *ui;
    //AdminCatalogue *admincatalogue;
   // AdminManageBooks *adminmanagebooks;
    //AdminStatus *adminstatus;
    //AdminMembership *adminmembership;
};

#endif // ADMINHOME_H
