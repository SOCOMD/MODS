#include "\z\ace\addons\main\script_macros.hpp"

TRACE_1("params",_this);

if (isNull ACE_player) exitWith {
    _peltorValue = 0;
};
// Handle headgear
_peltorValue = getNumber (configFile >> "CfgWeapons" >> headgear ACE_player >> "advanced_peltors_protection");
GVAR(hasPeltors) = _peltorValue;
if(_peltorValue == 0) then {
    _peltorValue = getNumber (configFile >> "CfgGlasses" >> goggles ACE_player >> "advanced_peltors_protection");
    GVAR(hasPeltors) = _peltorValue;
};