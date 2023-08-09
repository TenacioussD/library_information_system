#ifndef ADMINHOME_H
#define ADMINHOME_H

#include <QMainWindow>
#include <QObject>
#include "admincatalogue.h"

namespace Ui {
class AdminHome;
}

class AdminHome : public QMainWindow
{
    Q_OBJECT

public:
    explicit AdminHome(QWidget *parent = nullptr);
    ~AdminHome();

private slots:
    void on_pushButton_clicked();

    void on_catalogue_clicked();

private:
    Ui::AdminHome *ui;
    AdminCatalogue *admincatalogue;
};

#endif // ADMINHOME_H
