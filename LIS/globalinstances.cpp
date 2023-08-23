#include "globalinstances.h"

#include "admincatalogue.h"
#include "adminenterbookupdate.h"

AdminCatalogue *GlobalInstances::adminCatalogueInstance = nullptr;
AdminEnterBookUpdate *GlobalInstances::enterBookUpdateInstance = nullptr;


void GlobalInstances::initializeGlobalInstances()
{
    // Initialize AdminCatalogue instance
    //AdminCatalogue *globalAdminCatalogue = new AdminCatalogue;
    adminCatalogueInstance = new AdminCatalogue;
    // Initialize AdminEnterBookUpdate instance and establish connection
    enterBookUpdateInstance = new AdminEnterBookUpdate("", "", QPixmap(), -1);

}
