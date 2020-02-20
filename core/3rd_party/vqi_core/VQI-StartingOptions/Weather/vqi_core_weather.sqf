// Weather, Snow, Cold Breath, etc
//




if (isServer) then {
	// climate/zone
	execVM "vqi_core\VQI-StartingOptions\Weather\vqi_core_climate.sqf";
};
sleep 10;





if (VQI_CORE_COLDSNOW > 0) then {	

	if (random 100 < VQI_CORE_COLDSNOW_CHANCE) then {
	
		if (VQI_CORE_TEMP < 33) then {
			[player] execVM "vqi_core\VQI-StartingOptions\Weather\vqi_cold_snow.sqf";
		};
	};
};


if (VQI_CORE_COLDBREATH > 0) then {	

	if (VQI_CORE_TEMP < 45) then {
		[player] execVM "vqi_core\VQI-StartingOptions\Weather\vqi_cold_breath.sqf";
	};
};
















////////////////////
/* NOTES:


*/