// Register a simple keypress to an action
#include "\a3\editor_f\Data\Scripts\dikCodes.h"

[
"WindowBreaker", 
"WindowBreaker", 
["Smash", "Press to smash a window"], 
{
execVM "\socomd_core\functions\common\windowBreaker.sqf"
}, 
{}, 
[DIK, [false,false,false]]
] call cba_fnc_addKeybind;
