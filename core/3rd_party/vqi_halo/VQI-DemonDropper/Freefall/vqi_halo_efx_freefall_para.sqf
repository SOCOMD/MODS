// ParaJump & Atmospheric Effects! Immersion is Key!!
// EFX TESTING - NEED Health EFX as well, O2 supply?	
sleep 1;


private ["_unit"];

_unit = _this select 0;


 
waitUntil {((animationState _unit == "HaloFreeFall_non") || (animationState _unit == "HaloFreeFall_F") || (animationState _unit == "HaloFreeFall_B"))};

// Simulated Velocity - Need -180* Direction of Aircraft - Jumping out of plane
_unit setVelocity [20 * (sin (getDir jumpV)), 20 * (cos (getDir jumpV)), 5];



// HIT ATMO - COLD & NO AIR!!!
addCamShake [75, 5, 5]; 	//
playSound "grunt1";		//
playSound "Wind_Ext_PARA"; //
playSound "HALOExt";		//
// addCamShake [p, d, f];	//



// Jumping BEFORE Green/Go Signal
//ANTSY = [_unit] execVM "vqi_halo\VQI-DemonDropper\FreeFall\vqi_halo_antsypants.sqf";
// Atmosphere EFX!
efxATM = [_unit] execVM "vqi_halo\VQI-DemonDropper\FreeFall\vqi_halo_efx_atmo.sqf";


// Blurring EFX  -WIP-
33 cutText ["", "BLACK IN", 1];
"DynamicBlur" ppEffectEnable true;  
"DynamicBlur" ppEffectAdjust [8];  
"DynamicBlur" ppEffectCommit 2;
sleep 5;
"DynamicBlur" ppEffectAdjust [0]; 
"DynamicBlur" ppEffectCommit 10;
sleep 5;
"RadialBlur" ppEffectEnable true;
"RadialBlur" ppEffectAdjust [0.1, 0.1, 0.5, 0.5];
"RadialBlur" ppEffectCommit 10; 
sleep 5;
"RadialBlur" ppEffectAdjust [0, 0, 0, 0];
"RadialBlur" ppEffectCommit 10;






sleep 10;



// PARA Damaged Gear
[_unit] execVM "vqi_halo\VQI-DemonDropper\Equipment\vqi_halo_damaged_gear.sqf";


// Landing EFX!
efxLND = [_unit] execVM "vqi_halo\VQI-DemonDropper\Landing\vqi_halo_efx_landing.sqf";



// Hint for the Noobs
if (VQI_HINTS_HALO == 1) then { sleep 10; hint "Altimeter: Hold 'Watch' Button"; };

//