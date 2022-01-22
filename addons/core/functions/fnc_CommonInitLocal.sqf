#include "script_component.hpp"
//Increase drag limit for ACE box draging (800 -> 10000)
missionNamespace setVariable ["ACE_maxWeightDrag", 10000];

// make the bushmaster not have thermal visible
["bma3_bushmaster_base_F", "InitPost", {(_this select 0) disableTIEquipment true;}, true, [], true] call CBA_fnc_addClassEventHandler;

// make the static weapons not have thermal visible
["StaticWeapon", "InitPost", {(_this select 0) disableTIEquipment true;}, true, [], true] call CBA_fnc_addClassEventHandler;

["ACRE_VRC110", "InitPost", {[_this select 0] call FUNC(ACRERackInit);}, true, [], true] call CBA_fnc_addClassEventHandler;


hasPeltors = 0;
hasPeltorsOn = 0;
// Update protection on possible helmet change
["loadout", {
    params ["_player", "", ""];
    _response = [_player] call FUNC(Peltor_hasPeltor);
    _hasPeltors = _response select 0;
    _peltorsChanged = _response select 1;
    if (_hasPeltors == 0) then {
        [1] call FUNC(Peltor_setVolume);
        hasPeltorsOn = 0;
    } else {
        if (_peltorsChanged == 1) then {
            hasPeltorsOn = 1;
        };
    };
}, false] call CBA_fnc_addplayerEventHandler;
// overrides to get our functions 
 
 [{
    private _entry = ["cTab", "ifSecondary"] call CBA_fnc_getKeybind;
    !isNil "_entry"
    },{
    ["cTab","ifSecondary",["Toggle Secondary Interface","Open cTab device in interactable mode"],{call cTab_fnc_onIfSecondaryPressed; call FUNC(Action_ToggleAndroid)},"",[cTab_key_if_secondary_scancode,cTab_key_if_secondary_modifiers],false] call cba_fnc_addKeybind;
 },[]] call CBA_fnc_waitUntilAndExecute;

// Setup ACRE Radios
#define PROGRAM_CHANNEL(RADIO, CHANNEL, LABEL, RX, TX) \
[RADIO, _presetId, CHANNEL, "label", LABEL] call acre_api_fnc_setPresetChannelField; \
[RADIO, _presetId, CHANNEL, "frequencyRX", RX] call acre_api_fnc_setPresetChannelField; \
[RADIO, _presetId, CHANNEL, "frequencyTX", RX] call acre_api_fnc_setPresetChannelField;

[false, false] call acre_api_fnc_setupMission;

_presetId = "SOCOMD_PRESET";

["ACRE_PRC152", "default", _presetId] call acre_api_fnc_copyPreset;
PROGRAM_CHANNEL("ACRE_PRC152", 1,  "PHANTOM-NET", 55.5, 55.5)
PROGRAM_CHANNEL("ACRE_PRC152", 2,  "RAIDER-NET", 60.9, 60.9)
PROGRAM_CHANNEL("ACRE_PRC152", 3,  "FIRES-NET", 75.3, 75.3)
PROGRAM_CHANNEL("ACRE_PRC152", 4,  "6AVN-NET", 81.4, 81.4)
PROGRAM_CHANNEL("ACRE_PRC152", 5,  "AIR-NET-1", 83.1, 83.1)
PROGRAM_CHANNEL("ACRE_PRC152", 6,  "AIR-NET-2", 83.8, 83.8)
PROGRAM_CHANNEL("ACRE_PRC152", 7,  "TASKING-NET-1", 84.5, 84.5)
PROGRAM_CHANNEL("ACRE_PRC152", 8,  "TASKING-NET-2", 85.2, 85.2)
PROGRAM_CHANNEL("ACRE_PRC152", 9,  "TASKING-NET-3", 85.9, 85.9)
PROGRAM_CHANNEL("ACRE_PRC152", 10, "TASKING-NET-4", 86.6, 86.6)
["ACRE_PRC152", _presetId] call acre_api_fnc_setPreset;

["ACRE_PRC117F", "default", _presetId] call acre_api_fnc_copyPreset;
PROGRAM_CHANNEL("ACRE_PRC117F", 1,  "HQ-NET", 31.9, 31.9)
PROGRAM_CHANNEL("ACRE_PRC117F", 2,  "PHANTOM-NET", 55.5, 55.5)
PROGRAM_CHANNEL("ACRE_PRC117F", 3,  "RAIDER-NET", 60.9, 60.9)
PROGRAM_CHANNEL("ACRE_PRC117F", 4,  "FIRES-NET", 75.3, 75.3)
PROGRAM_CHANNEL("ACRE_PRC117F", 5,  "6AVN-NET", 81.4, 81.4)
PROGRAM_CHANNEL("ACRE_PRC117F", 6,  "AIR-NET-1", 83.1, 83.1)
PROGRAM_CHANNEL("ACRE_PRC117F", 7,  "AIR-NET-2", 83.8, 83.8)
PROGRAM_CHANNEL("ACRE_PRC117F", 8,  "TASKING-NET-1", 84.5, 84.5)
PROGRAM_CHANNEL("ACRE_PRC117F", 9,  "TASKING-NET-2", 85.2, 85.2)
PROGRAM_CHANNEL("ACRE_PRC117F", 10, "TASKING-NET-3", 85.9, 85.9)
PROGRAM_CHANNEL("ACRE_PRC117F", 11, "TASKING-NET-4", 86.6, 86.6)
["ACRE_PRC117F", _presetId] call acre_api_fnc_setPreset;

["e", "English"] call acre_api_fnc_babelAddLanguageType;
["f", "Foreign"] call acre_api_fnc_babelAddLanguageType;
["z", "Zeus"] call acre_api_fnc_babelAddLanguageType;

_whitelist = [
    "SOCOMD_Homestead"
];

_languagesPlayerSpeaks = ["e"];

_type = typeOf player;
if(_type in _whitelist) then {
    _languagesPlayerSpeaks = _languagesPlayerSpeaks + ["f", "z"];
};
_languagesPlayerSpeaks call acre_api_fnc_babelSetSpokenLanguages;