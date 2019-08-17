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
 * call call SOCOMD_fnc_events;
 *
 * Public: No
 */
 
["treatmentKet", {_this call SOCOMD_fnc_ketamineLocal}] call CBA_fnc_addEventHandler;