_args = _this;
_player = _this select 0;
_savedGps = _player getVariable ["savedGps", null];
if(("VQI_BOTTLE_DF1_GAS" in ((vestItems player) + (uniformItems player) + (backpackItems player)))) then {
	hint format ["%1", _player getVariable ["savedGps"]];
	hint format ["%1", _savedGps];
	_player removeItems "VQI_BOTTLE_DF1_GAS";
	_player unassignItem "VQI_ReserveChute";
	_player unassignItem "VQI_AR3";
	_player unassignItem "ACE_Altimeter";
	_player removeItem "VQI_ReserveChute";
	_player removeItem "VQI_AR3";
	_player removeItem "ACE_Altimeter";
	_player removeItem "VQI_Sentinel";
	_player assignItem _savedGps;
} else {
	_gpsItem =  assignedItems _player select 4;
	_player setVariable ["savedGps", _gpsItem];
	hint format ["%1", assignedItems _player select 4];
	_player unassignItem _gpsItem;
	_player addItem "VQI_ReserveChute";
	_player addItem "VQI_Sentinel";
	_player addItem "VQI_AR3";
	_player addItem "ACE_Altimeter";
	_player assignItem "VQI_ReserveChute";
	_player assignItem "VQI_AR3";
	_player assignItem "ACE_Altimeter";
	(vestContainer _player) addItemCargoGlobal ["VQI_BOTTLE_DF1_GAS", 1];
};
