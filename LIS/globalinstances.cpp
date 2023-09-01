#include "globalinstances.h"

#include "admincatalogue.h"
#include "adminenterbookupdate.h"

AdminCatalogue *GlobalInstances::adminCatalogueInstance = nullptr;
AdminEnterBookUpdate *GlobalInstances::enterBookUpdateInstance = nullptr;


void GlobalInstances::initializeGlobalInstances()
{
<<<<<<< HEAD

    //AdminCatalogue *globalAdminCatalogue = new AdminCatalogue;
    adminCatalogueInstance = new AdminCatalogue;                                         // Initialise AdminCatalogue instance
=======
    adminCatalogueInstance = new AdminCatalogue;                                        // Initialise AdminCatalogue instance
>>>>>>> d83f94264ff593e2b2f9ad738f21bd6d55c8c5e7
    enterBookUpdateInstance = new AdminEnterBookUpdate("", "", QPixmap(), -1);          // Initialise AdminEnterBookUpdate instance to establish the connection, sets the index at -1 as the books index in the program begins at 0
}
