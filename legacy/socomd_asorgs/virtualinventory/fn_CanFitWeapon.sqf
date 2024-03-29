#include "macro.sqf"
private["_allMuzzles", "_mag", "_placed", "_item", "_class"];
_item = _this;
_class = _this call ASORGS_fnc_GetClass;
//find all the magazines for each muzzle in each gun
_allMuzzles = [];    
_allMuzzles = _allMuzzles + ((ASORGS_CurrentInventory select GSVI_Primary) call ASORGS_fnc_GetWeaponMuzzleMagazines);
_allMuzzles = _allMuzzles + ((ASORGS_CurrentInventory select GSVI_Launcher) call ASORGS_fnc_GetWeaponMuzzleMagazines);
_allMuzzles = _allMuzzles + ((ASORGS_CurrentInventory select GSVI_Handgun) call ASORGS_fnc_GetWeaponMuzzleMagazines);
//remove muzzles that already have a magazine
{
    _mag = _x;
    _placed = false;
    for [{_i = 0}, {(_i < (count _allMuzzles)) && !_placed}, {_i = _i + 1}] do {
        if(_mag in (_allMuzzles select _i)) then {
            _allMuzzles set [_i, "DEL"];
            _placed = true;
        };
    };
    _allMuzzles = _allMuzzles - ["DEL"];
} forEach (ASORGS_CurrentInventory select GSVI_Magazines);

//find if any remaining muzzles have the ammo type in them
_ret = false;
for [{_i = 0}, {(_i < (count _allMuzzles)) && !_ret}, {_i = _i + 1}] do {
    if(_class in (_allMuzzles select _i)) then {
        _ret = true;
    };
};
_ret
