#include "macro.sqf"
private ["_item", "_class", "_type"];
_item = _this select 0;
_class = _item call ASORGS_fnc_GetClass;
_type = getNumber ( configFile >> "cfgWeapons" >> _class >> "type" );
switch (_type) do {
    case IT_RIFLE: { ASORGS_CurrentInventory set [GSVI_Primary, _class]; };
    case IT_SCOPED: { ASORGS_CurrentInventory set [GSVI_Primary, _class]; };
    case IT_LAUNCHER: { ASORGS_CurrentInventory set [GSVI_Launcher, _class]; };
    case IT_HANDGUN: { ASORGS_CurrentInventory set [GSVI_Handgun, _class]; };
};
[] call ASORGS_fnc_ValidateMagazines;
ASORGS_WeightChanged = true;