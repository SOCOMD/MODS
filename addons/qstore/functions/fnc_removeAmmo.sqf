#include "script_component.hpp"
params ["_player"];
ACE_Player getVariable  ["socomd_prev_weapons",[(primaryWeapon _player),(secondaryWeapon _player),(handgunWeapon _player)]] params ["_primaryWeapon","_secondaryWeapon","_handgunWeapon"];
private _configFile = configFile >> "CfgLoadoutWeapons";
{
    if (isClass(_configFile >> _x)) then {
        private _ammo = getArray(_configFile >> _x >> "magazines");
        {
            { 
                for [{ _i = 0 }, { _i < (_x select 1) }, { _i = _i + 1 }] do { _player removeMagazine (_x select 0) }
            } forEach _x;
        } forEach _ammo;
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