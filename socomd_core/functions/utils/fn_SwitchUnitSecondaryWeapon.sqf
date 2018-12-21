_args = _this;
_player = _args select 0;
_weaponId = _args select 1;
_loadoutWeaponConfig = (configFile >> "CfgLoadoutWeapons" >> _weaponId);

//Return if no config is available
if(isNull _loadoutWeaponConfig) exitWith { };

_secondary = secondaryWeapon _player;

_secondaryMagazines = getArray(configFile >> "CfgWeapons" >> _secondary >> "magazines");

//Get magazines from magazine wells
{
    _magazineWellConfig = (configFile >> "CfgMagazineWells" >> _x);
    for "_i" from 0 to (count _magazineWellConfig) - 1 do {
        _primaryMagazines = _primaryMagazines + getArray(_magazineWellConfig select _i);
    };
}foreach(_primaryMagazineWells);

//Remove secondary magazines from player
{
    _secondaryMagazine = _x;
    {
        if(_x isKindOf [_secondaryMagazine, configFile >> 'CfgMagazines']) then {
             _player removeMagazines _x;
        };
    }foreach(magazines _player);
}foreach(_secondaryMagazines);

//Set Primary Weapon
_unitLoadout = getUnitLoadout _player;

_secondaryLoadout = _unitLoadout select 1;
if(count _secondaryLoadout <= 0) then {
    _secondaryLoadout = [_weaponId, "", "", "", [], [], ""];
}
else {
    _secondaryLoadout set [0, _weaponId];
    _secondaryLoadout set [4, []];
    _secondaryLoadout set [5, []];
};

_unitLoadout set [0, _secondaryLoadout];

[_player, _unitLoadout] call SOCOMD_fnc_SetUnitLoadout;

//Give Magazines
_loadoutMagazines = getArray (_loadoutWeaponConfig >> "magazines");
if(count _loadoutMagazines > 0) then  {
    {
        _magazine = _x select 0;
        _magazineCount = _x select 1;
        _player addMagazines[_magazine, _magazineCount];
    } forEach _loadoutMagazines;
};