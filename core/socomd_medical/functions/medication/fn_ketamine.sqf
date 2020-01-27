params ["_medic", "_patient", "_bodyPart", "_classname", "", "_usedItem"];


[_patient, _usedItem] call ace_medical_treatment_fnc_addToTriageCard;
[_patient, "activity", "STR_ACE_Medical_Treatment_Activity_usedItem", [[_medic, false, true] call ace_medical_common_fnc_getName, getText (configFile >> "CfgWeapons" >> _usedItem >> "displayName")]] call ace_medical_treatment_fnc_addToLog;
["SOCOMD_Medical_Event_ketamineLocal", [_patient, _bodyPart, _classname], _patient] call CBA_fnc_targetEvent;