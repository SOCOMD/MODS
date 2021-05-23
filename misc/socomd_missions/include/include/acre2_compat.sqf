#define PROGRAM_CHANNEL(RADIO, CHANNEL, LABEL, RX, TX) \
[RADIO, _presetId, CHANNEL, "label", LABEL] call acre_api_fnc_setPresetChannelField; \
[RADIO, _presetId, CHANNEL, "frequencyRX", RX] call acre_api_fnc_setPresetChannelField; \
[RADIO, _presetId, CHANNEL, "frequencyTX", RX] call acre_api_fnc_setPresetChannelField;

[false, false] call acre_api_fnc_setupMission;

_presetId = "SOCOMD_PRESET";

["ACRE_PRC152", "default", _presetId] call acre_api_fnc_copyPreset;
PROGRAM_CHANNEL("ACRE_PRC152", 1,  "PLATOON-NET", 31.9, 31.9)
PROGRAM_CHANNEL("ACRE_PRC152", 2,  "SOLS-NET", 60.9, 60.9)
PROGRAM_CHANNEL("ACRE_PRC152", 3,  "TASKING-ONE", 75.3, 75.3)
PROGRAM_CHANNEL("ACRE_PRC152", 4,  "TASKING-TWO", 81.4, 81.4)
PROGRAM_CHANNEL("ACRE_PRC152", 5,  "INTER-SECTION-1", 83.1, 83.1)
PROGRAM_CHANNEL("ACRE_PRC152", 6,  "INTER-SECTION-2", 83.8, 83.8)
PROGRAM_CHANNEL("ACRE_PRC152", 7,  "INTER-SECTION-3", 84.5, 84.5)
PROGRAM_CHANNEL("ACRE_PRC152", 8,  "INTER-SECTION-4", 85.2, 85.2)
PROGRAM_CHANNEL("ACRE_PRC152", 9,  "INTER-SECTION-5", 85.9, 85.9)
PROGRAM_CHANNEL("ACRE_PRC152", 10, "INTER-SECTION-6", 86.6, 86.6)
PROGRAM_CHANNEL("ACRE_PRC152", 11, "INTER-SECTION-7", 87.3, 87.3)
PROGRAM_CHANNEL("ACRE_PRC152", 12, "INTER-SECTION-8", 88.0, 88.0)
PROGRAM_CHANNEL("ACRE_PRC152", 13, "INTER-SECTION-9", 88.7, 88.7)
PROGRAM_CHANNEL("ACRE_PRC152", 14, "INTER-SECTION-10", 89.4, 89.4)
["ACRE_PRC152", _presetId] call acre_api_fnc_setPreset;

["ACRE_PRC117F", "default", _presetId] call acre_api_fnc_copyPreset;
PROGRAM_CHANNEL("ACRE_PRC117F", 1,  "HQ NET", 55.5, 55.5)
PROGRAM_CHANNEL("ACRE_PRC117F", 2,  "PLATOON NET", 31.9, 31.9)
PROGRAM_CHANNEL("ACRE_PRC117F", 3,  "SOLS NET", 60.9, 60.9)
PROGRAM_CHANNEL("ACRE_PRC117F", 4,  "TASKING-ONE", 75.3, 75.3)
PROGRAM_CHANNEL("ACRE_PRC117F", 5,  "TASKING-TWO", 81.4, 81.4)
PROGRAM_CHANNEL("ACRE_PRC117F", 6,  "INTER-SECTION-1", 83.1, 83.1)
PROGRAM_CHANNEL("ACRE_PRC117F", 7,  "INTER-SECTION-2", 83.8, 83.8)
PROGRAM_CHANNEL("ACRE_PRC117F", 8,  "INTER-SECTION-3", 84.5, 84.5)
PROGRAM_CHANNEL("ACRE_PRC117F", 9,  "INTER-SECTION-4", 85.2, 85.2)
PROGRAM_CHANNEL("ACRE_PRC117F", 10, "INTER-SECTION-5", 85.9, 85.9)
PROGRAM_CHANNEL("ACRE_PRC117F", 11, "INTER-SECTION-6", 86.6, 86.6)
PROGRAM_CHANNEL("ACRE_PRC117F", 12, "INTER-SECTION-7", 87.3, 87.3)
PROGRAM_CHANNEL("ACRE_PRC117F", 13, "INTER-SECTION-8", 88.0, 88.0)
PROGRAM_CHANNEL("ACRE_PRC117F", 14, "INTER-SECTION-9", 88.7, 88.7)
PROGRAM_CHANNEL("ACRE_PRC117F", 15, "INTER-SECTION-10", 89.4, 89.4)
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