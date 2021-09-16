// remove this file when https://github.com/CBATeam/CBA_A3/pull/1243
// is ingame 
 
/* 
#define COMPONENT ai
#include "\x\cba\addons\main\script_mod.hpp"

#ifdef DEBUG_ENABLED_AI
    #define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_AI
    #define DEBUG_SETTINGS DEBUG_SETTINGS_AI
#endif

#include "\x\cba\addons\main\script_macros.hpp" 
*/
/* ----------------------------------------------------------------------------
Function: CBA_fnc_taskAttack
Description:
    A function for a group to attack a parsed location.
Parameters:
    - Group (Group or Object)
    - Position (XYZ, Object, Location or Group)
Optional:
    - Search Radius (Scalar)
    - Remove Assigned Waypoints (Bool)
Example:
    (begin example)
    [group player, getPos (player findNearestEnemy player), 100] call CBA_fnc_taskAttack
    (end)
Returns:
    Nil
Author:
    Rommel
---------------------------------------------------------------------------- */

/* 
params ["_group", "_position", ["_radius", 0], ["_override", false]];

_group = _group call CBA_fnc_getGroup;
if !(local _group) exitWith {}; // Don't create waypoints on each machine

// Allow TaskAttack to override other set waypoints
if (_override) then {
    [_group] call CBA_fnc_clearWaypoints;
    { _x enableAI "PATH"; } foreach (units _group);
};

[_group, _position, _radius, "SAD", "COMBAT", "RED"] call CBA_fnc_addWaypoint; 
*/