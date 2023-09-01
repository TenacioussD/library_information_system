#ifndef ADMINCATALOGUE_H
#define ADMINCATALOGUE_H

#include <QMainWindow>

class AdminHome;                                      // Forward declarations
class AdminManageBooks;
class AdminEditBookDialog;
class AdminViewStatus;
class AdminMembership;

namespace Ui {
class AdminCatalogue;
}

class AdminCatalogue : public QMainWindow
{
    Q_OBJECT

public:
    explicit AdminCatalogue(QWidget *parent = nullptr);
    ~AdminCatalogue();

    void updateBookDetails(int bookIndex, const QString &updatedTitle, const QString &updatedAuthor);   // Member function that handles the receiving signal to update books in the catalogue

private slots:

    void on_back_clicked();

    void on_logout_clicked();

    void on_manageBooks_clicked();

    void on_status_clicked();

    void on_membership_clicked();

private:
    Ui::AdminCatalogue *ui;
    AdminMembership *adminMembership;
};

#endif // ADMINCATALOGUE_H
