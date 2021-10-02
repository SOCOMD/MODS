#include "script_component.hpp"

if (!hasinterface) exitwith {
    call FUNC(CommonInitServer)
};

hasPeltors = 0;
hasPeltorsOn = 0;
// Update protection on possible helmet change
["loadout", {
    params ["_player", "", ""];
    _response = [_player] call FUNC(Peltor_hasPeltor);
    _hasPeltors = _response select 0;
    _peltorsChanged = _response select 1;
    if (_hasPeltors == 0) then {
        [1] call FUNC(Peltor_setVolume);
        hasPeltorsOn = 0;
    } else {
        if (_peltorsChanged == 1) then {
            hasPeltorsOn = 1;
        };
    };
}, false] call CBA_fnc_addplayerEventHandler;

["loadout", {
    params ["_player", "_new"];
    [_player, _new] call FUNC(Action_placeCustomPatch);
}, false] call CBA_fnc_addplayerEventHandler;


// overrides to get our functions 
 
 [{
     _entry = ["cTab", "ifSecondary"] call CBA_fnc_getKeybind;
     !isNil "_entry"
    },{
    ["cTab","ifSecondary",["Toggle Secondary Interface","Open cTab device in interactable mode"],{call cTab_fnc_onIfSecondaryPressed; call FUNC(Action_ToggleAndroid)},"",[cTab_key_if_secondary_scancode,cTab_key_if_secondary_modifiers],false] call cba_fnc_addKeybind;
 },[_entry]] call CBA_fnc_waitUntilAndExecute;

 this addEventHandler ["CuratorWaypointPlaced", {
    params ["_curator", "_group", "_waypointID"];
    if(hasInterface) then {
        _group setGroupOwner _curator;
    };
}];
["SOCOMD walking speed","socomd_walk_speed_increase", "Increase speed", {_this call FUNC(changeWalkSpeed)}, "", [0xF8, [false, true, false]]] call CBA_fnc_addKeybind;
["SOCOMD walking speed","socomd_walk_speed_decrease", "Decrease speed", {_this call FUNC(changeWalkSpeed)}, "", [0xF9, [false, true, false]]] call CBA_fnc_addKeybind;
["SOCOMD walking speed","socomd_walk_speed_reset", "Reset speed", {_this call FUNC(changeWalkSpeed)}, ""] call CBA_fnc_addKeybind;
["SOCOMD walking speed","socomd_walk_speed_setMax", "Set Speed Max.", {_this call FUNC(changeWalkSpeed)}, ""] call CBA_fnc_addKeybind;
["SOCOMD walking speed","socomd_walk_speed_setMin", "Set Speed Min.", {_this call FUNC(changeWalkSpeed)}, ""] call CBA_fnc_addKeybind;

["SOCOMD_setAnimSpeedCoef", {
    params ["_object", "_set"];
    _object setAnimSpeedCoef _set;
}] call CBA_fnc_addEventHandler;
