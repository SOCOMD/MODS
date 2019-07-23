params ["", "_target", "", ""];

_this call ace_medical_fnc_treatmentAdvanced_medication;

_this remoteExec["armaforces_ace_medical_fnc_adenosineLocal", _target];