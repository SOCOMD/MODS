[
    "fox_nvg_volume",
    "CHECKBOX",
    ["NVG sound","Enable Disable sound"],
    "[FOX] NVG",
    TRUE,
    nil,
    {
        params ["_setting"];
    }
] call CBA_Settings_fnc_init;

[
    "fox_nvg_mode",
    "LIST",
     ["Playmode","[playMusic] supports volume settings"],
    "[FOX] NVG",
   [["say3D", "playMusic"], ["say3D", "playMusic"], 0],
    nil,
    {
        params ["_setting"];
    }
] call CBA_Settings_fnc_init;

[
    "fox_nvg_soundFile",
    "LIST",
     ["Sound",""],
    "[FOX] NVG",
    [["fox_nvg_sound", "fox_nvg_soundLoud"], ["Default", "+15DB"], 0],
    nil,
    {
        params ["_setting"];
    }
] call CBA_Settings_fnc_init;

[
    "fox_nvg_debug",
    "CHECKBOX",
    ["Debug","Debug mode"],
    "[FOX] NVG",
    FALSE,
    nil,
    {
        params ["_setting"];
    }
] call CBA_Settings_fnc_init;
