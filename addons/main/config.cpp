#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"AGE_Equipment","ace_main","rhsusf_main","rhssaf_main","rhsgref_main","rhsafrf_main"};
        author = "";
        authors[] = {"SOCOMD J4"};
        authorUrl = "https://socomd.com";
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgModuleCategories.hpp"
