#include "script_component.hpp"
params ["_player","_weaponId"];

_loadoutWeaponConfig = (missionConfigFile >> "CfgLoadoutWeapons" >> _weaponId);
if(isNull _loadoutWeaponConfig) then {
    _loadoutWeaponConfig = (configFile >> "CfgLoadoutWeapons" >> _weaponId);
};

//Return if no config is available
if(isNull _loadoutWeaponConfig) exitWith {};

//Set Handgun Weapon
_loadoutMagazines = getArray (_loadoutWeaponConfig >> "magazines");
//Give Magazines
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