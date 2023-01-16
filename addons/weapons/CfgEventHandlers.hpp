class Extended_PreStart_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_preStart));
    };
};

class Extended_PreInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_preInit));
    };
};

class Extended_PostInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_postInit));
    };
};
// class Extended_FiredBIS_EventHandlers  {
//     class CAManBase  {
//         rpgMalfunction = "_this call socomd_weapons_fnc_Event_rpgMalfunction";
//         shotgunBreach = "_this call socomd_weapons_fnc_Event_shotgunBreach";
//     };
// };

// class Extended_Killed_EventHandlers {
//     class CAManBase {
//         weaponMalfunction = "_this call socomd_weapons_fnc_Event_weaponMalfunction";
//     };
// };
