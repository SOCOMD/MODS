#include "script_component.hpp"
/*
 * Author: Glowbal
 * Handles finishing performing CPR on the patient.
 *
 * Arguments:
 * 0: Patient <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ace_medical_treatment_fnc_cprSuccess
 *
 * Public: No
 */

params [
	["_patient",objNull,[objNull]]
];

["ace_medical_CPRSucceeded", _patient] call CBA_fnc_localEvent;