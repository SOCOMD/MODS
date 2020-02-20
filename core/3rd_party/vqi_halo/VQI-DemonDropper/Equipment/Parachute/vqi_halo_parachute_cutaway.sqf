//
//
if (VQI_HINTS_HALO == 1) then { hint "parachute_cutaway.sqf"; };
sleep 1;

private ["_csP","_csF"];


_csP = 10 + random 35;
_csF = random 10;

addCamShake [_csP, 3, _csF];

playSound "aad_beeping";
deleteVehicle vehicle player;

if ( "VQI_ReserveChute" in assignedItems player ) then {
	sleep 0.5;
	
	player addBackpack "B_Parachute";
	sleep 1; //remove reserve chute
	
	player unassignItem "VQI_ReserveChute";
	player removeItem "VQI_ReserveChute";
};







efxATMO = [player] execVM "vqi_halo\VQI-DemonDropper\Freefall\vqi_halo_efx_atmo.sqf";




waitUntil {animationState player == "para_pilot"};
 
// Parachute Opening EFX & Sound
33 cutText ["", "BLACK IN", 2];
addCamShake [75, 5, 5];
playSound "open_chute";
playSound "grunt1";
playSound "open_chute2";
//sleep 5;

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

//W-I-P
while {(getPos player select 2) > 5} do {
	playSound "para_pilot";
	addCamShake [3, 4, 2];
	sleep 4;
};




//////////////////
/* NOTES:



*/