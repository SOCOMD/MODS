[] spawn {
	waitUntil { !(isNil "TCL_Debug") };
	[] execVM "include\tcl\tcl_debug.sqf";
};

[] spawn {
	waitUntil { !(isNil "TCL_Feature") };
	[] execVM "include\tcl\tcl_feature.sqf";
};

[] spawn {
	waitUntil { !(isNil "TCL_FX") };
	[] execVM "include\tcl\tcl_fx.sqf";
};

[] spawn {
	waitUntil { !(isNil "TCL_IQ") };
	[] execVM "include\tcl\tcl_iq.sqf";
};

[] spawn {
	waitUntil { !(isNil "TCL_Radio") };
	[] execVM "include\tcl\tcl_radio.sqf";
};

[] spawn {
	waitUntil { !(isNil "TCL_System") };
	[] execVM "include\tcl\tcl_system.sqf";
};

[] spawn {
	waitUntil { !(isNil "TCL_Tweak") };
	[] execVM "include\tcl\tcl_tweak.sqf";
};

[] spawn {
	waitUntil { !(isNil "TCL_AI") };
	[] execVM "include\tcl\tcl_ai.sqf";
};