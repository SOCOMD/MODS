#include "\z\ace\addons\main\script_macros.hpp"


(_this select 0) params [["_justUpdateVolume", false]];

private _lowestVolume = 5;
private _multiplier = 0.25;
if (isNull ACE_player) exitWith {
    GVAR(hasPeltors) = 0;
};

if (!_justUpdateVolume) then {
	if(GVAR(hasPeltors) == 1) then {
		_lowestVolume = _multiplier;
	};
};
["peltor", _lowestVolume,true] call ace_common_fnc_setHearingCapability;