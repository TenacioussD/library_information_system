#ifndef ADDBOOKCONFIRMATION_H
#define ADDBOOKCONFIRMATION_H

#include <QMainWindow>

namespace Ui {
class AddBookConfirmation;
}

class AddBookConfirmation : public QMainWindow
{
    Q_OBJECT

public:
    explicit AddBookConfirmation(QWidget *parent = nullptr);
    ~AddBookConfirmation();

private:
    Ui::AddBookConfirmation *ui;
};

#endif // ADDBOOKCONFIRMATION_H
