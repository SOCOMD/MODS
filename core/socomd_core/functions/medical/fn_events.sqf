/*
 * Author: Monk
 * CBA Events function
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * call kat_aceBreathing_fnc_events;
 *
 * Public: No
 */
 
["treatmentKet", {_this call SOCOMD_medical_fnc_ketamineLocal}] call CBA_fnc_addEventHandler;