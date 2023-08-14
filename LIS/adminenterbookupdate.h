#ifndef ADMINENTERBOOKUPDATE_H
#define ADMINENTERBOOKUPDATE_H

#include <QMainWindow>

class AdminEditBookDialog;

namespace Ui {
class AdminEnterBookUpdate;
}

class AdminEnterBookUpdate : public QMainWindow
{
    Q_OBJECT

public:
    explicit AdminEnterBookUpdate(QWidget *parent = nullptr);
    ~AdminEnterBookUpdate();

private slots:
    void on_confirm_2_clicked();

private:
    Ui::AdminEnterBookUpdate *ui;
};

#endif // ADMINENTERBOOKUPDATE_H
