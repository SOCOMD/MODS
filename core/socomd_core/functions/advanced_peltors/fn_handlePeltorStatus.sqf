#include "\z\ace\addons\main\script_macros.hpp"

TRACE_1("params",_this);

if (isNull ACE_player) exitWith {
    _peltorValue = 0;
};
// Handle headgear
_peltorValue = getNumber (configFile >> "CfgWeapons" >> headgear ACE_player >> "advanced_peltors_protection");
_hasPeltors = _peltorValue;