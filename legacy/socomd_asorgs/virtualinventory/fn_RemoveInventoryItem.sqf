#include "macro.sqf"
private ["_item", "_class", "_removed", "_backpackitems", "_vestitems", "_uniformitems", "_magazines", "_i"];
_item = _this select 0;
_class = _item call ASORGS_fnc_GetClass;
_removed = false;
_backpackitems = ASORGS_CurrentInventory select GSVI_BackpackItems;
for[{_i = 0}, {(_i < (count _backpackitems)) && !_removed}, {_i = _i + 1}] do {
    if((_backpackitems select _i) == _class) then {
        _backpackitems set [_i, "DEL"];
        _backpackitems = _backpackitems - ["DEL"];
        ASORGS_CurrentInventory set [GSVI_BackpackItems, _backpackitems];
        _removed = true;
        ASORGS_BackpackCapacityChanged = true;
    };
};
_vestitems = ASORGS_CurrentInventory select GSVI_VestItems;
for[{_i = 0}, {(_i < (count _vestitems)) && !_removed}, {_i = _i + 1}] do {
    if((_vestitems select _i) == _class) then {
        _vestitems set [_i, "DEL"];
        _vestitems = _vestitems - ["DEL"];
        ASORGS_CurrentInventory set [GSVI_VestItems, _vestitems];
        _removed = true;
        ASORGS_VestCapacityChanged = true;
    };
};
_uniformitems = ASORGS_CurrentInventory select GSVI_UniformItems;
for[{_i = 0}, {(_i < (count _uniformitems)) && !_removed}, {_i = _i + 1}] do {
    if((_uniformitems select _i) == _class) then {
        _uniformitems set [_i, "DEL"];
        _uniformitems = _uniformitems - ["DEL"];
        ASORGS_CurrentInventory set [GSVI_UniformItems, _uniformitems];
        _removed = true;
        ASORGS_UniformCapacityChanged = true;
    };
};
_magazines = ASORGS_CurrentInventory select GSVI_Magazines;
for[{_i = 0}, {(_i < (count _magazines)) && !_removed}, {_i = _i + 1}] do {
    if((_magazines select _i) == _class) then {
        _magazines set [_i, "DEL"];
        _magazines = _magazines - ["DEL"];
        ASORGS_CurrentInventory set [GSVI_Magazines, _magazines];
        call ASORGS_fnc_ValidateMagazines;
        _removed = true;
    };
};
if(_removed) then {
    ASORGS_WeightChanged = true;
};
_removed
