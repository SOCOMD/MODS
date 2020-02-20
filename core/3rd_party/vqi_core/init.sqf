waitUntil {sleep 1; !isNil "bis_fnc_init"};
///////////////////////////////////////////
sleep 1;






// Functions, EventHandlers, Variables, Equipment
execVM "vqi_core\VQI-StartingOptions\vqi_core_functions.sqf";

// User Custom KeyBinding ---> set config?
execVM "vqi_core\XEH_postClientInit.sqf";

// Starting Options
execVM "vqi_core\VQI-StartingOptions\vqi_core.sqf";







sleep 1;
//systemChat "C.O.R.E Initialized -- Keybinding: SHIFT + C";
/////////////////////////////////////////////////
/* NOTES:


*/