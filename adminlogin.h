#ifndef ADMINLOGIN_H
#define ADMINLOGIN_H

#include <QMainWindow>
#include <QObject>

class AdminHome;

namespace Ui {
class AdminLogin;
}

class AdminLogin : public QMainWindow
{
    Q_OBJECT

public:
    explicit AdminLogin(QWidget *parent = nullptr);
    ~AdminLogin();

private slots:
    void on_pushButton_password_clicked();

    void on_pushButton_login_clicked();

private:
    Ui::AdminLogin *ui;
   //AdminHome *adminhome;
};

#endif // ADMINLOGIN_H
