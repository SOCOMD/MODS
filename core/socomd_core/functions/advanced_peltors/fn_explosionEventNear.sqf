/*
 * Author: KoffeinFlummi, commy2, Ruthberg
 * Modified by Slatery
 * Handles explosions going off near the player.
 *
 * Arguments:
 * 0: vehicle - Object the event handler is assigned to (player) <OBJECT>
 * 1: damage - Damage inflicted to the object <NUMBER>
 *
 * Return Value:
 * None
 *
 * Example:
 * [clientExplosionEvent] call ace_peltors_fnc_explosionNear
 *
 * Public: No
 */
#include "\z\ace\addons\main\script_macros.hpp"

params ["_unit", "_damage"];

TRACE_2("explosion near player",_unit,_damage);

private _strength = (0 max _damage) * 30;
if (_strength < 0.01) exitWith {};
// Call inmediately, as it will get pick up later anyway by the update thread
_on = false;
if ( _strength < 0.1 ) then { _on = true;};
[_on] call advanced_peltors_fnc_handlePeltors;