_presetId = "SOCOMD_PRESET";

#define PROGRAM_CHANNEL(RADIO, CHANNEL, LABEL, RX, TX) \
[RADIO, _presetId, CHANNEL, "label", LABEL] call acre_api_fnc_setPresetChannelField; \
[RADIO, _presetId, CHANNEL, "frequencyRX", RX] call acre_api_fnc_setPresetChannelField; \
[RADIO, _presetId, CHANNEL, "frequencyTX", RX] call acre_api_fnc_setPresetChannelField;

["ACRE_PRC152", "default", _presetId] call acre_api_fnc_copyPreset;
PROGRAM_CHANNEL("ACRE_PRC152", 1, "PLTCOM NET 1", 31.9, 31.9)
PROGRAM_CHANNEL("ACRE_PRC152", 2, "PLTCOM NET 2", 32.9, 32.9)
PROGRAM_CHANNEL("ACRE_PRC152", 3, "PLTCOM NET 3", 33.9, 33.9)
PROGRAM_CHANNEL("ACRE_PRC152", 4, "171AVN SW NET", 60.9, 60.9)
PROGRAM_CHANNEL("ACRE_PRC152", 5, "UNUSED", 0.0, 0.0)
["ACRE_PRC152", _presetId] call acre_api_fnc_setPreset;

["ACRE_PRC117F", "default", _presetId] call acre_api_fnc_copyPreset;
PROGRAM_CHANNEL("ACRE_PRC117F", 1, "HQ NET", 55.5, 55.5)
PROGRAM_CHANNEL("ACRE_PRC117F", 2, "171AVN LR NET", 60.0, 60.0)
["ACRE_PRC117F", _presetId] call acre_api_fnc_setPreset;