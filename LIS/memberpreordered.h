#ifndef MEMBERPREORDERED_H
#define MEMBERPREORDERED_H

#include <QMainWindow>

namespace Ui {
class MemberPreOrdered;
}

class MemberPreOrdered : public QMainWindow
{
    Q_OBJECT

public:
    explicit MemberPreOrdered(QWidget *parent = nullptr);
    ~MemberPreOrdered();

private:
    Ui::MemberPreOrdered *ui;
};

#endif // MEMBERPREORDERED_H
