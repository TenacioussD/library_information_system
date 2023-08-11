#ifndef ADMINMANAGEBOOKS_H
#define ADMINMANAGEBOOKS_H

#include <QMainWindow>
class AdminAddBook;

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
    void on_pushButton_clicked();


    void on_add_Book_clicked();

private:
    Ui::AdminManageBooks *ui;
    AdminAddBook *adminaddbook;
};

#endif // ADMINMANAGEBOOKS_H
