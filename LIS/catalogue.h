#ifndef CATALOGUE_H
#define CATALOGUE_H

#include <QDialog>

namespace Ui {
class catalogue;
}

class catalogue : public QDialog
{
    Q_OBJECT

public:
    explicit catalogue(QWidget *parent = nullptr);
    ~catalogue();

private:
    Ui::catalogue *ui;
};

#endif // CATALOGUE_H
