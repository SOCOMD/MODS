#include "script_component.hpp"
params ["_objects", "_mode"];

private _units = [];

{
    _units append crew _x;
} forEach _objects;

private _fnc_filter = [{true}, {isPlayer _x}, {!isPlayer _x}] select _mode;

{
    if (alive _x && {_x isKindOf "CAManBase"} && _fnc_filter) then {
        _x setVariable ['SOCOMD_REVIVAL', SOCOMD_medical_persistantReviveTimer, true];
    };
} forEach (_units arrayIntersect _units);