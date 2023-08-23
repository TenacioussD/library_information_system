#ifndef ADMINBOOKCONFIRMATION_H
#define ADMINBOOKCONFIRMATION_H

#include <QMainWindow>

class AdminHome;                                 // Forward Declarations
class AdminAddBook;

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

private:
    Ui::AdminBookConfirmation *ui;
    AdminHome *adminhome;
    AdminAddBook *adminaddbook;
};

#endif // ADMINBOOKCONFIRMATION_H
