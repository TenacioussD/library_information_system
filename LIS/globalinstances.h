#ifndef GLOBALINSTANCES_H
#define GLOBALINSTANCES_H

#include "admineditbookdialog.h"
#include "admincatalogue.h"

extern AdminEditBookDialog* globalAdminEditBookDialog;
extern AdminCatalogue* globalAdminCatalogue;


void initializeGlobalInstances();
/*class GlobalInstances
{
public:
    GlobalInstances();
};*/

#endif // GLOBALINSTANCES_H
