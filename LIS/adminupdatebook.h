<<<<<<< HEAD
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
=======
#ifndef ADMINUPDATEBOOK_H
#define ADMINUPDATEBOOK_H

#include <QMainWindow>
class AdminHome;
class AdminCatalogue;
class AdminEnterBookUpdate;

namespace Ui {
class AdminUpdateBook;
}

class AdminUpdateBook : public QMainWindow
{
    Q_OBJECT

public:
    explicit AdminUpdateBook(QWidget *parent = nullptr);
    ~AdminUpdateBook();

private slots:
    void on_catalogue_3_clicked();

    void on_back_2_clicked();

    void on_pushButton_3_clicked();

    void on_greatLakes_clicked();

private:
    Ui::AdminUpdateBook *ui;
};

#endif // ADMINUPDATEBOOK_H
>>>>>>> origin/master
