systemChat format["0: %1", _this];

[_this] spawn {
	_args = _this select 0;
	_vehicle = _args select 0;
	if (_vehicle == objNull) exitWith {};

	waitUntil {_vehicle getVariable ["acre_sys_rack_initialized", False]};

	_racks = [_vehicle] call acre_api_fnc_getVehicleRacks;
	if(count _racks <= 0) exitWith{};

	_rackId = _racks select 0;
	if(_rackId == "") exitWith {};

	_radioId = [_rackId] call acre_api_fnc_getMountedRackRadio;
	if(_radioId == "") exitWith {};

	[_radioId, 2] call acre_api_fnc_setRadioChannel;
	[_radioId, 0.6] call acre_api_fnc_setRadioVolume;
};