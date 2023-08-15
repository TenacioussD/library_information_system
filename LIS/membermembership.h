#ifndef MEMBERMEMBERSHIP_H
#define MEMBERMEMBERSHIP_H

#include <QMainWindow>

namespace Ui {
class MemberMembership;
}

class MemberMembership : public QMainWindow
{
    Q_OBJECT

public:
    explicit MemberMembership(QWidget *parent = nullptr);
    ~MemberMembership();

private slots:
    void on_request_button_clicked();

private:
    Ui::MemberMembership *ui;
};

#endif // MEMBERMEMBERSHIP_H
