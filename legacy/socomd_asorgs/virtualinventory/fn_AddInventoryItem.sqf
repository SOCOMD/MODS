#include "macro.sqf"
disableSerialization;
private["_item", "_class", "_isMedical", "_count", "_added", "_i"];
_item = _this select 0;
_class = _item call ASORGS_fnc_GetClass;
_skipValidation = [_this, 1, false, [false]] call BIS_fnc_param;
_isMedical = _class in ASORGS_medical;
_added = false;
//prioritize uniform/vest unless it's a medical item, in which case prioritize backpack

if(_isMedical) then {
    if((_item call ASORGS_fnc_CanFitBackpack) && !_added) then {
        ASORGS_CurrentInventory select GSVI_BackpackItems set [count (ASORGS_CurrentInventory select GSVI_BackpackItems), _class];
        ASORGS_BackpackFilled = ASORGS_BackpackFilled + (_class call ASORGS_fnc_GetItemMass);
        _added = true;
    };
    if((_item call ASORGS_fnc_CanFitVest) && !_added) then {
        ASORGS_CurrentInventory select GSVI_VestItems set [count (ASORGS_CurrentInventory select GSVI_VestItems), _item call ASORGS_fnc_GetClass];
        _added = true;
        ASORGS_VestFilled = ASORGS_VestFilled + (_class call ASORGS_fnc_GetItemMass);
    };
    if((_item call ASORGS_fnc_CanFitUniform) && !_added) then {
        ASORGS_CurrentInventory select GSVI_UniformItems set [count (ASORGS_CurrentInventory select GSVI_UniformItems), _class];
        _added = true;
        ASORGS_UniformFilled = ASORGS_UniformFilled + (_class call ASORGS_fnc_GetItemMass);
    };
} else {
    if((_item call ASORGS_fnc_CanFitWeapon) && !_added) then {
        ASORGS_CurrentInventory select GSVI_Magazines set [count (ASORGS_CurrentInventory select GSVI_Magazines), _class];
        _added = true;
    };
    if((_item call ASORGS_fnc_CanFitUniform) && !_added) then {
        ASORGS_CurrentInventory select GSVI_UniformItems set [count (ASORGS_CurrentInventory select GSVI_UniformItems), _class];
        _added = true;
        ASORGS_UniformFilled = ASORGS_UniformFilled + (_class call ASORGS_fnc_GetItemMass);
    };
    if((_item call ASORGS_fnc_CanFitVest) && !_added) then {
        ASORGS_CurrentInventory select GSVI_VestItems set [count (ASORGS_CurrentInventory select GSVI_VestItems), _class];
        _added = true;
        ASORGS_VestFilled = ASORGS_VestFilled + (_class call ASORGS_fnc_GetItemMass);
    };
    if((_item call ASORGS_fnc_CanFitBackpack) && !_added) then {
        ASORGS_CurrentInventory select GSVI_BackpackItems set [count (ASORGS_CurrentInventory select GSVI_BackpackItems), _class];
        _added = true;
        ASORGS_BackpackFilled = ASORGS_BackpackFilled + (_class call ASORGS_fnc_GetItemMass);
    };

};
if(_added) then {
    ASORGS_WeightChanged = true;
    if(!_skipValidation) then {
        call ASORGS_fnc_ValidateMagazines;
    };
};
_added
