#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {

            //AIR
            "SOCOMD_FIREFLY_A",
            "SOCOMD_DRAGONFLY_A",
            "SOCOMD_WARRIOR_A",
            "SOCOMD_WARRIOR_B",
            "SOCOMD_NOMAD_A",
            "SOCOMD_HURRICANE_A",
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
#include "configs/CfgVehicles.hpp"
#include "configs/CfgAmmo.hpp"
#include "configs/CfgMagazines.hpp"
