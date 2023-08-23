#ifndef ADMINENTERBOOKUPDATE_H
#define ADMINENTERBOOKUPDATE_H

#include <QMainWindow>
#include <QPixmap>
#include <QLineEdit>
#include <QLabel>

class AdminEditBookDialog;          // Forward declaration
class AdminHome;

namespace Ui {
class AdminEnterBookUpdate;
}

class AdminEnterBookUpdate : public QMainWindow
{
    Q_OBJECT

signals:
    void editBookClicked(int index, const QString &title, const QString &author, const QPixmap &image);         // signal that is emitted to pass the title, author and pixmap image to the enterBookUpdate page/class

    void bookDetailsUpdated(int bookIndex, const QString &updatedTitle, const QString &updatedAuthor);     // Signal to pass the updated book details when user selects confirm

public:
    explicit AdminEnterBookUpdate(const QString &title, const QString &author, const QPixmap &image, int bookIndex, QWidget *parent = nullptr);
    ~AdminEnterBookUpdate();


public slots:

   void handleBookEditCompleted();

private slots:
    void on_confirm_2_clicked();

    void on_catalogue_clicked();

    void on_back_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::AdminEnterBookUpdate *ui;
    int currentBookIndex;
};

#endif // ADMINENTERBOOKUPDATE_H
