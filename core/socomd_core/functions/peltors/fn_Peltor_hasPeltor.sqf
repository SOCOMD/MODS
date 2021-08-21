#include "\z\ace\addons\main\script_macros.hpp"

params ["_user"];
// Handle headgear
_peltorValue = getNumber (configFile >> "CfgWeapons" >> headgear _user >> "advanced_peltors_protection");
if (_peltorValue == 0) then {
    _peltorValue = getNumber (configFile >> "CfgGlasses" >> goggles _user >> "advanced_peltors_protection");
};
hasPeltors = _peltorValue;
_peltorValue