#include "script_component.hpp"
params ["_player"];
_weapons = [];
_weapons = weaponCargo uniformContainer _player;
_weapons = _weapons+ weaponCargo vestContainer _player;
_weapons = _weapons+ weaponCargo backpackContainer _player;

_loadoutId = _player getVariable ["SOCOMD_LOADOUTID","failed"];
_isTACP = isNumber(configFile >> "CfgLoadouts" >> "SOCOMD" >> _loadoutId >> "isTACP") && (getNumber(configFile >> "CfgLoadouts" >> "SOCOMD" >> _loadoutId >> "isTACP") == 1);
_isCommander =  isNumber(configFile >> "CfgLoadouts" >> "SOCOMD" >> _loadoutId >> "isCommander") && (getNumber(configFile >> "CfgLoadouts" >> "SOCOMD" >> _loadoutId >> "isCommander") == 1);

{
    // Current result is saved in variable _x
    _weaponId = _x;
    _loadoutWeaponConfig = (missionConfigFile >> "CfgLoadoutWeapons" >> _weaponId);
    if(isNull _loadoutWeaponConfig) then {
        _loadoutWeaponConfig = (configFile >> "CfgLoadoutWeapons" >> _weaponId);
    };

    //Return if no config is available
    if(isNull _loadoutWeaponConfig) exitWith {};

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

    // Grenades
    _grenades = getArray (_loadoutWeaponConfig >> "grenades");
    if(count _grenades > 0) then  {
        if !(_isTACP) then {
            {
                _magazine = _x select 0;
                _magazineCount = _x select 1;
                _player addMagazines[_magazine, _magazineCount];
            } forEach _grenades;
            
        } else {
            _player addMagazines["1Rnd_SmokeRed_Grenade_shell", 6];
        };
    };
    if (_isCommander) then {
        _commandGrenades = getArray (_loadoutWeaponConfig >> "commandGrenades");
        if(count _commandGrenades > 0) then  {
            {
                _magazine = _x select 0;
                _magazineCount = _x select 1;
                _player addMagazines[_magazine, _magazineCount];
            } forEach _commandGrenades;
        };
    };


} forEach _weapons;

