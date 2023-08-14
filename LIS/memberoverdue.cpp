#include "memberoverdue.h"
#include "ui_memberoverdue.h"

MemberOverdue::MemberOverdue(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MemberOverdue)
{
    ui->setupUi(this);
}

MemberOverdue::~MemberOverdue()
{
    delete ui;
}
