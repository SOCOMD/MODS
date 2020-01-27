params ["_medic", "_patient"];

_patient setVariable [ace_medical_CPR_provider, objNull, true];

if (alive _patient && {_patient getVariable ["ace_medical_inCardiacArrest", false]) then {
    ["SOCOMD_Medical_Event_defibrillatorLocal"), [_medic, _patient], _patient] call CBA_fnc_targetEvent;
};