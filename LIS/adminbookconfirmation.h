#ifndef ADMINBOOKCONFIRMATION_H
#define ADMINBOOKCONFIRMATION_H

#include <QMainWindow>

class AdminHome;                                 // Forward Declarations
class AdminAddBook;
class AdminManageBooks;
class AdminViewStatus;
class AdminMembership;

namespace Ui {
class AdminBookConfirmation;
}

class AdminBookConfirmation : public QMainWindow
{
    Q_OBJECT

public:
    explicit AdminBookConfirmation(const QString &title, const QString &author, QWidget *parent = nullptr);     // Constructor that takes title and author as reference parameters
    ~AdminBookConfirmation();


private slots:

    void on_confirmDetails_clicked();


    void on_back_2_clicked();

    void on_catalogue_3_clicked();

    void on_pushButton_3_clicked();

    void on_manageBooks_3_clicked();

    void on_status_3_clicked();

    void on_membership_3_clicked();

private:
    Ui::AdminBookConfirmation *ui;
};

#endif // ADMINBOOKCONFIRMATION_H
