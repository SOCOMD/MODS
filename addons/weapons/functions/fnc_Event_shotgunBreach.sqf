#include "script_component.hpp"
params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_gunner"];

if(!(_weapon == "SOCOMD_Shotgun")) exitWith {};

_target = cursorObject;
if (!(_target isKindOf "House")) exitWith {};

_position0 = positionCameraToWorld [0, 0, 0];
_position1 = positionCameraToWorld [0, 0, 10];

_intersections = [_target, "GEOM"] intersect [_position0, _position1];

private _door = toLower (_intersections select 0 select 0);

if (isNil "_door") exitWith {};

//Check if door is glass because then we need to find the proper location of the door so we can use it
if ((_door find "glass") != -1) then {
    _door = [10, _target, _door] call ace_interaction_fnc_getGlassDoor;
};

private _an = "";

//check pattern of door animationNames
private _ans = animationNames _target;
if (({_x == _door} count _ans) > 0) then {
    _an = _door + "";
};

if (({_x == "door_1_rot"} count _ans) > 0) then {
    _an = _door + "_rot";
};

if (_an == "") exitWith {};

_target animate [_an, 1, true];