#ifndef ADMINOVERDUE_H
#define ADMINOVERDUE_H

#include <QMainWindow>

namespace Ui {
class AdminOverdue;
}

class AdminOverdue : public QMainWindow
{
    Q_OBJECT

public:
    explicit AdminOverdue(QWidget *parent = nullptr);
    ~AdminOverdue();

private slots:
   // void on_catalogueButton_clicked();

    //void on_manageBooksButton_clicked();

    void on_adminviewstatus_clicked();

   // void on_membershipButton_clicked();

    void on_logout_clicked();

    //void on_back_clicked();

private:
    Ui::AdminOverdue *ui;
};

#endif // ADMINOVERDUE_H
