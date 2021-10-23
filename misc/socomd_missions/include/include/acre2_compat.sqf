#define PROGRAM_CHANNEL(RADIO, CHANNEL, LABEL, RX, TX) \
[RADIO, _presetId, CHANNEL, "label", LABEL] call acre_api_fnc_setPresetChannelField; \
[RADIO, _presetId, CHANNEL, "frequencyRX", RX] call acre_api_fnc_setPresetChannelField; \
[RADIO, _presetId, CHANNEL, "frequencyTX", RX] call acre_api_fnc_setPresetChannelField;

[false, false] call acre_api_fnc_setupMission;

_presetId = "SOCOMD_PRESET";

["ACRE_PRC152", "default", _presetId] call acre_api_fnc_copyPreset;
PROGRAM_CHANNEL("ACRE_PRC152", 1,  "PHANTOM NET", 55.5, 55.5)
PROGRAM_CHANNEL("ACRE_PRC152", 2,  "RAIDER NET", 60.9, 60.9)
PROGRAM_CHANNEL("ACRE_PRC152", 3,  "FIRES", 75.3, 75.3)
PROGRAM_CHANNEL("ACRE_PRC152", 4,  "SOLS NET", 81.4, 81.4)
PROGRAM_CHANNEL("ACRE_PRC152", 5,  "COMMON AIR", 83.1, 83.1)
PROGRAM_CHANNEL("ACRE_PRC152", 6,  "AIR 1", 83.8, 83.8)
PROGRAM_CHANNEL("ACRE_PRC152", 7,  "AIR 2", 84.5, 84.5)
PROGRAM_CHANNEL("ACRE_PRC152", 8,  "AIR 3", 85.2, 85.2)
PROGRAM_CHANNEL("ACRE_PRC152", 9,  "AIR 4", 85.9, 85.9)
PROGRAM_CHANNEL("ACRE_PRC152", 10, "AIR 5", 86.6, 86.6)
["ACRE_PRC152", _presetId] call acre_api_fnc_setPreset;

["ACRE_PRC117F", "default", _presetId] call acre_api_fnc_copyPreset;
PROGRAM_CHANNEL("ACRE_PRC117F", 1,  "HQ NET", 31.9, 31.9)
PROGRAM_CHANNEL("ACRE_PRC117F", 2,  "PHANTOM NET", 55.5, 55.5)
PROGRAM_CHANNEL("ACRE_PRC117F", 3,  "RAIDER NET", 60.9, 60.9)
PROGRAM_CHANNEL("ACRE_PRC117F", 4,  "FIRES", 75.3, 75.3)
PROGRAM_CHANNEL("ACRE_PRC117F", 5,  "SOLS NET", 81.4, 81.4)
PROGRAM_CHANNEL("ACRE_PRC117F", 6,  "COMMON AIR", 83.1, 83.1)
PROGRAM_CHANNEL("ACRE_PRC117F", 7,  "AIR 1", 83.8, 83.8)
PROGRAM_CHANNEL("ACRE_PRC117F", 8,  "AIR 2", 84.5, 84.5)
PROGRAM_CHANNEL("ACRE_PRC117F", 9,  "AIR 3", 85.2, 85.2)
PROGRAM_CHANNEL("ACRE_PRC117F", 10, "AIR 4", 85.9, 85.9)
PROGRAM_CHANNEL("ACRE_PRC117F", 11, "AIR 5", 86.6, 86.6)
["ACRE_PRC117F", _presetId] call acre_api_fnc_setPreset;

waitUntil { missionNamespace getVariable["SOCOMD_InitComplete", 0] == 1 };

call {

	["e", "English"] call acre_api_fnc_babelAddLanguageType;

	_languagesPlayerSpeaks = ["e"];

	_languagesPlayerSpeaks call acre_api_fnc_babelSetSpokenLanguages;
};

	// Disabled for debugging
	/*
	["f", "Foreign"] call acre_api_fnc_babelAddLanguageType;
	["z", "Zeus"] call acre_api_fnc_babelAddLanguageType;

	_whitelist = [
		"SOCOMD_Homestead"
	];

	_type = typeOf player;
	if(_type in _whitelist) then {
		_languagesPlayerSpeaks = _languagesPlayerSpeaks + ["f", "z"];
	};
	*/
