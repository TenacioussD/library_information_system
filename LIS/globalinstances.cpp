#include "globalinstances.h"

AdminEditBookDialog* globalAdminEditBookDialog = nullptr;
AdminCatalogue* globalAdminCatalogue = nullptr;

 void initializeGlobalInstances() {

    globalAdminEditBookDialog = new AdminEditBookDialog(-1, "", "", nullptr);       // Creates an instance of AdminEditBookDialog and assign it to the global pointer

 }
