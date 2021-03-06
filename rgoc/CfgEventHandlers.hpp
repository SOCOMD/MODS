class Extended_PreInit_EventHandlers {
    class ADDON {
        init = "call compile preprocessFileLineNumbers '\rgoc\XEH_preInit.sqf'";
    };
};
class Extended_PostInit_EventHandlers {
    class ADDON {
        init = "call compile preprocessFileLineNumbers '\rgoc\XEH_postInit.sqf'";
    };
};

class Extended_DisplayLoad_EventHandlers {
    class RscDisplayInventory {
        ADDON = "call rgoc_fnc_openInventory";
    };
};