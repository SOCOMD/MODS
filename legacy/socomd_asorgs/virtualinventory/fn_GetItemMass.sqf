#include "macro.sqf"
private ["_item", "_class", "_mass", "_cfg"];
_item = _this;
_class = _this call ASORGS_fnc_GetClass;
if (_class == "") exitWith {0};
_mass = 0;
if(isClass (configFile >> "cfgWeapons" >> _class)) then {
    _cfg = (configFile >> "cfgWeapons" >> _class);
    if(isNumber (_cfg >> "ItemInfo" >> "mass")) then {
        _mass = getNumber (_cfg >> "ItemInfo" >> "mass");
    } else {
        if(isClass(_cfg >> "WeaponSlotsInfo")) then {
            _mass = getNumber ( _cfg >> "WeaponSlotsInfo" >> "mass");
        } else {
            _mass = getNumber (_cfg >> "mass");
        };
    };
} else {
    if(isClass (configFile >> "cfgMagazines" >> _class)) then {
        _mass = getNumber (configFile >> "cfgMagazines" >> _class >> "mass");
    } else {
        if(isClass (configFile >> "cfgGlasses" >> _class)) then {
            _mass = getNumber (configFile >> "cfgGlasses" >> _class >> "mass");
        } else {
            if(isClass (configFile >> "cfgVehicles" >> _class)) then { //must be a backpack
                _mass = getNumber (configFile >> "cfgVehicles" >> _class >> "mass");
            } else {
                diag_log format["ASORGS Error: Could not find mass for %1", _class];
            };
        };
    };
};
_mass
