#ifndef ADMINADDBOOK_H
#define ADMINADDBOOK_H

#include <QMainWindow>

namespace Ui {
class AdminAddBook;
}

class AdminAddBook : public QMainWindow
{
    Q_OBJECT

public:
    explicit AdminAddBook(QWidget *parent = nullptr);
    ~AdminAddBook();

private:
    Ui::AdminAddBook *ui;
};

#endif // ADMINADDBOOK_H
