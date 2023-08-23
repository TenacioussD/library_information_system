#ifndef ADMINEDITBOOKDIALOG_H
#define ADMINEDITBOOKDIALOG_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlQuery>

class AdminHome;
class AdminEnterBookUpdate;                 // Forward declarations
class AdminCatalogue;

namespace Ui {
class AdminEditBookDialog;
}

class AdminEditBookDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AdminEditBookDialog(const QString &title, const QString &author, QWidget *parent = nullptr);
    ~AdminEditBookDialog();

signals:
    //void bookDetailsUpdated(int bookIndex, const QString &updatedTitle, const QString &updatedAuthor);     // Signal to pass the updated book details when user selects confirm

    void bookEditCompleted();   // to close the adminupdatebookdetails page

private slots:
    void on_pushButton_clicked();

    void on_cancelButton_clicked();

    void handleMessageBoxFinished(int result);

private:
    Ui::AdminEditBookDialog *ui;
    AdminEnterBookUpdate *enterBookUpdate;
};

#endif // ADMINEDITBOOKDIALOG_H
