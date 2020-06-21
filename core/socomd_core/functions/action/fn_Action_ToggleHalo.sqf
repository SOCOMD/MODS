_args = _this;
_player = _this select 0;
_savedGps = '';
_gpsItem = '';
_loudoutid = player getVariable "SOCOMD_LOADOUTID";
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
	player removeItems "VQI_BOTTLE_DF1_GAS";
	player unassignItem "VQI_ReserveChute";
	player unassignItem "ACE_Altimeter";
	player removeItem "VQI_ReserveChute";
	player removeItem "VQI_AR3";
	player removeItem "ACE_Altimeter";
	player removeItem "VQI_Sentinel";
	(uniformContainer player) addItemCargoGlobal ["ItemWatch", 1];
	player assignItem _savedGps;
	player assignItem "ItemWatch";
} else {
	(vestContainer player) addItemCargoGlobal ["VQI_BOTTLE_DF1_GAS", 1];
	(vestContainer player) addItemCargoGlobal ["VQI_ReserveChute", 1];
	(vestContainer player) addItemCargoGlobal ["VQI_Sentinel", 1];
	(vestContainer player) addItemCargoGlobal ["VQI_AR3", 1];
	(vestContainer player) addItemCargoGlobal ["ACE_Altimeter", 1];
	player assignItem "VQI_ReserveChute";
	player assignItem "ACE_Altimeter";
	switch true do {
		case (_loudoutid in [ "SOCOMD_Pilot"]) : {
			(uniformContainer player) addItemCargoGlobal ["ItemcTab", 1];
		};
		case (_loudoutid in ["SOCOMD_Commander", "SOCOMD_2IC", "SOCOMD_Leader", "SOCOMD_Crewman"]) : {
			(uniformContainer player) addItemCargoGlobal ["ItemAndroid", 1];
		};
		default {
			(uniformContainer player) addItemCargoGlobal ["ItemMicroDAGR", 1];
		};
	};
};
