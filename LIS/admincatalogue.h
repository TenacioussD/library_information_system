#ifndef ADMINCATALOGUE_H
#define ADMINCATALOGUE_H

#include <QMainWindow>


class AdminHome;                                      // Forward declarations
class AdminManageBooks;
class AdminEditBookDialog;

namespace Ui {
class AdminCatalogue;
}

class AdminCatalogue : public QMainWindow
{
    Q_OBJECT

public:
    explicit AdminCatalogue(QWidget *parent = nullptr);
    ~AdminCatalogue();

    void updateBookDetails(int bookIndex, const QString &updatedTitle, const QString &updatedAuthor);

private slots:

    void on_back_clicked();

    void on_logout_clicked();

    void on_manageBooks_clicked();


private:
    Ui::AdminCatalogue *ui;
};

#endif // ADMINCATALOGUE_H
