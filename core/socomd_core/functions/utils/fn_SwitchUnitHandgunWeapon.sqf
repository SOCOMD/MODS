_args = _this;
_player = _args select 0;
_weaponId = _args select 1;

_loadoutWeaponConfig = (missionConfigFile >> "CfgLoadoutWeapons" >> _weaponId);
if(isNull _loadoutWeaponConfig) then {
    _loadoutWeaponConfig = (configFile >> "CfgLoadoutWeapons" >> _weaponId);
};

//Return if no config is available
if(isNull _loadoutWeaponConfig) exitWith {};


_handgunMagazines = ["11Rnd_45ACP_Mag","ACWP_19Rnd_9x21_Mag_glock_sim","ACWP_19Rnd_9x21_Mag_glock","ACWP_13Rnd_9x21_Mag_HP","ACWP_18Rnd_9x21_Mag_USP"];
_handgunMagazines = _handgunMagazines + getArray(configFile >> "CfgWeapons" >> _weaponId >> "magazines");
_handgunMagazines = _handgunMagazines + getArray(configFile >> "CfgWeapons" >> _weaponId >> "EGLM" >> "magazines");
_primaryMagazineWells = getArray(configFile >> "CfgWeapons" >> _weaponId >> "magazineWell");

//Get magazines from magazine wells
{
    _magazineWellConfig = (configFile >> "CfgMagazineWells" >> _x);
    for "_i" from 0 to (count _magazineWellConfig) - 1 do {
        _handgunMagazines = _handgunMagazines + getArray(_magazineWellConfig select _i);
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
}foreach(_handgunMagazines);

//Set Handgun Weapon
_loadoutMagazines = getArray (_loadoutWeaponConfig >> "magazines");
_unitLoadout = getUnitLoadout _player;

_primaryLoadout = _unitLoadout select 2;
if(count _primaryLoadout <= 0) then {
    _primaryLoadout = [_weaponId, "", "", "", [_loadoutMagazines#0#0,1000000], [], ""];
}
else {
    _primaryLoadout set [0, _weaponId];
    _primaryLoadout set [4, [_loadoutMagazines#0#0,1000000]];
    _primaryLoadout set [5, []];
};

_unitLoadout set [2, _primaryLoadout];

[_player, _unitLoadout] call SOCOMD_fnc_SetUnitLoadout;

//Give Magazines
if(count _loadoutMagazines > 0) then  {
    {
        _magazine = _x select 0;
        _magazineCount = _x select 1;
        _player addMagazines[_magazine, _magazineCount];
    } forEach _loadoutMagazines;
};