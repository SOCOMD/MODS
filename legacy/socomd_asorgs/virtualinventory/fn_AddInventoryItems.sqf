#include "macro.sqf"
private["_item", "_count", "_added", "_i"];
_item = _this select 0;
_count = _this select 1;
_added = 0;
for[{_i = 0}, {_i < _count}, {_i = _i + 1}] do {
    if([_item, true] call ASORGS_fnc_AddInventoryItem) then {
        _added = _added + 1;
    };
};
call ASORGS_fnc_ValidateMagazines;
_added