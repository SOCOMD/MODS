//
//


private ["_unit"];

_unit = _this select 0;


// Wait until De-Pressurized to ARM
waitUntil { sleep 1; REDlight1ON == 1; };
sleep 10;


// ASTRA EAAD - AGL
if ("VQI_ASTRA" in assignedItems _unit) then {

	playSound "aad_beeping";
	hint "ASTRA-M Armed \n EAAD Set AGL";
	
	[_unit] execVM "vqi_halo\VQI-DemonDropper\Equipment\AAD\EAAD\vqi_halo_eaad_astra.sqf";
};