#include "\z\ace\addons\main\script_macros.hpp"


(_this select 0) params [["_justUpdateVolume", false]];

private _lowestVolume = 5;
private _setVolume = 0;
if (isNull ACE_player) exitWith {
    GVAR(hasPeltors) = 0;
};

// // Handle headgear
// _peltorValue = getNumber (configFile >> "CfgWeapons" >> headgear ACE_player >> "advanced_peltors_protection");

private _baseVolume;
{
	_baseVolume = _baseVolume min (_x select 1);
} forEach ace_common_setHearingCapabilityMap;

if (!_justUpdateVolume) then {
	if(GVAR(hasPeltors) == 1) then {
		_lowestVolume = 0.4;
		if(_baseVolume <= 1) then {
			_lowestVolume = _baseVolume * 0.4;
		};
	};
};
["peltor", _lowestVolume,true] call ace_common_fnc_setHearingCapability;