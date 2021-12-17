#include "script_component.hpp"
params ["_player"];
_loadoutId = _player getVariable ["SOCOMD_LOADOUTID","failed"];  
  
_unitConfig = (configFile >> "CfgLoadouts" >> "SOCOMD" >> _loadoutId);  
_uniformConfig = (_unitConfig >> "Uniform");  
_uniformInventoryConfig = (_uniformConfig >> "Inventory");  
_vestConfig = (_unitConfig >> "Vest");  
_vestInventoryConfig = (_vestConfig >> "Inventory");  
_backpackConfig = (_unitConfig >> "Backpack");  
_backpackInventoryConfig = (_backpackConfig >> "Inventory");  
 
private _configCfgWeapons = configFile >> "CfgWeapons";
for "_i" from 0 to (count _uniformInventoryConfig) - 1 do   
{   
    _loadoutItem = _uniformInventoryConfig select _i;  
    _type = getText (_loadoutItem >> "type");  
    _count = getNumber (_loadoutItem >> "count");
 
  
    if(isClass (configFile >> "CfgMagazines" >> _type))  then { 
        { 
            if(_type in getArray (_configCfgWeapons >> "Throw" >> _x >> "magazines"))  exitWith {
                (uniformContainer _player) addMagazineCargo [_type,_count]
            };
        } forEach getArray (_configCfgWeapons >> "Throw" >> "muzzles"); 
        { 
            if(_type in getArray (_configCfgWeapons >> "Put" >> _x >> "magazines"))  exitWith {
                (uniformContainer _player) addMagazineCargo [_type,_count]
            };
        } forEach getArray (_configCfgWeapons >> "Put" >> "muzzles"); 
    }; 
};
for "_i" from 0 to (count _vestInventoryConfig) - 1 do   
{   
    _loadoutItem = _vestInventoryConfig select _i;  
    _type = getText (_loadoutItem >> "type");  
    _count = getNumber (_loadoutItem >> "count");
 
  
    if(isClass (configFile >> "CfgMagazines" >> _type))  then { 
        { 
            if(_type in getArray (_configCfgWeapons >> "Throw" >> _x >> "magazines"))  exitWith {
                (vestContainer _player) addMagazineCargo [_type,_count]
            };
        } forEach getArray (_configCfgWeapons >> "Throw" >> "muzzles"); 
        { 
            if(_type in getArray (_configCfgWeapons >> "Put" >> _x >> "magazines"))  exitWith {
                (vestContainer _player) addMagazineCargo [_type,_count]
            };
        } forEach getArray (_configCfgWeapons >> "Put" >> "muzzles"); 
    }; 
};
for "_i" from 0 to (count _backpackInventoryConfig) - 1 do   
{   
    _loadoutItem = _backpackInventoryConfig select _i;  
    _type = getText (_loadoutItem >> "type");  
    _count = getNumber (_loadoutItem >> "count");
 
  
    if(isClass (configFile >> "CfgMagazines" >> _type))  then { 
        { 
            if(_type in getArray (_configCfgWeapons >> "Throw" >> _x >> "magazines"))  exitWith {
                (backpackContainer _player) addMagazineCargo [_type,_count]
            };
        } forEach getArray (_configCfgWeapons >> "Throw" >> "muzzles"); 
        { 
            if(_type in getArray (_configCfgWeapons >> "Put" >> _x >> "magazines"))  exitWith {
                (backpackContainer _player) addMagazineCargo [_type,_count]
            };
        } forEach getArray (_configCfgWeapons >> "Put" >> "muzzles"); 
    }; 
};