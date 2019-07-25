params ["", "_target", "", ""];

_target call ace_medical_fnc_treatmentAdvanced_medication;

[_target, -8000] call ace_medical_fnc_adjustPainLevel;

[_target, true, 20, true] call ace_medical_fnc_setUnconscious;