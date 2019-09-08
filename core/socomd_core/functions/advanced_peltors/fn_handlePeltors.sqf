#include "\z\ace\addons\main\script_macros.hpp"


(_this select 0) params [["_justUpdateVolume", false]];

// hint format ["%1",GVAR(hasPeltors)];
private _lowestVolume = 1;

if (isNull ACE_player) exitWith {
    _peltorValue = 0;
};
// Handle headgear
_peltorValue = getNumber (configFile >> "CfgWeapons" >> headgear ACE_player >> "advanced_peltors_protection");

if (!_justUpdateVolume) then {
		if (CBA_missionTime - _hearing_time3 < 4) exitWith {};
		_hearing_time3 = CBA_missionTime;
		if(_peltorValue isEqualTo 1) then {
			_lowestVolume = 0.3;
		};
};

0 fadeSound _lowestVolume;
0 fadeRadio _lowestVolume;
if (GVAR(allowFadeMusic)) then {
    0 fadeMusic _lowestVolume;
};
// Set Radio mod variables.
ACE_player setVariable ["tf_globalVolume", _lowestVolume];
if (!isNil "acre_api_fnc_setGlobalVolume") then { [_lowestVolume^0.33] call acre_api_fnc_setGlobalVolume; };