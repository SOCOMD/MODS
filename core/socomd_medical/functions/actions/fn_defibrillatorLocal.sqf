params ["_medic", "_patient"];
[_patient, "activity", "STR_ACE_Medical_Treatment_Activity_CPR", [[_medic, false, true] call ace_medical_common_fnc_getName]] call ace_medical_treatment_fnc_addToLog;

if ((random 1) < 0.9) then {
	systemChat "Revive";
    ["SOCOMD_Medical_Event_defibrillatorLocal", _patient] call CBA_fnc_localEvent;
}else {
	systemChat "No Revive";
};
