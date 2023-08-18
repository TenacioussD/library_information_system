#ifndef ADMINMANAGEBOOKS_H
#define ADMINMANAGEBOOKS_H

#include <QMainWindow>
class AdminAddBook;
class AdminHome;
class AdminCatalogue;

namespace Ui {
class AdminManageBooks;
}

class AdminManageBooks : public QMainWindow
{
    Q_OBJECT

public:
    explicit AdminManageBooks(QWidget *parent = nullptr);
    ~AdminManageBooks();

private slots:

    void on_add_Book_clicked();

    void on_back_clicked();

    void on_pushButton_2_clicked();

    void on_catalogue_clicked();

private:
    Ui::AdminManageBooks *ui;
    //AdminAddBook *adminaddbook;
    //AdminHome *adminhome;
    AdminCatalogue *admincatalogue;
};

#endif // ADMINMANAGEBOOKS_H
