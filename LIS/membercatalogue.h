<<<<<<< HEAD
#ifndef MEMBERCATALOGUE_H
#define MEMBERCATALOGUE_H

#include <QMainWindow>
class MemberHome;

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

    void on_back_clicked();

    void on_logout_clicked();

private:
    Ui::MemberCatalogue *ui;
    MemberHome *memberhome;
};

#endif // MEMBERCATALOGUE_H
=======
#ifndef MEMBERCATALOGUE_H
#define MEMBERCATALOGUE_H

#include <QMainWindow>
class MemberHome;

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

    void on_back_clicked();

    void on_logout_clicked();

private:
    Ui::MemberCatalogue *ui;
    MemberHome *memberhome;
};

#endif // MEMBERCATALOGUE_H
>>>>>>> origin/master
