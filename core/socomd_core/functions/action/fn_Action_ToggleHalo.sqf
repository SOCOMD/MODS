_args = _this;
_player = _this select 0;
_savedGps = _player getVariable ["savedGps", null];
if(("VQI_BOTTLE_DF1_GAS" in ((vestItems player) + (uniformItems player) + (backpackItems player)))) then {
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
	_gpsItem = assignedItems _player select 4;
	_player unassignItem _gpsItem;	
	(vestContainer _player) addItemCargoGlobal ["VQI_BOTTLE_DF1_GAS", 1];
	(vestContainer _player) addItemCargoGlobal ["VQI_ReserveChute", 1];
	(vestContainer _player) addItemCargoGlobal ["VQI_Sentinel", 1];
	(vestContainer _player) addItemCargoGlobal ["VQI_AR3", 1];
	(vestContainer _player) addItemCargoGlobal ["ACE_Altimeter", 1];
	_player assignItem "VQI_ReserveChute";
	_player assignItem "VQI_AR3";
	_player assignItem "ACE_Altimeter";
};
