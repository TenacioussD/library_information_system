#ifndef MEMBERLOGIN_H
#define MEMBERLOGIN_H

#include <QMainWindow>
#include "memberhome.h"

namespace Ui {
class memberLogin;
}

class memberLogin : public QMainWindow
{
    Q_OBJECT

public:
    explicit memberLogin(QWidget *parent = nullptr);
    ~memberLogin();

private slots:

    void on_pushButton_password_clicked();

    void on_pushButton_login_clicked();

private:
    Ui::memberLogin *ui;
    memberHome *memberhome;                 // pointer to the member home page
};

#endif // MEMBERLOGIN_H
