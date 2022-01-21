#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
                // OTHER
            "FLAG_ADFU_F",
            "FLAG_ADFOPFOR_F",
            "SOCOMD_BERET",
            // BOXES
            "SOCOMD_QStore_A",
            "SOCOMD_Personal_box",
            "SOCOMD_Training_box",
            "SOCOMD_Void_Box",
            "SOCOMD_Crate_Empty",
            "SOCOMD_Crate_Fuel",
            "SOCOMD_Crate_Hasty",
            "SOCOMD_Supply_Empty",
            "SOCOMD_Supply_Ammo",
            "SOCOMD_Supply_Medical",
            "SOCOMD_Supply_Gustav",
            "SOCOMD_Supply_Mortar",
            "SOCOMD_Supply_Mortar_60mm",
            "SOCOMD_Supply_HMG",
            "SOCOMD_Supply_AGL",
            "SOCOMD_Supply_Javelin",
            "SOCOMD_Supply_Tools",
            "SOCOMD_Supply_Vehicle_Ammo",
            "SOCOMD_Supply_Vehicle_Ammo_Large",
            "SOCOMD_Recon_Supply",
            "SOCOMD_Supply_NVG",
            "SOCOMD_Supply_152",
            "ACWP_case_m4_gl",
            "ACWP_case_m4_don",
            "ACWP_case_sniper",
            // MEN
            "SOCOMD_Unarmed",
            "SOCOMD_Homestead",
            "SOCOMD_Rifleman",
            "SOCOMD_Pilot",
            "SOCOMD_Crewman"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"socomd_main"};
        author = "";
        authors[] = {"SOCOMD J4"};
        authorUrl = "https://socomd.com";
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"

#include "configs\CfgEditorCategories.hpp"
#include "configs\CfgEditorSubcategories.hpp"
#include "configs\CfgDifficultyPresets.hpp"
#include "configs\CfgMissions.hpp"
#include "configs\CfgMarkers.hpp"
#include "configs\CfgMoves.hpp"

#include "configs\CfgMagazines.hpp"
#include "configs\CfgVehicles.hpp"

#include "configs\CfgGroups.hpp"
#include "configs\CfgLoadoutWeapons.hpp"
#include "configs\CfgUnitInsignia.hpp"
#include "configs\CfgASORVS.hpp"
#include "configs\Rsc.hpp"
#include "configs\CfgWorldType.hpp"