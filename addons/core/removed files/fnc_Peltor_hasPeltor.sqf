#include "script_component.hpp"

params ["_user", "_new", "_old"];
_newHeadgear = _new select 6;
_oldHeadgear = _old select 6;
_newFacewear = _new select 7;
_oldFacewear = _old select 7;
// Handle headgear
_peltorValue = getNumber (configFile >> "CfgWeapons" >> headgear _user >> "advanced_peltors_protection");
if (_peltorValue == 0) then {
    _peltorValue = getNumber (configFile >> "CfgGlasses" >> goggles _user >> "advanced_peltors_protection");
};

if (_peltorValue == 1) then {
    if((_newHeadgear == _oldHeadgear) || _newFacewear == _oldFacewear) exitWith{
        [_peltorValue, 0]
    };
};
hasPeltors = _peltorValue;
[_peltorValue, 1]