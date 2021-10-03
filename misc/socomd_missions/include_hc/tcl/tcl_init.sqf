[] spawn {
    waitUntil { !(isNil "TCL_Debug") };
    [] execVM "tcl\tcl_debug.sqf";
};

[] spawn {
    waitUntil { !(isNil "TCL_Feature") };
    [] execVM "tcl\tcl_feature.sqf";
};

[] spawn {
    waitUntil { !(isNil "TCL_FX") };
    [] execVM "tcl\tcl_fx.sqf";
};

[] spawn {
    waitUntil { !(isNil "TCL_IQ") };
    [] execVM "tcl\tcl_iq.sqf";
};

[] spawn {
    waitUntil { !(isNil "TCL_Radio") };
    [] execVM "tcl\tcl_radio.sqf";
};

[] spawn {
    waitUntil { !(isNil "TCL_System") };
    [] execVM "tcl\tcl_system.sqf";
};

[] spawn {
    waitUntil { !(isNil "TCL_Tweak") };
    [] execVM "tcl\tcl_tweak.sqf";
};

[] spawn {
    waitUntil { !(isNil "TCL_AI") };
    [] execVM "tcl\tcl_ai.sqf";
};