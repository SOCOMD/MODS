#include "script_component.hpp"
params ["_player","_weaponId"];

_loadoutId = _player getVariable ["SOCOMD_LOADOUTID","failed"];
_loadoutWeaponConfig = (missionConfigFile >> "CfgLoadoutWeapons" >> _weaponId);
if(isNull _loadoutWeaponConfig) then {
    _loadoutWeaponConfig = (configFile >> "CfgLoadoutWeapons" >> _weaponId);
};

//Return if no config is available
if(isNull _loadoutWeaponConfig) exitWith {};

private _extras = _player getVariable ["socomd_arsenal_extras","extras_none"];
if(getNumber( configFile >> "CfgWeapons" >> _extras >> "launcherAmmo") == 1) exitWith {};
private _loadoutMagazines = getArray (_loadoutWeaponConfig >> "magazines");

if(isNumber( _loadoutWeaponConfig >> "startLoaded") && (getNumber( _loadoutWeaponConfig >> "startLoaded") == 1)) then {
    (_loadoutMagazines select 0) set [1,((_loadoutMagazines select 0) select 1) - 1]
};
if(count _loadoutMagazines > 0) then  {
    {
        _magazine = _x select 0;
        _magazineCount = _x select 1;
        _player addMagazines[_magazine, _magazineCount];
    } forEach _loadoutMagazines;
};