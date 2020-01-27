/*
 * Author: Monk
 * Ketamine Local function
 *
 */

params ["_patient", "_bodyPart", "_classname"];

// Medication has no effects on dead units
if (!alive _patient) exitWith {};

_message = format ["Ketamine was given by %1",name _player];

//Display message stating who has given the drug
hint _message;

[_patient, _bodyPart, _classname] call ace_medical_treatment_medicationLocal;

_unconsciousTime = getNumber(configFile >> "ace_medical_treatment" >> "Medication" >> _classname >> "unconsciousTime");
//Set unconscious state for an amount of time
[_patient, true, _unconsciousTime, true] call ace_medical_fnc_setUnconscious;

//Play special effect
[] spawn SOCOMD_Medical_fnc_ketamineEffect;