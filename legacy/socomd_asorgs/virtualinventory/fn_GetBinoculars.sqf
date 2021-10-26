#include "macro.sqf"
    _binocs = "";
    _items = (ASORGS_CurrentInventory select GSVI_Items);
    for [{_i = 0}, {(_i < count _items) && (_binocs == "")}, {_i = _i + 1}] do
    {
        _item = _items select _i;
        if((getNumber (configFile >> "cfgWeapons" >> _item >> "Type") == IT_BINOCULAR) 
        && (getNumber (configFile >> "cfgWeapons" >> _item >> "ItemInfo" >> "Type") != IIT_NIGHTVISION)) then {
            _binocs = _item;
        };
    };
    _binocs
