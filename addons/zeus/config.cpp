#include "script_component.hpp"

// Disabled Modules due to redundancy (from ZEN & 3den Enhanced)
//            "SOCOMD_Module_Flatten",
//            "SOCOMD_Module_ConvoyGroup",
//            "SOCOMD_Module_CopyClipboardLoadout",
//            "SOCOMD_Module_PasteClipboardLoadout",
			
class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        
        units[] = {
            "SOCOMD_Module_ToggleUndercover",
            "SOCOMD_Module_ToggleTranslator",
            "SOCOMD_Module_ShowHitPoints",
            "SOCOMD_Module_JamWeapon",
            "SOCOMD_Module_ModuleGenerateUnitConfig",
            "SOCOMD_Module_PowerGrid",
            "SOCOMD_Module_PowerGenerator",
            "SOCOMD_Module_DisableAI",
            "SOCOMD_Module_EnableAI",
            "SOCOMD_Module_RevealPlayers",
            "SOCOMD_Module_ForgetPlayers"
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

#include "configs\CfgFactionClasses.hpp"
#include "configs\CfgVehicles.hpp"