#include "script_component.hpp"
params ["_player","_weaponId"];

_loadoutId = _player getVariable ["SOCOMD_LOADOUTID","failed"];
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
        if (_loadoutId ==  "SOCOMD_AO" || _loadoutId ==  "SOCOMD_SSO_AO") then {
            _magazineCount = _magazineCount / 2;
        };
            _player addMagazines[_magazine, _magazineCount];
    } forEach _loadoutMagazines;
};

// commandGrenades
if ( isNumber(configFile >> "CfgLoadouts" >> "SOCOMD" >> _loadoutId >> "isCommander") && (getNumber(configFile >> "CfgLoadouts" >> "SOCOMD" >> _loadoutId >> "isCommander") == 1)) then {
    commandGrenades = getArray (_loadoutWeaponConfig >> "commandGrenades");
    if(count commandGrenades > 0) then  {
        {
            _magazine = _x select 0;
            _magazineCount = _x select 1;
            _player addMagazines[_magazine, _magazineCount];
        } forEach commandGrenades;
    };
};
