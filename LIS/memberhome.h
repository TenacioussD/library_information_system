<<<<<<< HEAD
#ifndef MEMBERHOME_H
#define MEMBERHOME_H


#include <QMainWindow>
#include <QObject>
#include "membercatalogue.h"
#include "memberoverdue.h"

class MemberCatalogue;
class MemberHome;

namespace Ui {
class MemberHome;
}

class MemberHome : public QMainWindow
{
    Q_OBJECT

public:
    explicit MemberHome(QWidget *parent = nullptr);
    ~MemberHome();

private slots:
    void on_logout_clicked();


    void on_catalogue_2_clicked();

    void on_overdue_clicked();

private:
    Ui::MemberHome *ui;
    MemberCatalogue *membercatalogue;          // class pointer to object membercatalogue
    MemberHome *memberhome;                    // class pointer to object memberhome
    MemberOverdue *memberOverdue;              // class pointer to object MemberOverdue    
};

#endif // MEMBERHOME_H
=======
#ifndef MEMBERHOME_H
#define MEMBERHOME_H

#include <QMainWindow>
#include <QObject>
#include "membercatalogue.h"
class MemberCatalogue;
class MemberHome;

namespace Ui {
class MemberHome;
}

class MemberHome : public QMainWindow
{
    Q_OBJECT

public:
    explicit MemberHome(QWidget *parent = nullptr);
    ~MemberHome();

private slots:
    void on_logout_clicked();


    void on_catalogue_2_clicked();

private:
    Ui::MemberHome *ui;
    MemberCatalogue *membercatalogue;          // class pointer to object membercatalogue
    MemberHome *memberhome;                    // class pointer to object memberhome
};

#endif // MEMBERHOME_H
>>>>>>> origin/master
