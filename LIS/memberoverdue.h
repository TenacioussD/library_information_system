#ifndef MEMBEROVERDUE_H
#define MEMBEROVERDUE_H

#include <QDialog>

namespace Ui {
class MemberOverdue;
}

class MemberOverdue : public QDialog
{
    Q_OBJECT

public:
    explicit MemberOverdue(QWidget *parent = nullptr);
    ~MemberOverdue();

private:
    Ui::MemberOverdue *ui;
};

#endif // MEMBEROVERDUE_H
