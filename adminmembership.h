#ifndef ADMINMEMBERSHIP_H
#define ADMINMEMBERSHIP_H

#include <QDialog>

namespace Ui {
class AdminMembership;
}

class AdminMembership : public QDialog
{
    Q_OBJECT

public:
    explicit AdminMembership(QWidget *parent = nullptr);
    ~AdminMembership();

private:
    Ui::AdminMembership *ui;
};

#endif // ADMINMEMBERSHIP_H
