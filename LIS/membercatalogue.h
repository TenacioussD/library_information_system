#ifndef MEMBERCATALOGUE_H
#define MEMBERCATALOGUE_H

#include <QMainWindow>

namespace Ui {
class MemberCatalogue;
}

class MemberCatalogue : public QMainWindow
{
    Q_OBJECT

public:
    explicit MemberCatalogue(QWidget *parent = nullptr);
    ~MemberCatalogue();

private slots:
    void on_pushButton_clicked();

private:
    Ui::MemberCatalogue *ui;
};

#endif // MEMBERCATALOGUE_H
