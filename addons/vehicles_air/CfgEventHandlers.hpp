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


class Extended_Engine_EventHandlers {
    class SOCOMD_DRAGONFLY_A {
        engine = QUOTE([_this select 0] call FUNC(Event_heliMassBalance));
    };

    class SOCOMD_FIREFLY_A {
        engine = QUOTE([_this select 0] call FUNC(Event_heliMassBalance));
    };

    class SOCOMD_HURRICANE_A {
        engine = QUOTE([_this select 0] call FUNC(Event_heliMassBalance));
    };
};

class Extended_GetIn_EventHandlers {
    class SOCOMD_DRAGONFLY_A {
        engine = QUOTE([_this select 0] call FUNC(Event_heliMassBalance));
    };

    class SOCOMD_FIREFLY_A {
        engine = QUOTE([_this select 0] call FUNC(Event_heliMassBalance));
    };

    class SOCOMD_HURRICANE_A {
        engine = QUOTE([_this select 0] call FUNC(Event_heliMassBalance));
    };
};