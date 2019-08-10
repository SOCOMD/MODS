_rack = _this select 0;
_rackId = typeOf _rack;
_radioID = [_rackId] call acre_api_fnc_getMountedRackRadio;

if(_radioID != "") then {
	[_radioID, 2] call acre_api_fnc_setRadioChannel;
	[_radioID, 0.6] call acre_api_fnc_setRadioVolume;
};