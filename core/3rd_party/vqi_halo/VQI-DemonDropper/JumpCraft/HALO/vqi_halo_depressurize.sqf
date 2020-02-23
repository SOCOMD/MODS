// Effects on Player after Cargo-Hold De-Pressurizes
//


private ["_unit"];

_unit = _this select 0;




// EFX
if (true) then {	
	waitUntil { sleep 1; REDlight1ON == 1 };
	sleep 5;
	
	[lightRED1,"efx_depress"] call CBA_fnc_globalSay3d; // sound efx
	sleep 2;
	
	if ((cameraView == "INTERNAL") && ("VQI_HELMET_HALO" == Headgear _unit)) then { // remove? fogged anyway?
		3 cutRsc ["VQI_HALO_HELMET_FOGGED0_EFX", "PLAIN"]; 	
		addCamShake [2,1,3]; //power, duration, frequency	
	};
	
	
	sleep 20;
	
	// Decompression Sickness Check...
	// DSICK = [_unit] execVM "vqi_halo\VQI-DemonDropper\Hazard\vqi_halo_bends.sqf";
};