params ["_player", "_target"];

_target call ace_medical_fnc_treatmentAdvanced_medication;

//_this remoteExec["SOCOMD_medical_fnc_ketamineLocal", _target];

if (local _target) then {
    ["treatmentKet", [_player, _target]] call CBA_fnc_localEvent;
} else {
    ["treatmentKet", [_player, _target], _target] call CBA_fnc_targetEvent;
};