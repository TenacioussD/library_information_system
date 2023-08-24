#ifndef ADMINVIEWSTATUSRETURN_H
#define ADMINVIEWSTATUSRETURN_H

#include <QMainWindow>

class AdminViewStatus;

namespace Ui {
class AdminViewStatusReturn;
}

class AdminViewStatusReturn : public QMainWindow
{
    Q_OBJECT

public:
    explicit AdminViewStatusReturn(QWidget *parent = nullptr);
    ~AdminViewStatusReturn();

private slots:
    //void on_catalogueButton_clicked();

    //void on_manageBooksButton_clicked();

    void on_status_clicked();

    //void on_membershipButton_clicked();

    void on_logout_clicked();

    //void on_back_clicked();

private:
    Ui::AdminViewStatusReturn *ui;
};

#endif // ADMINVIEWSTATUSRETURN_H
