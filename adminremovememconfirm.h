#ifndef ADMINREMOVEMEMCONFIRM_H
#define ADMINREMOVEMEMCONFIRM_H

#include <QDialog>

namespace Ui {
class AdminRemoveMemConfirm;
}

class AdminRemoveMemConfirm : public QDialog
{
    Q_OBJECT

public:
    explicit AdminRemoveMemConfirm(QWidget *parent = nullptr);
    ~AdminRemoveMemConfirm();

private:
    Ui::AdminRemoveMemConfirm *ui;
};

#endif // ADMINREMOVEMEMCONFIRM_H
