#ifndef ADMINUPDATEBOOK_H
#define ADMINUPDATEBOOK_H

#include <QMainWindow>

namespace Ui {
class AdminUpdateBook;
}

class AdminUpdateBook : public QMainWindow
{
    Q_OBJECT

public:
    explicit AdminUpdateBook(QWidget *parent = nullptr);
    ~AdminUpdateBook();

private:
    Ui::AdminUpdateBook *ui;
};

#endif // ADMINUPDATEBOOK_H
