#include "script_component.hpp"
params ["_unit", "_killer", "_instigator", "_useEffects"];

_blacklist = [
    "launch_RPG7_F"
];

_loadout = getUnitLoadout _unit;
_secondaryLoadout = _loadout select 1;
_secondary = _secondaryLoadout select 0;
if(!(_secondary in _blacklist)) exitWith {};

_secondary = format["broken_%1", _secondary];
_config = configName (configFile >> "CfgWeapons" >> _secondary);
if(_config == "") exitWith {};

_secondaryLoadout set [0, _secondary];
_loadout set [1, _secondaryLoadout];
[_unit, _loadout] call EFUNC(qstore,SetUnitLoadout);
