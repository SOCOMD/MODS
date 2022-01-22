#include "script_component.hpp"

// if (!hasinterface) exitwith {
//     call FUNC(CommonInitServer);
// };
// call FUNC(CommonInitLocal);

//  this addEventHandler ["CuratorWaypointPlaced", {
//     params ["_curator", "_group", "_waypointID"];
//     if(hasInterface) then {
//         _group setGroupOwner _curator;
//     };
// }];
// ["SOCOMD walking speed","socomd_walk_speed_increase", "Increase speed", {_this call FUNC(changeWalkSpeed)}, "", [0xF8, [false, true, false]]] call CBA_fnc_addKeybind;
// ["SOCOMD walking speed","socomd_walk_speed_decrease", "Decrease speed", {_this call FUNC(changeWalkSpeed)}, "", [0xF9, [false, true, false]]] call CBA_fnc_addKeybind;
// ["SOCOMD walking speed","socomd_walk_speed_reset", "Reset speed", {_this call FUNC(changeWalkSpeed)}, ""] call CBA_fnc_addKeybind;
// ["SOCOMD walking speed","socomd_walk_speed_setMax", "Set Speed Max.", {_this call FUNC(changeWalkSpeed)}, ""] call CBA_fnc_addKeybind;
// ["SOCOMD walking speed","socomd_walk_speed_setMin", "Set Speed Min.", {_this call FUNC(changeWalkSpeed)}, ""] call CBA_fnc_addKeybind;

// ["SOCOMD_setAnimSpeedCoef", {
//     params ["_object", "_set"];
//     _object setAnimSpeedCoef _set;
// }] call CBA_fnc_addEventHandler;


// set all vehicles post init to allow the crew to remain in the vehicle and man the weapons / driver seat.
// this script could be enhanced to only look for main turret seats to apply this too so the driver ejects, but good enough for now  
