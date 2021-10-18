// Register a simple keypress to an action
#include "\a3\editor_f\Data\Scripts\dikCodes.h"

[
"WindowBreaker", 
"WindowBreaker", 
["Smash", "Press to smash a window"], 
{
call FUNC(windowBreaker)
}, 
{}, 
[DIK, [false,false,false]]
] call CBA_fnc_addSetting
[
    "SOCOMD_peltors_strength",
    "SLIDER",
    ["Hearing protection strength", "How much sound the earmuffs lower (lower value cancel more)"],
    ["SOCOMD", "Hearing Protection"],
    [0.15,0.5,0.25],
    nil
] call CBA_fnc_addSetting;

