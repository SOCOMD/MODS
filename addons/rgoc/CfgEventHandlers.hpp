class Extended_PreInit_EventHandlers {
    class RGOC {
        init = "call compile preprocessFileLineNumbers '\z\socomd\addons\rgoc\XEH_preInit.sqf'";
    };
};
class Extended_PostInit_EventHandlers {
    class RGOC {
        init = "call compile preprocessFileLineNumbers '\z\socomd\addons\rgoc\XEH_postInit.sqf'";
    };
};

class Extended_DisplayLoad_EventHandlers {
    class RscDisplayInventory {
        RGOC = "call rgoc_fnc_openInventory";
    };
};