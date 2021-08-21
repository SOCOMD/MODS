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
[
    "SOCOMD_peltors",
    "CHECKBOX",
    ["Activate Active Noise Protection", "Activate peltor functionality for active noise cancelling earmuffs"],
    ["SOCOMD", "Hearing Protection"],
    false,
    false
] call CBA_fnc_addSetting;
[
    "SOCOMD_peltors_timeout",
    "SLIDER",
    ["Hearing protection timeout", "How long it takes for the earmuffs to return to normal volume (This setting does not effect performance, but lower values may have a choppy effect on low frames)"],
    ["SOCOMD", "Hearing Protection"],
    [0.25,5,0.5],
    nil
] call CBA_fnc_addSetting;
[
    "SOCOMD_peltors_strength",
    "SLIDER",
    ["Hearing protection strength", "How much sound the earmuffs lower (lower value cancel more)"],
    ["SOCOMD", "Hearing Protection"],
    [0.15,0.5,0.25],
    nil
] call CBA_fnc_addSetting;