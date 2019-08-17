/*
 * Author: Monk
 * Ketamine Local function
 *
 */

params ["_player", "_target", "_khole"];

_message = format ["Ketamine was given by %1",name _player];
hint _message;                                                                   //Display message stating who has given the drug

[_target, -8000] call ace_medical_fnc_adjustPainLevel;                           //Remove all pain

[_target, true, _khole, true] call ace_medical_fnc_setUnconscious;               //Set unconscious state for an amount of time

execVM"\socomd_core\functions\medical\fn_ketEffect.sqf"                          //Play special effect