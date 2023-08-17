#ifndef ADMINBOOKCONFIRMATION_H
#define ADMINBOOKCONFIRMATION_H

#include <QMainWindow>

class AdminHome;
class AdminAddBook;

namespace Ui {
class AdminBookConfirmation;
}

class AdminBookConfirmation : public QMainWindow
{
    Q_OBJECT

public:
    explicit AdminBookConfirmation(const QString &title, const QString &author, QWidget *parent = nullptr);
    ~AdminBookConfirmation();


private slots:
    void on_confirmDetails_clicked();

    void on_back_2_clicked();

private:
    Ui::AdminBookConfirmation *ui;
    AdminHome *adminhome;
    AdminAddBook *adminaddbook;
};

#endif // ADMINBOOKCONFIRMATION_H
