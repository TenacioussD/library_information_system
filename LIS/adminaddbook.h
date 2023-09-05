#ifndef ADMINADDBOOK_H
#define ADMINADDBOOK_H

#include <QMainWindow>
#include <QObject>

class AdminHome;                               // Forward declarations
class AdminCatalogue;
class AdminBookConfirmation;
class AdminViewStatus;
class AdminManageBooks;
class AdminMembership;

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

    void on_status_clicked();

    void on_manageBooks_clicked();

    void on_membership_clicked();

private:
    Ui::AdminAddBook *ui;
};

#endif // ADMINADDBOOK_H
