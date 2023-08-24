#ifndef ADMINREMOVEMEMBER_H
#define ADMINREMOVEMEMBER_H

#include <QDialog>

class AdminCatalogue;

namespace Ui {
class AdminRemoveMember;
}

class AdminRemoveMember : public QDialog
{
    Q_OBJECT

public:
    explicit AdminRemoveMember(QWidget *parent = nullptr);
    ~AdminRemoveMember();

private slots:
    void on_catalogue_clicked();

private:
    Ui::AdminRemoveMember *ui;
    AdminCatalogue *adminCatalogue;
};

#endif // ADMINREMOVEMEMBER_H
