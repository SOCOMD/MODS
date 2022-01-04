#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ACWP_core","AGE_Equipment","ace_main","rhsusf_main_loadorder","rhsusf_c_weapons","rhssaf_main_loadorder","rhsusf_c_airweapons","rhsgref_main_loadorder","rhs_main_loadorder"};
        author = "";
        authors[] = {"SOCOMD J4"};
        authorUrl = "https://socomd.com";
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgModuleCategories.hpp"
