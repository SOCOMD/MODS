_args = _this;
_player = _args select 0;
_weaponId = _args select 1;

_loadoutWeaponConfig = (missionConfigFile >> "CfgLoadoutWeapons" >> _weaponId);
if(isNull _loadoutWeaponConfig) then {
    _loadoutWeaponConfig = (configFile >> "CfgLoadoutWeapons" >> _weaponId);
};

//Return if no config is available
if(isNull _loadoutWeaponConfig) exitWith {};

_primaryMagazines = getArray(configFile >> "CfgWeapons" >> _weaponId >> "magazines");
_primaryMagazines = _primaryMagazines + getArray(configFile >> "CfgWeapons" >> _weaponId >> "EGLM" >> "magazines");
_primaryMagazineWells = getArray(configFile >> "CfgWeapons" >> _weaponId >> "magazineWell");

//Get magazines from magazine wells
{
    _magazineWellConfig = (configFile >> "CfgMagazineWells" >> _x);
    for "_i" from 0 to (count _magazineWellConfig) - 1 do {
        _primaryMagazines = _primaryMagazines + getArray(_magazineWellConfig select _i);
    };
}foreach(_primaryMagazineWells);

//Remove primary magazines from player
{
    _primaryMagazine = _x;
    {
        if(_x isKindOf [_primaryMagazine, configFile >> 'CfgMagazines']) then {
             _player removeMagazines _x;
        };
    }foreach(magazines _player);
}foreach(_primaryMagazines);


_loadoutMagazines = getArray (_loadoutWeaponConfig >> "magazines");
_loadoutMagazines deleteAt 0;
if(count _loadoutMagazines > 0) then  {
    {
        _magazine = _x select 0;
        _magazineCount = _x select 1;
        _player addMagazines[_magazine, _magazineCount];
    } forEach _loadoutMagazines;
};