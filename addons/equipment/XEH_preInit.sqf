#include "script_component.hpp"

ADDON = false;

#include "XEH_PREP.hpp"


// [QUOTE(GVAR(randomUniformWear)), "CHECKBOX", "Randomize the wear of AMCU uniforms", "SOCOMD Equipment", false] call CBA_fnc_addSetting;

// [
//     QGVAR(randomUniformWear),
//     "LIST",
//     "Randomize the wear of AMCU uniforms",
//     "SOCOMD Equipment",
//     [[0, 1, 2], ["Disabled", "Pre-Selected", "Random"], 2],
//     false
// ] call CBA_settings_fnc_init;

// [
//     QGVAR(selectedShirt),
//     "LIST",
//     "AMCU Shirt Worn level",
//     "SOCOMD Equipment",
//     [["\z\socomd\addons\data\uniform\clothes\usp_g3c_shirt_amcu_co.paa", "\z\socomd\addons\data\uniform\clothes\usp_g3c_shirt_amcu_half_worn_co.paa", "\z\socomd\addons\data\uniform\clothes\usp_g3c_shirt_amcu_well_worn_co.paa"], ["Default", "Half Worm", "Well Worm"], 0],
//     false
// ] call CBA_settings_fnc_init;

// [
//     QGVAR(selectedPants),
//     "LIST",
//     "AMCU pants Worn level",
//     "SOCOMD Equipment",
//     [["\z\socomd\addons\data\uniform\clothes\usp_g3c_pants_amcu_co.paa", "\z\socomd\addons\data\uniform\clothes\usp_g3c_pants_amcu_half_worn_co.paa", "\z\socomd\addons\data\uniform\clothes\usp_g3c_pants_amcu_well_worn_co.paa"], ["Default", "Half Worm", "Well Worm"], 0],
//     false
// ] call CBA_settings_fnc_init;

ADDON = true;
