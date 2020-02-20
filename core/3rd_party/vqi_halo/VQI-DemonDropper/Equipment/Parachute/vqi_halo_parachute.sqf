// Pulling the Ripcord efx
// W-I-P
if (VQI_HINTS_HALO == 1) then { hint "parachute.sqf"; };
sleep 1;


private ["_unit"];

_unit = _this select 0;


if (true) then {

	// Pull RIPCORD!   ---WIP---
	waitUntil { animationState _unit == "para_pilot" };
	[_unit] execVM "vqi_halo\VQI-DemonDropper\Equipment\Parachute\vqi_halo_parachute_failure.sqf";	// failure check
	resetCamShake;
	
	// Parachute Opening EFX & Sound
	33 cutText ["", "BLACK IN", 2];
	addCamShake [75, 5, 5];
	playSound "open_chute";
	playSound "grunt1";
	playSound "open_chute2";

	
	addCamShake [5,  5,  2];
	
	
	setAperture 0.05; 
	setAperture -1;
	"DynamicBlur" ppEffectEnable true;  
	"DynamicBlur" ppEffectAdjust [8.0];  
	"DynamicBlur" ppEffectCommit 0.01;
	sleep 1;
	"DynamicBlur" ppEffectAdjust [0.0]; 
	"DynamicBlur" ppEffectCommit 3;
	sleep 3;
	"DynamicBlur" ppEffectEnable false;
	"RadialBlur" ppEffectAdjust [0.0, 0.0, 0.0, 0.0]; 
	"RadialBlur" ppEffectCommit 1.0; 
	"RadialBlur" ppEffectEnable false;
	
	playSound "heartbeat";
	
	
	
	// Under Parachute Canopy
	while {(getPos _unit select 2) > 5} do {
		playSound "para_pilot";
		addCamShake [3, 4, 2];
		sleep 4;
	};
};



///////////////////////
/* NOTES:



*/