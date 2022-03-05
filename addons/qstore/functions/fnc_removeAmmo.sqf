#include "script_component.hpp"
params ["_player"];
_player getVariable  ["socomd_prev_weapons",[(primaryWeapon _player),(secondaryWeapon _player),(handgunWeapon _player)]] params ["_primaryWeapon","_secondaryWeapon","_handgunWeapon"];
_loadoutId = _player getVariable ["SOCOMD_LOADOUTID","failed"];
_isTACP = isNumber(configFile >> "CfgLoadouts" >> "SOCOMD" >> _loadoutId >> "isTACP") && (getNumber(configFile >> "CfgLoadouts" >> "SOCOMD" >> _loadoutId >> "isTACP") == 1);
_isCommander =  isNumber(configFile >> "CfgLoadouts" >> "SOCOMD" >> _loadoutId >> "isCommander") && (getNumber(configFile >> "CfgLoadouts" >> "SOCOMD" >> _loadoutId >> "isCommander") == 1);

private _configFile = configFile >> "CfgLoadoutWeapons";
{
    if (isClass(_configFile >> _x)) then {
        private _ammo = getArray(_configFile >> _x >> "magazines");
        private _grenades = getArray(_configFile >> _x >> "grenades");
        private _commandGrenades = getArray(_configFile >> _x >> "commandGrenades");
        private _tacpGrenades = getArray(_configFile >> _x >> "tacpGrenades");
        {
            for [{ _i = 0 }, { _i < (_x select 1) }, { _i = _i + 1 }] do { _player removeMagazine (_x select 0) }   
        } forEach _ammo;
        if (!_isTACP && {count _grenades > 0}) then {
            {
                for [{ _i = 0 }, { _i < (_x select 1) }, { _i = _i + 1 }] do { _player removeMagazine (_x select 0) }   
            } forEach _grenades;
        };
        if (_isCommander && {count _commandGrenades > 0}) then {
            {
                for [{ _i = 0 }, { _i < (_x select 1) }, { _i = _i + 1 }] do { _player removeMagazine (_x select 0) }   
            } forEach _commandGrenades;
        };
        if (_isTACP && {count _tacpGrenades > 0}) then {
            {
                for [{ _i = 0 }, { _i < (_x select 1) }, { _i = _i + 1 }] do { _player removeMagazine (_x select 0) }   
            } forEach _tacpGrenades;
        };
    };
} forEach [_primaryWeapon,_secondaryWeapon,_handgunWeapon];
private _extraAmmo = _player getVariable  ["socomd_prev_arsenal_extras", "extras_none"]; 
private _extraAmmoCfg = configFile >> "CfgWeapons" >> _extraAmmo; 
private _extraUniform = getArray(_extraAmmoCfg >> "uniform"); 
private _extraVest = getArray(_extraAmmoCfg >> "vest"); 
private _extraBag = getArray(_extraAmmoCfg >> "bag"); 
{ 
    { 
        for [{ _i = 0 }, { _i < (_x select 1) }, { _i = _i + 1 }] do { _player removeMagazine (_x select 0) }
    } forEach _x;
} forEach [_extraUniform, _extraVest, _extraBag]; 