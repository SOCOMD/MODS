#define PROGRAM_CHANNEL(RADIO, CHANNEL, LABEL, RX, TX) \
[RADIO, _presetId, CHANNEL, "label", LABEL] call acre_api_fnc_setPresetChannelField; \
[RADIO, _presetId, CHANNEL, "frequencyRX", RX] call acre_api_fnc_setPresetChannelField; \
[RADIO, _presetId, CHANNEL, "frequencyTX", RX] call acre_api_fnc_setPresetChannelField;

[false, false] call acre_api_fnc_setupMission;

_presetId = "SOCOMD_PRESET";

["ACRE_PRC152", "default", _presetId] call acre_api_fnc_copyPreset;
PROGRAM_CHANNEL("ACRE_PRC152", 1, "SOR HAVOC", 32.3, 32.3) 
PROGRAM_CHANNEL("ACRE_PRC152", 2, "SOR ALPHA", 32.6, 32.6) 
PROGRAM_CHANNEL("ACRE_PRC152", 3, "SOR BRAVO", 32.9, 32.9)
PROGRAM_CHANNEL("ACRE_PRC152", 4, "SOCOMD NET", 31.9, 31.9) 
PROGRAM_CHANNEL("ACRE_PRC152", 5, "SUPPORT NET", 60.9, 60.9) 
["ACRE_PRC152", _presetId] call acre_api_fnc_setPreset;

["ACRE_PRC117F", "default", _presetId] call acre_api_fnc_copyPreset;
PROGRAM_CHANNEL("ACRE_PRC117F", 1, "HQ NET", 55.5, 55.5)
PROGRAM_CHANNEL("ACRE_PRC117F", 2, "SOR NET", 33.2, 33.2)
PROGRAM_CHANNEL("ACRE_PRC117F", 3, "SOCOMD NET", 31.9, 31.9)

["ACRE_PRC117F", _presetId] call acre_api_fnc_setPreset;

[] spawn {
	waitUntil { missionNamespace getVariable["SOCOMD_InitComplete", 0] == 1 };

	["e", "English"] call acre_api_fnc_babelAddLanguageType;
	["f", "Foreign"] call acre_api_fnc_babelAddLanguageType;
	["z", "Zeus"] call acre_api_fnc_babelAddLanguageType;

	_languagesPlayerSpeaks = ["e"];

	_whitelist = [
		"SOCOMD_Homestead"
	];

	_type = typeOf player;
	if(_type in _whitelist) then {
		_languagesPlayerSpeaks = _languagesPlayerSpeaks + ["f", "z"];
	};

	_languagesPlayerSpeaks call acre_api_fnc_babelSetSpokenLanguages;
};