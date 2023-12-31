#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include <QObject>

class AdminLogin;                    // Forward declarations
class MemberLogin;

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

    void on_pushButton_3_clicked();

private:
    Ui::Login *ui;
};


#endif // LOGIN_H
