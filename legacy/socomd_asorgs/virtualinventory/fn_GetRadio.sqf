#include "macro.sqf"
_Radio = "";
_items = (ASORGS_CurrentInventory select GSVI_Items);
for [{_i = 0}, {(_i < count _items) && (_Radio == "")}, {_i = _i + 1}] do
{
    _item = _items select _i;
    if(tolower(getText (configFile >> "cfgWeapons" >> _item >> "simulation")) == "ItemRadio") then {
        _Radio = _item;
    };
    //screws up with tfr0.7. hopefully above will do it anyway.
    /*if([_item, "tf_"] call ASORGS_fnc_StartsWith) then {
        _Radio = _item;
    };*/
    if([_item, "acre_"] call ASORGS_fnc_StartsWith) then {
        _Radio = _item;
    };
};
_Radio
