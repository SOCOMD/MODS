#include "macro.sqf"
private ["_item", "_class", "_type", "_mags", "_currentmags", "_x"];
_item = _this select 0;
_class = _item call ASORGS_fnc_GetClass;
_mags = _class call ASORGS_fnc_GetWeaponMuzzleMagazines;
_currentmags = (ASORGS_CurrentInventory select GSVI_Magazines);
{
    _currentmags = _currentmags - _x;
} foreach _mags;
ASORGS_CurrentInventory set [GSVI_Magazines, _currentmags];
_type = getNumber ( configFile >> "cfgWeapons" >> _class >> "type" );
switch (_type) do {
    case IT_RIFLE: { ASORGS_CurrentInventory set [GSVI_Primary, ""]; };
    case IT_SCOPED: { ASORGS_CurrentInventory set [GSVI_Primary, ""]; };
    case IT_LAUNCHER: { ASORGS_CurrentInventory set [GSVI_Launcher, ""]; };
    case IT_HANDGUN: { ASORGS_CurrentInventory set [GSVI_Handgun, ""]; };
};
[] call ASORGS_fnc_ValidateMagazines;
ASORGS_WeightChanged = true;