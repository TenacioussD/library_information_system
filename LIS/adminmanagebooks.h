#ifndef ADMINMANAGEBOOKS_H
#define ADMINMANAGEBOOKS_H

#include <QMainWindow>

namespace Ui {
class AdminManageBooks;
}

class AdminManageBooks : public QMainWindow
{
    Q_OBJECT

public:
    explicit AdminManageBooks(QWidget *parent = nullptr);
    ~AdminManageBooks();

private slots:
    void on_pushButton_clicked();

private:
    Ui::AdminManageBooks *ui; 
};

#endif // ADMINMANAGEBOOKS_H
