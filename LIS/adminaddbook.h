#ifndef ADMINADDBOOK_H
#define ADMINADDBOOK_H

#include <QMainWindow>
#include <QString>

class AdminHome;
class AdminCatalogue;


namespace Ui {
class AdminAddBook;
}

class AdminAddBook : public QMainWindow
{
    Q_OBJECT

public:
    explicit AdminAddBook(QWidget *parent = nullptr);
    ~AdminAddBook();
    QDebug *bookTitle;

private slots:
    void on_back_clicked();

    void on_pushButton_2_clicked();

    void on_catalogue_clicked();


public slots:
    void on_confirm_clicked();

private:
    Ui::AdminAddBook *ui;
    AdminHome *adminhome;
    AdminCatalogue *admincatalogue;

};

#endif // ADMINADDBOOK_H
