["SOCOMD walking speed","socomd_walk_speed_increase", "Increase speed", {_this call SOCOMD_fnc_changeWalkSpeed}, "", [0xF8, [false, true, false]]] call CBA_fnc_addKeybind;
["SOCOMD walking speed","socomd_walk_speed_decrease", "Decrease speed", {_this call SOCOMD_fnc_changeWalkSpeed}, "", [0xF9, [false, true, false]]] call CBA_fnc_addKeybind;
["SOCOMD walking speed","socomd_walk_speed_reset", "Reset speed", {_this call SOCOMD_fnc_changeWalkSpeed}, "", [0x2A, [false, false, false]]] call CBA_fnc_addKeybind;
["SOCOMD walking speed","socomd_walk_speed_setMax", "Set Speed Max.", {_this call SOCOMD_fnc_changeWalkSpeed}, ""] call CBA_fnc_addKeybind;
["SOCOMD walking speed","socomd_walk_speed_setMin", "Set Speed Min.", {_this call SOCOMD_fnc_changeWalkSpeed}, ""] call CBA_fnc_addKeybind;

["SOCOMD_setAnimSpeedCoef", {
    params ["_object", "_set"];
    _object setAnimSpeedCoef _set;
}] call CBA_fnc_addEventHandler;
