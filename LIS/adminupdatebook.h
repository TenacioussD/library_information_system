#ifndef ADMINUPDATEBOOK_H
#define ADMINUPDATEBOOK_H

#include <QMainWindow>

class AdminHome;                     // Forward declarations
class AdminCatalogue;
class AdminEnterBookUpdate;
class AdminEditBookDialog;
class AdminViewStatus;
class AdminManageBooks;

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
    void editBookClicked(const QString &title, const QString &author, const QPixmap &image, int bookIndex);  // signal for when user clicks on a book to be edited

private slots:
    void on_catalogue_3_clicked();

    void on_back_2_clicked();

    void on_pushButton_3_clicked();

    void on_edit1_clicked();

    void on_edit2_clicked();

    void on_edit3_clicked();

    void on_edit4_clicked();

    void updateCatalogue(int index, const QString &updatedTitle, const QString &updatedAuthor);

    void on_status_3_clicked();

    void on_manageBooks_3_clicked();

private:
    Ui::AdminUpdateBook *ui;
};

#endif // ADMINUPDATEBOOK_H
