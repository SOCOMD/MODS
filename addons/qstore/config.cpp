#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {"SOCOMD_QStore_AFP","SOCOMD_QStore_LOWVIS","SOCOMD_QStore_RUS","SOCOMD_QStore_Base"};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"socomd_core"};
        author = "";
        authors[] = {"SOCOMD J4"};
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "configs\CfgEditorCategories.hpp"
#include "configs\CfgEditorSubcategories.hpp"
#include "configs\CfgQstoreBlackList.hpp"
#include "configs\CfgVehicles.hpp"
