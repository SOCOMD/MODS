#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ace_main"};
        author = "";
        authors[] = {"SOCOMD J4"};
        authorUrl = "https://socomd.com";
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgModuleCategories.hpp"

#include "configs\CfgArsenalOptions.hpp"
#include "configs\CfgLoadoutWeapons.hpp"
#include "configs\CfgLoadouts.hpp"
#include "configs\CfgWeapons.hpp"
