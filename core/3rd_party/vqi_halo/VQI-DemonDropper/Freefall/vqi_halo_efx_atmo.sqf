// wind,turbulence,layers, etc
//	WIP		WIP		WIP


//execVM "vqi_halo\VQI-DemonDropper\FreeFall\vqi_halo_efx_atmo_terminate.sqf";
//sleep 1;

private ["_unit"];
_unit = _this select 0;


// sound efx before shake?


while {((getPosATL _unit select 2) > 20)} do {

	waitUntil {animationState _unit == "HaloFreeFall_non"};
	efxFFn = execVM "vqi_halo\VQI-DemonDropper\FreeFall\vqi_halo_efx_atmo_ff_n.sqf";
	
	sleep 1;
	
	waitUntil {animationState _unit == "HaloFreeFall_f"};
	efxFFf = execVM "vqi_halo\VQI-DemonDropper\FreeFall\vqi_halo_efx_atmo_ff_f.sqf";

sleep 1;
};