#include "adminremovememconfirm.h"
#include "ui_adminremovememconfirm.h"

AdminRemoveMemConfirm::AdminRemoveMemConfirm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminRemoveMemConfirm)
{
    ui->setupUi(this);
}

AdminRemoveMemConfirm::~AdminRemoveMemConfirm()
{
    delete ui;
}
