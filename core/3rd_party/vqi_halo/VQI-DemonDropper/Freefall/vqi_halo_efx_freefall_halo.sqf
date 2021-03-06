// H.A.L.O. & Atmospheric Effects! Immersion is Key!!
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
playSound "Wind_Ext_HALO"; //
playSound "HALOExt";		//
// addCamShake [p, d, f];	//

sleep 1;

// Jumping BEFORE Green/Go Signal
ANTSY = [_unit] execVM "vqi_halo\VQI-DemonDropper\FreeFall\vqi_halo_antsypants.sqf";
// Atmosphere EFX!
efxATM = [_unit] execVM "vqi_halo\VQI-DemonDropper\FreeFall\vqi_halo_efx_atmo.sqf";



// Blurring EFX  -WIP-
33 cutText ["", "BLACK IN", 3];
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
"RadialBlur" ppEffectCommit 30;






3 cutRsc ["VQI_ICE_FROST_1", "PLAIN"];									// NEW


if ("VQI_Helmet_HALO" == Headgear _unit) then {										// temp, upgrade soon...

	// Helmet Fogged & Ice EFX -- Need to Fix and Upgrade
	if ((cameraView == "INTERNAL") && ((getposASL _unit select 2) < 10111)) then { 		// M not FT, 11111m=36.6K'
		3 cutRsc ["VQI_HALO_HELMET_FOGGED1_EFX", "PLAIN"];
		//addCamShake [10, 20, 12];
	};
	if ((cameraView == "INTERNAL") && ((getposASL _unit select 2) > 10111)) then { 		// 33.3K'
		3 cutRsc ["VQI_HALO_HELMET_FOGGED2_EFX", "PLAIN"];
		//addCamShake [10, 20, 12];
	};
	if ((cameraView == "INTERNAL") && ((getposASL _unit select 2) > 11111)) then { 		// 36.6K'
		4 cutRsc ["VQI_HALO_HELMET_ICE1_EFX", "PLAIN"];
		//addCamShake [10, 20, 12];
	};
};
sleep 10;

_savedHeight = _unit getVariable ["AR3_height", -1]; // get height, or warn at 300m above the ground

waitUntil { 
	getPosASL _unit select 2 < _savedHeight + 300 
}; playSound "aad_beeping";	// Alert +300m
waitUntil { getPosASL _unit select 2 < _savedHeight }; _unit action ["openParachute"];

// Landing EFX!
efxLND = [_unit] execVM "vqi_halo\VQI-DemonDropper\Landing\vqi_halo_efx_landing.sqf";



// Hint for the Noobs
if (VQI_HINTS_HALO == 1) then { sleep 30; hint "Altimeter: Hold 'Watch' Button"; };

//