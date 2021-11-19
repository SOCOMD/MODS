#include "macro.sqf"
    _headgear = "";
    _items = (ASORGS_CurrentInventory select GSVI_Items);
    for [{_i = 0}, {(_i < count _items) && (_headgear == "")}, {_i = _i + 1}] do
    {
        _item = _items select _i;
        if(getNumber (configFile >> "cfgWeapons" >> _item >> "ItemInfo" >> "Type") == IIT_HEADGEAR) then {
            _headgear = _item;
        };
    };
    _headgear
