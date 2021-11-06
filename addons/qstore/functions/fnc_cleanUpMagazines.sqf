#include "script_component.hpp"
params ["_player"];
_currentLoadout = getUnitLoadout _player;

private _currentPrimaryLoadout = _currentLoadout select 0;
private _currentSecondaryLoadout = _currentLoadout select 1;
private _currentHandgunLoadout = _currentLoadout select 2;

private _currentPrimary = _currentPrimaryLoadout select 0;
private _currentSecondary = _currentSecondaryLoadout select 0;
private _currentHandgun = _currentHandgunLoadout select 0;

private _currentPrimaryCfg = (configFile >> "CfgLoadoutWeapons" >> _currentPrimary);
private _currentSecondaryCfg = (configFile >> "CfgLoadoutWeapons" >> _currentSecondary);
private _currentHandgunCfg = (configFile >> "CfgLoadoutWeapons" >> _currentHandgun);
// Remove Primary magazine from gun
if !(getNumber(_currentPrimaryCfg >> "startLoaded") isEqualTo 1) then {
    _currentPrimaryLoadout set [4, []];
} else {
    _magazine = ((getArray(_currentPrimaryCfg >> "magazines") select 0 ) select 0);
    _magazineCount = getNumber(configFile >>"CfgMagazines" >> _magazine >> "count");
    _currentPrimaryLoadout set [4, [_magazine,_magazineCount]];
};

// Remove Secondary magazine from gun
if !(getNumber(_currentSecondaryCfg >> "startLoaded") isEqualTo 1) then {
    _currentSecondaryLoadout set [4, []];
} else {
    _magazine = ((getArray(_currentSecondaryCfg >> "magazines") select 0 ) select 0);
    _magazineCount = getNumber(configFile >>"CfgMagazines" >> _magazine >> "count");
    _currentSecondaryLoadout set [4, [_magazine,_magazineCount]];
};


// Remove Handgun magazine from gun
if !(getNumber(_currentHandgunCfg >> "startLoaded") isEqualTo 1) then {
    _currentHandgunLoadout set [4, []];
} else {
    _magazine = ((getArray(_currentHandgunCfg >> "magazines") select 0 ) select 0);
    _magazineCount = getNumber(configFile >>"CfgMagazines" >> _magazine >> "count");
    _currentHandgunLoadout set [4, [_magazine,_magazineCount]];
};

_currentLoadout set [0,_currentPrimaryLoadout];
_currentLoadout set [1,_currentSecondaryLoadout];
_currentLoadout set [2,_currentHandgunLoadout];

_player setUnitLoadout _currentLoadout;
systemChat str (getNumber(_currentSecondaryCfg >> "startLoaded"));