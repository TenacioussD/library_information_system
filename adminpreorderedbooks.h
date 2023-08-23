#ifndef ADMINPREORDEREDBOOKS_H
#define ADMINPREORDEREDBOOKS_H

#include <QMainWindow>

namespace Ui {
class AdminPreOrderedBooks;
}

class AdminPreOrderedBooks : public QMainWindow
{
    Q_OBJECT

public:
    explicit AdminPreOrderedBooks(QWidget *parent = nullptr);
    ~AdminPreOrderedBooks();

private slots:
    void on_catalogueButton_clicked();

    void on_manageBooksButton_clicked();

    void on_status_clicked();

    void on_membershipButton_clicked();

private:
    Ui::AdminPreOrderedBooks *ui;
};

#endif // ADMINPREORDEREDBOOKS_H
