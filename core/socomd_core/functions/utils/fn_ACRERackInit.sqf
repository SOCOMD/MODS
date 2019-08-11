_rack = _this select 0;
_rackId = typeof _rack;
systemChat format["0: %1", _rackId];

_vehicle = [_rackId] call acre_sys_rack_fnc_getVehicleFromRack;
systemChat format["1: %1", _vehicle];
if(_vehicle == objNull) exitWith {};

[_vehicle, _rackId] spawn {
	_vehicle = _this select 0;
	_rackId = _this select 1;

	systemChat format["2: Waiting %1", _vehicle];
	waitUntil {(_vehicle getVariable ["acre_sys_rack_initialized", False])};
	systemChat format["3: Initialised %1", _vehicle];

	if(!(local _vehicle)) exitWith {};
	systemChat format["4: %1 is local", _vehicle];

	waitUntil {([_rackId] call acre_api_fnc_getMountedRackRadio) != ""};
	systemChat format["5: %1 has radio", _rackId];

	_radioId = [_rackId] call acre_api_fnc_getMountedRackRadio;
	systemChat format["6: %1", _radioId];
	if(_radioId == "") exitWith {};

	systemChat format["7: Configure %1", _radioId];
	[_radioId, 2] call acre_api_fnc_setRadioChannel;
	[_radioId, 0.6] call acre_sys_radio_fnc_setRadioVolume;
};