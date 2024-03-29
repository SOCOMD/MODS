#include "macro.sqf"
private ["_allMuzzles", "_currentMags", "_placed", "_mag", "_items", "_t", "_i", "_x"];
_allMuzzles = ((ASORGS_CurrentInventory select GSVI_Primary) call ASORGS_fnc_GetWeaponMuzzleMagazines);
_allMuzzles = _allMuzzles + ((ASORGS_CurrentInventory select GSVI_Launcher) call ASORGS_fnc_GetWeaponMuzzleMagazines);
_allMuzzles = _allMuzzles + ((ASORGS_CurrentInventory select GSVI_Handgun) call ASORGS_fnc_GetWeaponMuzzleMagazines);
_currentmags = (ASORGS_CurrentInventory select GSVI_Magazines);
_placed = false;
{
    _mag = _x;
    for [{_i = 0}, {(_i < (count _allMuzzles)) && !_placed}, {_i = _i + 1}] do {
        if(_mag in (_allMuzzles select _i)) then {
            _allMuzzles set [_i, "DEL"];
            _placed = true;
        };
    };
    _allMuzzles = _allMuzzles - ["DEL"];
    //nowhere for this mag to go, so delete it
    if(!_placed) then {_currentmags = _currentmags - [_mag]; };
    ASORGS_WeightChanged = true;
} forEach _currentMags;
_items = (ASORGS_CurrentInventory select GSVI_VestItems);
for [{_t = 0}, {(_t < (count _items)) && !_placed}, {_t = _t + 1}] do {
    _mag = (_items select _t);
    for [{_i = 0}, {(_i < (count _allMuzzles)) && !_placed}, {_i = _i + 1}] do {
        if(_mag in (_allMuzzles select _i)) then {
            //remove the muzzle so 2 mags aren't added to it
            _allMuzzles set [_i, "DEL"];
            _allMuzzles = _allMuzzles - ["DEL"];
            _currentmags set [count _currentmags, _mag];
        
            _items set [_t, "DEL"];
            _items = _items - ["DEL"];                
            _placed = true;
            ASORGS_VestCapacityChanged = true;
        };
    };
};
ASORGS_CurrentInventory set [GSVI_VestItems, _items];
_items = (ASORGS_CurrentInventory select GSVI_UniformItems);
for [{_t = 0}, {(_t < (count _items)) && !_placed}, {_t = _t + 1}] do {
    _mag = (_items select _t);
    for [{_i = 0}, {(_i < (count _allMuzzles)) && !_placed}, {_i = _i + 1}] do {
        if(_mag in (_allMuzzles select _i)) then {
            //remove the muzzle so 2 mags aren't added to it
            _allMuzzles set [_i, "DEL"];
            _allMuzzles = _allMuzzles - ["DEL"];
            _currentmags set [count _currentmags, _mag];
            _items set [_t, "DEL"];
            _items = _items - ["DEL"];                
            _placed = true;
            ASORGS_UniformCapacityChanged = true;
        };
    };
};
ASORGS_CurrentInventory set [GSVI_UniformItems, _items];
_items = (ASORGS_CurrentInventory select GSVI_BackpackItems);
for [{_t = 0}, {(_t < (count _items)) && !_placed}, {_t = _t + 1}] do {
    _mag = (_items select _t);
    for [{_i = 0}, {(_i < (count _allMuzzles)) && !_placed}, {_i = _i + 1}] do {
        if(_mag in (_allMuzzles select _i)) then {
            //remove the muzzle so 2 mags aren't added to it
            _allMuzzles set [_i, "DEL"];
            _allMuzzles = _allMuzzles - ["DEL"];
            _currentmags set [count _currentmags, _mag];
            _items set [_t, "DEL"];
            _items = _items - ["DEL"];                
            _placed = true;
            ASORGS_BackpackCapacityChanged = true;
        };
    };
};
ASORGS_CurrentInventory set [GSVI_BackpackItems, _items];
ASORGS_CurrentInventory set [GSVI_Magazines, _currentmags];
