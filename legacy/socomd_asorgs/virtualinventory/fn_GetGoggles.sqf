#include "macro.sqf"
    _goggles = "";
    _items = (ASORGS_CurrentInventory select GSVI_Items);
    for [{_i = 0}, {(_i < count _items) && (_goggles == "")}, {_i = _i + 1}] do
    {
        _item = _items select _i;
        if(isClass (configFile >> "cfgGlasses" >> _item ) ) then {
            _goggles = _item;
        }
    };
    _goggles
