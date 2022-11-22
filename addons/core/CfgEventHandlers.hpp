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
class Extended_Init_EventHandlers {

    class Man {
        class DefaultSkill_eh {
            init="_cfg = (configfile >> 'CfgVehicles' >> (typeOf (_this select 0)) >> 'skill');if(isNumber _cfg) then { (_this select 0) setSkill (getNumber(_cfg));};";
        };
    };
};


// class Extended_AnimStateChanged_EventHandlers {
//     class CAManBase {
//           animStateChanged = "[_this select 0,_this select 1] call socomd_core_fnc_animSpeedSet";
//     };
// };