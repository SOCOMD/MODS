if(isServer) exitWith {};

[_this] spawn {
	_args = _this select 0;
	_vehicle = _args select 0;
	if (_vehicle == objNull) exitWith {};

	waitUntil {_vehicle getVariable ["acre_sys_rack_initialized", False]};

	if(local _vehicle == False) exitWith{};

	_racks = [_vehicle] call acre_api_fnc_getVehicleRacks;
	systemChat format["2: %1", _racks];
	if(count _racks <= 0) exitWith{};

	_rackId = _racks select 0;
	systemChat format["3: %1", _rackId];
	if(_rackId == "") exitWith {};

	_radioId = [_rackId] call acre_api_fnc_getMountedRackRadio;
	systemChat format["4: %1", _radioId];
	if(_radioId == "") exitWith {};

	systemChat format["5: Configuring %1:%2", _rackId, _radioId];
	[_radioId, 2] call acre_api_fnc_setRadioChannel;
	[_radioId, 0.6] call acre_api_fnc_setRadioVolume;
};