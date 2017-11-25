_args = _this;
_player = _args select 0;
_weaponId = _args select 1;
_loadoutWeaponConfig = (configFile >> "CfgLoadoutWeapons" >> _weaponId);

//Return if no config is available
if(isNull _loadoutWeaponConfig) exitWith { };

_primary = primaryWeapon _player;
_secondary = secondaryWeapon _player;
_sidearm = handgunWeapon _player;

_primaryMagazines = getArray(configFile >> "CfgWeapons" >> _primary >> "magazines");
_primaryMagazines = _primaryMagazines + getArray(configFile >> "CfgWeapons" >> _primary >> "EGLM" >> "magazines");
_secondaryMagazines = getArray(configFile >> "CfgWeapons" >> _secondary >> "magazines");
_sidearmMagazines = getArray(configFile >> "CfgWeapons" >> _sidearm >> "magazines");

_currentMagazineSupport = _primaryMagazines + _secondaryMagazines + _sidearmMagazines;

//Remove unsupported magazines
{
   _player removeMagazines _x;
} forEach (_primaryMagazines);

//Remove current primary magazines
{
    _player removeMagazines _x;
} forEach _primaryMagazines;

//Set Primary Weapon
_unitLoadout = getUnitLoadout _player;

_primaryLoadout = _unitLoadout select 0;
if(count _primaryLoadout <= 0) then
{
    _primaryLoadout = [_weaponId, "", "", "", [], [], ""];
}
else
{
    _primaryLoadout set [0, _weaponId];
    _primaryLoadout set [4, []];
    _primaryLoadout set [5, []];
};

_unitLoadout set [0, _primaryLoadout];

[_player, _unitLoadout] call SOCOMD_fnc_SetUnitLoadout;

//Give Magazines
_loadoutMagazines = getArray (_loadoutWeaponConfig >> "magazines");
if(count _loadoutMagazines > 0) then 
{
    {
        _magazine = _x select 0;
        _magazineCount = _x select 1;
        _player addMagazines[_magazine, _magazineCount];
    } forEach _loadoutMagazines;
};