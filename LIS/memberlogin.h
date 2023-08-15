<<<<<<< HEAD
#ifndef MEMBERLOGIN_H
#define MEMBERLOGIN_H

#include <QMainWindow>
#include <QObject>
#include "memberhome.h"

namespace Ui {
class MemberLogin;
}

class MemberLogin : public QMainWindow
{
    Q_OBJECT

public:
    explicit MemberLogin(QWidget *parent = nullptr);
    ~MemberLogin();

private slots:
    void on_pushButton_password_clicked();

    void on_pushButton_login_clicked();

private:
    Ui::MemberLogin *ui;
    MemberHome *memberhome;
};

#endif // MEMBERLOGIN_H
=======
#ifndef MEMBERLOGIN_H
#define MEMBERLOGIN_H

#include <QMainWindow>
#include <QObject>
#include "memberhome.h"

namespace Ui {
class MemberLogin;
}

class MemberLogin : public QMainWindow
{
    Q_OBJECT

public:
    explicit MemberLogin(QWidget *parent = nullptr);
    ~MemberLogin();

private slots:
    void on_pushButton_password_clicked();

    void on_pushButton_login_clicked();

private:
    Ui::MemberLogin *ui;
    MemberHome *memberhome;
};

#endif // MEMBERLOGIN_H
>>>>>>> origin/master
