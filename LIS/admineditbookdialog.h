#ifndef ADMINEDITBOOKDIALOG_H
#define ADMINEDITBOOKDIALOG_H

#include <QDialog>
class AdminHome;
class AdminEnterBookUpdate; // Forward declaration

namespace Ui {
class AdminEditBookDialog;
}

class AdminEditBookDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AdminEditBookDialog(const QString &title, const QString &author, AdminEnterBookUpdate *enterBookUpdate, QWidget *parent = nullptr);
    ~AdminEditBookDialog();

private slots:
    void on_pushButton_clicked();

    void on_cancelButton_clicked();

private:
    Ui::AdminEditBookDialog *ui;
    AdminEnterBookUpdate *enterBookUpdate;
};

#endif // ADMINEDITBOOKDIALOG_H
