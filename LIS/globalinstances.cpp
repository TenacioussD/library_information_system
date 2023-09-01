#include "globalinstances.h"

#include "admincatalogue.h"
#include "adminenterbookupdate.h"

AdminCatalogue *GlobalInstances::adminCatalogueInstance = nullptr;
AdminEnterBookUpdate *GlobalInstances::enterBookUpdateInstance = nullptr;


void GlobalInstances::initializeGlobalInstances()
{

    //AdminCatalogue *globalAdminCatalogue = new AdminCatalogue;
    adminCatalogueInstance = new AdminCatalogue;                                         // Initialise AdminCatalogue instance
    adminCatalogueInstance = new AdminCatalogue;                                        // Initialise AdminCatalogue instance

    enterBookUpdateInstance = new AdminEnterBookUpdate("", "", QPixmap(), -1);          // Initialise AdminEnterBookUpdate instance to establish the connection, sets the index at -1 as the books index in the program begins at 0
}
