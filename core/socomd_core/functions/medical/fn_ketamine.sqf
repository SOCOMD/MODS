params ["", "_target", "", ""];

_target call ace_medical_fnc_treatmentAdvanced_medication;

_this remoteExec["armaforces_ace_medical_fnc_ketamineLocal", _target];