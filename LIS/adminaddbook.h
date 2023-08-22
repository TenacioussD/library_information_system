#ifndef ADMINADDBOOK_H
#define ADMINADDBOOK_H

#include <QMainWindow>
#include <QObject>

class AdminHome;                               // Forward declarations
class AdminCatalogue;
class AdminBookConfirmation;

namespace Ui {
class AdminAddBook;
}

class AdminAddBook : public QMainWindow
{
    Q_OBJECT

public:
    explicit AdminAddBook(QWidget *parent = nullptr);
    ~AdminAddBook();

private slots:                                    // Member functions of the classSlots
    void on_back_clicked();

    void on_pushButton_2_clicked();

    void on_catalogue_clicked();

    void on_confirm_clicked();

private:
    Ui::AdminAddBook *ui;
    AdminHome *adminhome;                         // AdminHome pointer variable
    AdminCatalogue *admincatalogue;               // AdminCatalogue pointer variable
};

#endif // ADMINADDBOOK_H
