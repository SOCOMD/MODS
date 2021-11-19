#include "macro.sqf"
private["_ret", "_i"];
_ret = (ASORGS_CurrentInventory select GSVI_Magazines) + (call ASORGS_fnc_GetInventoryItems);
for[{_i = 0}, {_i < count _ret}, {_i = _i + 1}] do {
    if(!isClass (configFile >> "CfgMagazines" >> (_ret select _i)))then {
        _ret set [_i, objNull];
    };
};
_ret = _ret - [objNull];
_ret