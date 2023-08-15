#ifndef MEMBEROVERDUE_H
#define MEMBEROVERDUE_H

#include <QDialog>
#include "memberhome.h"

namespace Ui {
class MemberOverdue;
}

class MemberOverdue : public QDialog
{
    Q_OBJECT

public:
    explicit MemberOverdue(QWidget *parent = nullptr);
    ~MemberOverdue();

private slots:
    void on_back_clicked();

private:
    Ui::MemberOverdue *ui;
    MemberHome *memberHome;
};

#endif // MEMBEROVERDUE_H
