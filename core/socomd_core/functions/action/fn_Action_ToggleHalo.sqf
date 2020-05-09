_args = _this;
_player = _this select 0;
_savedGps = '';
_items = items _player;


_gpsItem = assignedItems _player select 4;
if(("VQI_BOTTLE_DF1_GAS" in ((vestItems player) + (uniformItems player) + (backpackItems player)))) then {
	if(("ItemMicroDAGR" in ((vestItems player) + (uniformItems player) + (backpackItems player)))) then {
		_savedGps = "ItemMicroDAGR";
	};
	if(("ItemAndroid" in ((vestItems player) + (uniformItems player) + (backpackItems player)))) then {
		_savedGps = "ItemAndroid";
	};
	if(("ItemcTab" in ((vestItems player) + (uniformItems player) + (backpackItems player)))) then {
		_savedGps = "ItemcTab";
	};
	_player removeItems "VQI_BOTTLE_DF1_GAS";
	_player unassignItem "VQI_ReserveChute";
	_player unassignItem "ACE_Altimeter";
	_player removeItem "VQI_ReserveChute";
	_player removeItem "VQI_AR3";
	_player removeItem "ACE_Altimeter";
	_player removeItem "VQI_Sentinel";
	(uniformContainer _player) addItemCargoGlobal ["ItemCompass", 1];
	(uniformContainer _player) addItemCargoGlobal ["ItemWatch", 1];
	_player assignItem _savedGps;
	_player assignItem "ItemCompass";
	_player assignItem "ItemWatch";
} else {
	(uniformContainer _player) addItemCargoGlobal [_gpsItem, 1];
	(vestContainer _player) addItemCargoGlobal ["VQI_BOTTLE_DF1_GAS", 1];
	(vestContainer _player) addItemCargoGlobal ["VQI_ReserveChute", 1];
	(vestContainer _player) addItemCargoGlobal ["VQI_Sentinel", 1];
	(vestContainer _player) addItemCargoGlobal ["VQI_AR3", 1];
	(vestContainer _player) addItemCargoGlobal ["ACE_Altimeter", 1];
	_player assignItem "VQI_ReserveChute";
	_player assignItem "ACE_Altimeter";
};
