#include "macro.sqf"
    _Watch = "";
    _items = (ASORGS_CurrentInventory select GSVI_Items);
    for [{_i = 0}, {(_i < count _items) && (_Watch == "")}, {_i = _i + 1}] do
    {
        _item = _items select _i;
        if(getText (configFile >> "cfgWeapons" >> _item >> "simulation") == "ItemWatch") then {
            _Watch = _item;
        };
    };
    _Watch
