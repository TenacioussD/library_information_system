#ifndef ADMINBOOKCONFIRMATION_H
#define ADMINBOOKCONFIRMATION_H

#include <QMainWindow>

namespace Ui {
class AdminBookConfirmation;
}

class AdminBookConfirmation : public QMainWindow
{
    Q_OBJECT

public:
    explicit AdminBookConfirmation(QWidget *parent = nullptr);
    ~AdminBookConfirmation();

private:
    Ui::AdminBookConfirmation *ui;
};

#endif // ADMINBOOKCONFIRMATION_H
