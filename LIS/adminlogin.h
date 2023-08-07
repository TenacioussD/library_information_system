#ifndef ADMINLOGIN_H
#define ADMINLOGIN_H

#include <QMainWindow>
#include "adminhome.h"

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
    void on_pushButton_login_clicked();

    void on_pushButton_admin_clicked();

private:
    Ui::AdminLogin *ui;
    adminHome *adminhome;                 // pointer to the admin home page
};

#endif // ADMINLOGIN_H
