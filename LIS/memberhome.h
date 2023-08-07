#ifndef MEMBERHOME_H
#define MEMBERHOME_H

#include <QMainWindow>

namespace Ui {
class memberHome;
}

class memberHome : public QMainWindow
{
    Q_OBJECT

public:
    explicit memberHome(QWidget *parent = nullptr);
    ~memberHome();

private:
    Ui::memberHome *ui;
};

#endif // MEMBERHOME_H
