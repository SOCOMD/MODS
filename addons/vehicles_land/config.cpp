#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            //LAND
            "SOCOMD_APC_A",
            "SOCOMD_APC_B",
            "SOCOMD_LR_ATV",
            "SOCOMD_BUSHMASTER_TRANS",
            "SOCOMD_BUSHMASTER_HMG",
            "SOCOMD_TRUCK_TRANSPORT_A",
            "SOCOMD_TRUCK_AMMO_A",
            "SOCOMD_TRUCK_FUEL_A",
            "SOCOMD_TRUCK_REPAIR_A",
            "SOCOMD_SOV_HMG_D",
            "SOCOMD_SOV_HMG_W",
            "SOCOMD_SOV_GMG_D",
            "SOCOMD_SOV_GMG_W",
            "SOCOMD_BIKE",
            "SOCOMD_QUADBIKE"
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
#include "configs\CfgWeapons.hpp"