#include "macro.sqf"
    _nv = "";
    _items = (ASORGS_CurrentInventory select GSVI_Items);
    for [{_i = 0}, {(_i < count _items) && (_nv == "")}, {_i = _i + 1}] do
    {
        _item = _items select _i;
        if(getNumber (configFile >> "cfgWeapons" >> _item >> "ItemInfo" >> "Type") == IIT_NIGHTVISION) then {
            _nv = _item;
        }
    };
    _nv
