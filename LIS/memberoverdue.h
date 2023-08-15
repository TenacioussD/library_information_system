#ifndef MEMBEROVERDUE_H
#define MEMBEROVERDUE_H
//I wan to show 'MemberOverdue' as a modal dialog, but it's created as a mainWindow, so I'll include QDialog
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
