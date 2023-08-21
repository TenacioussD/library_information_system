#ifndef ADMINADDMEMBER_H
#define ADMINADDMEMBER_H

#include <QDialog>
#include <QPushButton>
#include <QVBoxLayout>
#include <QLabel>
#include <QFile>
#include <QTextStream>
#include <QApplication>
#include <QMessageBox>
#include <QString>
#include <QLineEdit>

class AdminMembership;
class AdminCatalogue;
class AdminManageBooks;

namespace Ui {
class AdminAddMember;
}

class AdminAddMember : public QDialog
{
    Q_OBJECT

public:
    explicit AdminAddMember(QWidget *parent = nullptr);
    ~AdminAddMember();

private slots:
    void on_back_clicked();

    void on_catalogue_clicked();

    void on_manageBooks_clicked();

    void on_pushButton_2_clicked();

    void on_addMemberBut_clicked();

    void addMemberBut();

private:
    Ui::AdminAddMember *ui;
    AdminMembership *adminMembership;
    AdminCatalogue *adminCatalogue;
    AdminManageBooks *adminManageBooks;

    int memberCounter = 0; //Initialize member counter

    QString generateAccountNumber();

    void setupUI();

    QLineEdit *firstNameLineEdit;
    QLineEdit *lastNameLineEdit;
    QLineEdit *contactNumLineEdit;
};

#endif // ADMINADDMEMBER_H
