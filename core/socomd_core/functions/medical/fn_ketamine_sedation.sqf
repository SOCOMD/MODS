params ["_player", "_target"];

_target call ace_medical_fnc_treatmentAdvanced_medication;

if (local _target) then {
    ["treatmentKet", [_player, _target, 300]] call CBA_fnc_localEvent;
} else {
    ["treatmentKet", [_player, _target, 300], _target] call CBA_fnc_targetEvent;
};