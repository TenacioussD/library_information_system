#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include "adminlogin.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Login; }
QT_END_NAMESPACE

class Login : public QMainWindow
{
    Q_OBJECT

public:
    Login(QWidget *parent = nullptr);
    ~Login();


private slots:
    void on_pushButton_2_clicked();

private:
    Ui::Login *ui;
    AdminLogin *adminlogin;          // points to admin login page

};

#endif // LOGIN_H
