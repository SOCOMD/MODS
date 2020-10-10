// Allow with no helmet
[
    "rgoc_allowNoHelmet",
    "CHECKBOX",
    "Allow NVGs with nothing on head",
    "Remove Goggles on Caps",
    false, 
    true,
    {} 
] call CBA_fnc_addSetting;
// Custom White List
[
    "rgoc_whitelist",
    "EDITBOX",
    "Custom Whitelist",
    "Remove Goggles on Caps",
    "", 
    true,
    {} 
] call CBA_fnc_addSetting;

// Custom Black List
[
    "rgoc_blacklist",
    "EDITBOX",
    "Custom Blacklist",
    "Remove Goggles on Caps",
    "", 
    true,
    {} 
] call CBA_fnc_addSetting;