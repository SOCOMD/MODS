#include "script_component.hpp"
params ["_player","_weaponId"];

_loadoutId = _player getVariable ["SOCOMD_LOADOUTID","failed"];
_isTACP = isNumber(configFile >> "CfgLoadouts" >> "SOCOMD" >> _loadoutId >> "isTACP") && (getNumber(configFile >> "CfgLoadouts" >> "SOCOMD" >> _loadoutId >> "isTACP") == 1);
_isCommander =  isNumber(configFile >> "CfgLoadouts" >> "SOCOMD" >> _loadoutId >> "isCommander") && (getNumber(configFile >> "CfgLoadouts" >> "SOCOMD" >> _loadoutId >> "isCommander") == 1);

_weaponConfig = (configFile >> "CfgWeapons" >> _weaponId);
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
            _magazineCount = (_magazineCount / 2) max 4;
        };
            _player addMagazines[_magazine, _magazineCount];
    } forEach _loadoutMagazines;
};

// Grenades
if !(_isTACP) then {
    commandGrenades = getArray (_loadoutWeaponConfig >> "grenades");
    if(count commandGrenades > 0) then  {
        {
            _magazine = _x select 0;
            _magazineCount = _x select 1;
            _player addMagazines[_magazine, _magazineCount];
        } forEach commandGrenades;
    };
};
if (_isCommander) then {
    commandGrenades = getArray (_loadoutWeaponConfig >> "commandGrenades");
    if(count commandGrenades > 0) then  {
        {
            _magazine = _x select 0;
            _magazineCount = _x select 1;
            _player addMagazines[_magazine, _magazineCount];
        } forEach commandGrenades;
    };
};


if ( _isTACP) then {
        _player addMagazines["1Rnd_SmokeRed_Grenade_shell", 6];
        _player addMagazines["ACE_HuntIR_M203", 3];
    _player addMagazines["Laserbatteries", 1];
};
