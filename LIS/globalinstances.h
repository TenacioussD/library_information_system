#ifndef GLOBALINSTANCES_H
#define GLOBALINSTANCES_H

#include "admineditbookdialog.h"                              // Declaring the relevant headers
#include "admincatalogue.h"
#include "adminenterbookupdate.h"


class GlobalInstances {
public:

    static AdminCatalogue *adminCatalogueInstance;            // Declaring the instance

    static AdminEnterBookUpdate *enterBookUpdateInstance;

    static void initializeGlobalInstances();                  // Declaring the member fucntion
};

#endif // GLOBALINSTANCES_H
