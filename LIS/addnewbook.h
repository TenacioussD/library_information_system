#ifndef ADDNEWBOOK_H
#define ADDNEWBOOK_H

#include <QMainWindow>

namespace Ui {
class AddNewBook;
}

class AddNewBook : public QMainWindow
{
    Q_OBJECT

public:
    explicit AddNewBook(QWidget *parent = nullptr);
    ~AddNewBook();

private:
    Ui::AddNewBook *ui;
};

#endif // ADDNEWBOOK_H
