#ifndef GLOBALINSTANCES_H
#define GLOBALINSTANCES_H

#include "admineditbookdialog.h"
#include "admincatalogue.h"
#include "adminenterbookupdate.h"


class GlobalInstances {
public:

    static AdminCatalogue *adminCatalogueInstance;            // Declaring the instance

    static AdminEnterBookUpdate *enterBookUpdateInstance;

    static void initializeGlobalInstances();
};

#endif // GLOBALINSTANCES_H
