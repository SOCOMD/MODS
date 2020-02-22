// Custom CBA Key-binding User Setup
// https://resources.bisimulations.com/w/index.php?title=DIK_KeyCodes

//Key, [Shift, Ctrl, Alt]: L


["=VQI= L.E.A.P", "cut_main_chute", "Main Parachute - CUT AWAY", {_this execVM "vqi_halo\VQI-DemonDropper\Equipment\Parachute\vqi_halo_parachute_cutaway.sqf";}, {}, [38, [true, true, false]]] call CBA_fnc_addKeybind;

//Key, [Shift, Ctrl, Alt]: H
//["SpookWarCom - HALO/ParaJump", "Altimeter (Temporary)", { _this execVM "\vqi_halo\VQI-DemonDropper\Altimeter\vqi_altimeter_key_temp.sqf"; }, [35, [false, false, true]]] call CBA_fnc_registerKeybind;

//Key, [Shift, Ctrl, Alt]: A
//["SpookWarCom - HALO/ParaJump", "Altimeter (Toggle On/Off)", { _this execVM "\vqi_halo\VQI-DemonDropper\Altimeter\vqi_altimeter_key_toggle.sqf"; }, [30, [false, false, true]]] call CBA_fnc_registerKeybind;

//Key, [Shift, Ctrl, Alt]: O
//["SpookWarCom - HALO/ParaJump", "Altimeter (hold)", { _this execVM "\vqi_halo\VQI-DemonDropper\Altimeter\vqi_altimeter_hold.sqf"; }, [24, [false, false, false]]] call CBA_fnc_registerKeybind;












// Syntax:  Key, [Shift, Ctrl, Alt]:
// ["MOD MAIN", "sub_classname_id", "MOD SUB", {_this execVM "example\file\path\tag_mod_filename.sqf";}, {}, [35, [true, false, false]]] call CBA_fnc_addKeybind;

///////////////////////
/* NOTES:



*/