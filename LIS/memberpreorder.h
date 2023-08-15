#ifndef MEMBERPREORDER_H
#define MEMBERPREORDER_H

#include <QDialog>

namespace Ui {
class MemberPreOrder;
}

class MemberPreOrder : public QDialog
{
    Q_OBJECT

public:
    explicit MemberPreOrder(QWidget *parent = nullptr);
    ~MemberPreOrder();

private:
    Ui::MemberPreOrder *ui;
};

#endif // MEMBERPREORDER_H
