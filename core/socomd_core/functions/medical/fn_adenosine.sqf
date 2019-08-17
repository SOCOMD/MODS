params ["", "_target", "", ""];

_this call ace_medical_fnc_treatmentAdvanced_medication;

_this remoteExec["SOCOMD_fnc_adenosineLocal", _target];