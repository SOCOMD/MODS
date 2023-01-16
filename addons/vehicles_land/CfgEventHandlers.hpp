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

//class Extended_Init_EventHandlers
// {
//     class UK3CB_BAF_Coyote_L111A1_Base {
//         class SOCOMD_Coyote_Damage_eh {
//             init = QUOTE([_this select 0] call FUNC(JackelHitEH));
//         };    
//     };
//     class bma3_bushmaster_unarmed_F {
//         class bushie_Damage_eh {
//             init = QUOTE([_this select 0] call FUNC(BushMasterHitEH));
//         };    
//     };
// };