#include "memberpreorder.h"
#include "ui_memberpreorder.h"

MemberPreOrder::MemberPreOrder(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MemberPreOrder)
{
    ui->setupUi(this);
}

MemberPreOrder::~MemberPreOrder()
{
    delete ui;
}
