_args = _this;
_player = _args select 0;
_weaponId = _args select 1;

_loadoutWeaponConfig = (missionConfigFile >> "CfgLoadoutWeapons" >> _weaponId);
if(isNull _loadoutWeaponConfig) then {
    _loadoutWeaponConfig = (configFile >> "CfgLoadoutWeapons" >> _weaponId);
};

//Return if no config is available
if(isNull _loadoutWeaponConfig) exitWith {};

// Primary
//Give Magazines
_loadoutMagazines = getArray (_loadoutWeaponConfig >> "magazines");
if(count _loadoutMagazines > 0) then  {
    {
        _magazine = _x select 0;
        _magazineCount = _x select 1;
        if (_loadoutId ==  "SOCOMD_AO") then {
            _magazineCount = _magazineCount / 2;
        };
            _player addMagazines[_magazine, _magazineCount];
    } forEach _loadoutMagazines;
};

// commandGrenades
if (_loadoutId ==  "SOCOMD_Commander" || _loadoutId ==  "SOCOMD_2IC" || _loadoutId ==  "SOCOMD_Leader") then {
    commandGrenades = getArray (_loadoutWeaponConfig >> "commandGrenades");
    if(count commandGrenades > 0) then  {
        {
            _magazine = _x select 0;
            _magazineCount = _x select 1;
            _player addMagazines[_magazine, _magazineCount];
        } forEach commandGrenades;
    };
};
