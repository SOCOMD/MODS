params ["_player", "_target"];

_message = format ["Ketamine was given by %1",name _player];
hint _message;

[_target, -8000] call ace_medical_fnc_adjustPainLevel;

[_target, true, 20, true] call ace_medical_fnc_setUnconscious;

execVM"\socomd_core\functions\medical\fn_ketEffect.sqf"