_args = _this;
_player = _args select 0;
_weaponId = _args select 1;

_loadoutId = _player getVariable ["SOCOMD_LOADOUTID","failed"];
_loadoutWeaponConfig = (missionConfigFile >> "CfgLoadoutWeapons" >> _weaponId);
if(isNull _loadoutWeaponConfig) then {
    _loadoutWeaponConfig = (configFile >> "CfgLoadoutWeapons" >> _weaponId);
};

//Return if no config is available
if(isNull _loadoutWeaponConfig) exitWith {};



_loadoutMagazines = getArray (_loadoutWeaponConfig >> "magazines");

if(isNumber( _loadoutWeaponConfig >> "startLoaded") && (getNumber( _loadoutWeaponConfig >> "startLoaded") == 1)) then {
    _loadoutMagazines = _loadoutMagazines - 1;
};
if(count _loadoutMagazines > 0) then  {
    {
        _magazine = _x select 0;
        _magazineCount = _x select 1;
        _player addMagazines[_magazine, _magazineCount];
    } forEach _loadoutMagazines;
};