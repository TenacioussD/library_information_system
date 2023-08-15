#include "membermembership.h"
#include "ui_membermembership.h"

MemberMembership::MemberMembership(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MemberMembership)
{
    ui->setupUi(this);
}

MemberMembership::~MemberMembership()
{
    delete ui;
}
