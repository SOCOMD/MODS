#include "script_component.hpp"
params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile"];

_blacklist = [
    "broken_launch_RPG7_F"
];

if(_unit != player) exitWith {};

if(!(_weapon in _blacklist)) exitWith {};

_loadoutId = player getVariable ["SOCOMD_LOADOUTID", ""];
if(_loadoutId == "") exitWith {};

_rand = random 100;
_safe = 0;
if(_rand < 40) then {
    _safe = 1;
};

if(_safe == 1) exitWith {};

deleteVehicle _projectile;

_explosion = "R_PG7_F" createVehicle (getPosASL player);

_unitLoadout = getUnitLoadout player;
_secondaryLoadout = ["", "", "", "", ["", 0], ["", 0], ""];
_unitLoadout set [1, _secondaryLoadout];
[player, _unitLoadout] call EFUNC(qstore,SetUnitLoadout);
