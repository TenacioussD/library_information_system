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

signals:
    void editBookClicked(const QString &title, const QString &author, const QPixmap &image);  // signal for when user clicks on a book to be edited

private slots:
    void on_catalogue_3_clicked();

    void on_back_2_clicked();

    void on_pushButton_3_clicked();

  //  void on_greatLakes_clicked();

    void on_edit1_clicked();

    void on_edit2_clicked();

    void on_edit3_clicked();

    void on_edit4_clicked();

private:
    Ui::AdminUpdateBook *ui;
};

#endif // ADMINUPDATEBOOK_H
