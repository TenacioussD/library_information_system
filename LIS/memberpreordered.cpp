#include "memberpreordered.h"
#include "ui_memberpreordered.h"

MemberPreOrdered::MemberPreOrdered(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MemberPreOrdered)
{
    ui->setupUi(this);
}

MemberPreOrdered::~MemberPreOrdered()
{
    delete ui;
}
