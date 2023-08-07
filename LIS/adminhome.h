#ifndef ADMINHOME_H
#define ADMINHOME_H

#include <QDialog>
#include "catalogue.h"

namespace Ui {
class adminHome;
}

class adminHome : public QDialog
{
    Q_OBJECT

public:
    explicit adminHome(QWidget *parent = nullptr);
    ~adminHome();


private slots:
    void on_catalogue_clicked();

private:
    Ui::adminHome *ui;
    catalogue *cataloguE;                 // pointer to the catalogue page
};

#endif // ADMINHOME_H
