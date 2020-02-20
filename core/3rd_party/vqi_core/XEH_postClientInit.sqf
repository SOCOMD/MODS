// Custom CBA Key-binding User Setup
// https://resources.bisimulations.com/w/index.php?title=DIK_KeyCodes




//Key, [Shift, Ctrl, Alt]: C
["=VQI= C.O.R.E", "menu_core_full", "Player Options (full menu)", { _this execVM "vqi_core\VQI-StartingOptions\vqi_core_menu.sqf"; }, {}, [46, [true, false, false]]] call CBA_fnc_addKeybind;

//["VQI - C.O.R.E", "menu_core_full", "Radio - Request Exfil", { _this execVM "vqi_core\VQI-StartingOptions\vqi_addAction_coremenu.sqf"; }, {}, [46, [true, false, false]]] call CBA_fnc_addKeybind;











/////////////////////////////
/* NOTES:



*/



// Sample
// ["My Awesome Mod", "show_breathing_key", "Show Breathing", {_this call mymod_fnc_showGameHint}, {}, [DIK_B, [true, true, false]]] call CBA_fnc_addKeybind;