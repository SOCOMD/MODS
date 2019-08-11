_rack = _this select 0;
_rackId = typeof _rack;

_vehicle = [_rackId] call acre_sys_rack_fnc_getVehicleFromRack;
if(_vehicle == objNull) exitWith {};

[_vehicle, _rackId] spawn {
	_vehicle = _this select 0;
	_rackId = _this select 1;

	waitUntil {(_vehicle getVariable ["acre_sys_rack_initialized", False])};

	if(!(local _vehicle)) exitWith {};

	waitUntil {
		_radioId = [_rackId] call acre_api_fnc_getMountedRackRadio;
		_valid = (_radioId != "" && _radioId != "ACRE_PRC117F");
		_valid
	};

	_radioId = [_rackId] call acre_api_fnc_getMountedRackRadio;
	if(_radioId == "") exitWith {};

	[_radioId, 2] call acre_api_fnc_setRadioChannel;
	[_radioId, 0.6] call acre_sys_radio_fnc_setRadioVolume;
};