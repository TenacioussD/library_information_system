#ifndef MEMBERHOME_H
#define MEMBERHOME_H

#include <QMainWindow>
#include <QObject>
#include "membercatalogue.h"

namespace Ui {
class MemberHome;
}

class MemberHome : public QMainWindow
{
    Q_OBJECT

public:
    explicit MemberHome(QWidget *parent = nullptr);
    ~MemberHome();

private slots:
    void on_logout_clicked();

    void on_catalogue_clicked();

private:
    Ui::MemberHome *ui;
    MemberCatalogue *membercatalogue;
};

#endif // MEMBERHOME_H
