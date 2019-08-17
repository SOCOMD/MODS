params ["_player", "_target"];

_target call ace_medical_fnc_treatmentAdvanced_medication;

if (local _target) then {
    ["treatmentKet", [_player, _target, 10]] call CBA_fnc_localEvent;           //Activates Ketamine script, defines unconsciosness lasting for a period of time
} else {
    ["treatmentKet", [_player, _target, 10], _target] call CBA_fnc_targetEvent;
};