#ifndef MEMBERCATALOGUESELECT_H
#define MEMBERCATALOGUESELECT_H

#include <QDialog>

namespace Ui {
class MemberCatalogueSelect;
}

class MemberCatalogueSelect : public QDialog
{
    Q_OBJECT

public:
    explicit MemberCatalogueSelect(QWidget *parent = nullptr);
    ~MemberCatalogueSelect();

private:
    Ui::MemberCatalogueSelect *ui;
};

#endif // MEMBERCATALOGUESELECT_H
