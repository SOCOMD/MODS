#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            // SEA
            "SOCOMD_SHIP_A",
            "SOCOMD_SHIP_B",
            "SOCOMD_SHIP_C",
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"socomd_core"};
        author = "";
        authors[] = {"SOCOMD J4"};
        authorUrl = "https://socomd.com";
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgModuleCategories.hpp"
#include "configs\CfgVehicles.hpp"