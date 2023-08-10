#ifndef ADMINCATALOGUE_H
#define ADMINCATALOGUE_H

#include <QMainWindow>
#include "adminhome.h"
class AdminHome;

namespace Ui {
class AdminCatalogue;
}

class AdminCatalogue : public QMainWindow
{
    Q_OBJECT

public:
    explicit AdminCatalogue(QWidget *parent = nullptr);
    ~AdminCatalogue();

private slots:

    void on_back_clicked();

    void on_logout_clicked();

private:
    Ui::AdminCatalogue *ui;
    AdminHome *adminhome;
};

#endif // ADMINCATALOGUE_H
