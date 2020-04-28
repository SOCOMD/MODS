//
//	
sleep 1;



private ["_unit"];

_unit = _this select 0;

waitUntil { sleep 1; animationState _unit == "para_pilot"; };


// Main Chute Failure %
if (random 100 < VQI_PARACHUTE_FAIL) then {

	// Check/Activate Sentinel + Reserve Chute
	if (("VQI_Sentinel" in assignedItems _unit) && ("VQI_ReserveChute" in assignedItems _unit)) then {
	
		hint "Sentinel Activated!";
		execVM "vqi_halo\VQI-DemonDropper\Equipment\Parachute\vqi_halo_reservechute_sentinel.sqf";
		
	} else {
		execVM "vqi_halo\VQI-DemonDropper\Equipment\Parachute\vqi_halo_parachute_failure_efx.sqf";	
	};
};



//////////////////////
/* NOTES:




*/