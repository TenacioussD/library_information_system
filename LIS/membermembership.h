#ifndef MEMBERMEMBERSHIP_H
#define MEMBERMEMBERSHIP_H

#include <QDialog>

namespace Ui {
class MemberMembership;
}

class MemberMembership : public QDialog
{
    Q_OBJECT

public:
    explicit MemberMembership(QWidget *parent = nullptr);
    ~MemberMembership();

private:
    Ui::MemberMembership *ui;
};

#endif // MEMBERMEMBERSHIP_H
