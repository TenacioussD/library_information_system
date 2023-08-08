#ifndef ADMINHOME_H
#define ADMINHOME_H

#include <QMainWindow>

namespace Ui {
class AdminHome;
}

class AdminHome : public QMainWindow
{
    Q_OBJECT

public:
    explicit AdminHome(QWidget *parent = nullptr);
    ~AdminHome();

private:
    Ui::AdminHome *ui;
};

#endif // ADMINHOME_H
