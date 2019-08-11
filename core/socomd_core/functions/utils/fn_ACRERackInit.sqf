[_this] spawn {
	_args = _this select 0;
	systemChat format["0: %1", _args];

	_vehicle = _args select 0;
	if (_vehicle == objNull) exitWith {};

	systemChat format["1: Waiting %1", _vehicle];
	waitUntil {_vehicle getVariable ["acre_sys_rack_initialized", False]};

	systemChat format["2: Initialised %1", _vehicle];
	if(!(local _vehicle)) exitWith{};

	_racks = [_vehicle] call acre_api_fnc_getVehicleRacks;
	systemChat format["3: %1", _racks];
	if(count _racks <= 0) exitWith{};

	_rackId = _racks select 0;
	systemChat format["4: %1", _rackId];
	if(_rackId == "") exitWith {};

	_radioId = [_rackId] call acre_api_fnc_getMountedRackRadio;
	systemChat format["5: %1", _radioId];
	if(_radioId == "") exitWith {};

	systemChat format["6: Configuring %1:%2", _rackId, _radioId];
	[_radioId, 2] call acre_api_fnc_setRadioChannel;
	[_radioId, 0.6] call acre_sys_radio_fnc_setRadioVolume;
};