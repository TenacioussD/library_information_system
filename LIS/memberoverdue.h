#ifndef MEMBEROVERDUE_H
#define MEMBEROVERDUE_H

#include <QMainWindow>

namespace Ui {
class MemberOverdue;
}

class MemberOverdue : public QMainWindow
{
    Q_OBJECT

public:
    explicit MemberOverdue(QWidget *parent = nullptr);
    ~MemberOverdue();

private:
    Ui::MemberOverdue *ui;
};

#endif // MEMBEROVERDUE_H
