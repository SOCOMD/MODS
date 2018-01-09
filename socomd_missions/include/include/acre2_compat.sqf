#define PROGRAM_CHANNEL(RADIO, CHANNEL, LABEL, RX, TX) \
[RADIO, _presetId, CHANNEL, "label", LABEL] call acre_api_fnc_setPresetChannelField; \
[RADIO, _presetId, CHANNEL, "frequencyRX", RX] call acre_api_fnc_setPresetChannelField; \
[RADIO, _presetId, CHANNEL, "frequencyTX", RX] call acre_api_fnc_setPresetChannelField;

[false, false] call acre_api_fnc_setupMission;
[false] call acre_api_fnc_setRevealToAI;
[true] call acre_api_fnc_ignoreAntennaDirection;

_presetId = "SOCOMD_PRESET";

["ACRE_PRC152", "default", _presetId] call acre_api_fnc_copyPreset;
PROGRAM_CHANNEL("ACRE_PRC152", 1, "PLATOON NET", 31.9, 31.9)
PROGRAM_CHANNEL("ACRE_PRC152", 2, "171AVN NET", 60.9, 60.9)
PROGRAM_CHANNEL("ACRE_PRC152", 3, "UNUSED", 0.0, 0.0)
PROGRAM_CHANNEL("ACRE_PRC152", 4, "UNUSED", 0.0, 0.0)
PROGRAM_CHANNEL("ACRE_PRC152", 5, "UNUSED", 0.0, 0.0)
["ACRE_PRC152", _presetId] call acre_api_fnc_setPreset;

["ACRE_PRC117F", "default", _presetId] call acre_api_fnc_copyPreset;
PROGRAM_CHANNEL("ACRE_PRC117F", 1, "HQ NET", 55.5, 55.5)
["ACRE_PRC117F", _presetId] call acre_api_fnc_setPreset;

[] spawn {
	waitUntil { missionNamespace getVariable["SOCOMD_InitComplete", 0] == 1 };

	["e", "English"] call acre_api_fnc_babelAddLanguageType;
	["f", "Foreign"] call acre_api_fnc_babelAddLanguageType;
	["z", "Zeus"] call acre_api_fnc_babelAddLanguageType;

	_languagesPlayerSpeaks = ["e"];

	_whitelist = [
		"SOCOMD_Homestead",
		"SOCOMD_SASR_Homestead",
		"SOCOMD_Trainer"
	];

	_type = typeOf player;
	if(_type in _whitelist) then {
		_languagesPlayerSpeaks = _languagesPlayerSpeaks + ["f", "z"];
	};

	_languagesPlayerSpeaks call acre_api_fnc_babelSetSpokenLanguages;
};