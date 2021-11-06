#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"AGE_Equipment","ace_main","CUP_Weapons_Ammunition","CUP_AirVehicles_LoadOrder","CUP_WheeledVehicles_Core","CUP_Weapons_Compatibility","CUP_Weapons_M72A6"};
        author = "";
        authors[] = {"SOCOMD J4"};
        authorUrl = "https://socomd.com";
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgModuleCategories.hpp"
