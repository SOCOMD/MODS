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


[{
    // Sets ACRE2 channel names
    {
        [_x, "default", "SOCOMD_PRESET"] call acre_api_fnc_copyPreset;
        [_x, "SOCOMD_PRESET", 1, "label", "PLT-NET-1"] call acre_api_fnc_setPresetChannelField;
        [_x, "SOCOMD_PRESET", 2, "label", "PLT-NET-2"] call acre_api_fnc_setPresetChannelField;
        [_x, "SOCOMD_PRESET", 3, "label", "FIRES-NET"] call acre_api_fnc_setPresetChannelField;
        [_x, "SOCOMD_PRESET", 4, "label", "6AVN-NET"] call acre_api_fnc_setPresetChannelField;
        [_x, "SOCOMD_PRESET", 5, "label", "AIR-NET-1"] call acre_api_fnc_setPresetChannelField;
        [_x, "SOCOMD_PRESET", 6, "label", "AIR-NET-2"] call acre_api_fnc_setPresetChannelField;
        [_x, "SOCOMD_PRESET", 7, "label", "TASKING-NET-1"] call acre_api_fnc_setPresetChannelField;
        [_x, "SOCOMD_PRESET", 8, "label", "TASKING-NET-2"] call acre_api_fnc_setPresetChannelField;
        [_x, "SOCOMD_PRESET", 9, "label", "TASKING-NET-3"] call acre_api_fnc_setPresetChannelField;
        [_x, "SOCOMD_PRESET", 10, "label", "TASKING-NET-4"] call acre_api_fnc_setPresetChannelField;
        [_x, "SOCOMD_PRESET", 11, "label", "HQ-NET"] call acre_api_fnc_setPresetChannelField;
        [_x, "SOCOMD_PRESET"] call acre_api_fnc_setPreset;
    } forEach ["ACRE_PRC152", "ACRE_PRC117F"];

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
}] remoteExec ["call",0];