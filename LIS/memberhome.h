#ifndef MEMBERHOME_H
#define MEMBERHOME_H

#include <QMainWindow>

namespace Ui {
class MemberHome;
}

class MemberHome : public QMainWindow
{
    Q_OBJECT

public:
    explicit MemberHome(QWidget *parent = nullptr);
    ~MemberHome();

private:
    Ui::MemberHome *ui;
};

#endif // MEMBERHOME_H
