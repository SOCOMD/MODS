params ["_unit"];
_isLoaded = (isClass (configFile >> "CfgPatches" >> "gcam")) && ((typeOf _unit == "SOCOMD_Homestead") || [_unit] call SOCOMD_fnc_ActionCondition_IsAdmin);
_isLoaded