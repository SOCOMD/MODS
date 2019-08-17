/*
 * Author: Monk
 * Ketamine Local function
 *
 */

params ["_player", "_target", "_khole"];

_message = format ["Ketamine was given by %1",name _player];

//Display message stating who has given the drug
hint _message;

//Remove all pain
[_target, -8000] call ace_medical_fnc_adjustPainLevel;

//Set unconscious state for an amount of time
[_target, true, _khole, true] call ace_medical_fnc_setUnconscious;

//Play special effect
[] spawn SOCOMD_fnc_ketEffect;