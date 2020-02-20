// ParaJump Effects! Immersion is Key!!
// EFX TESTING - NEED Health EFX as well, O2 supply?
//

player allowDamage false; 
//execVM "\vqi_halo\VQI-DemonDropper\vqi_efx_cargo.sqf";
disableSerialization; //What the heck does this do again?
999 cutRsc ["WORLD_MAP_1", "PLAIN"];

if (VQI_T_AUDIO_HALO == 1) then { playSound "ns_intro"; };


if (isServer) then {
	_jumpPlaneTravel = (0.2 + random 1);
	skipTime _jumpPlaneTravel;
};


sleep 1;
VQIHALO2 setDamage 0;
VQIHALO2 setDammage 0;
sleep 1;

// Engine - ScramJet Technologies (temp fix)
//if (!isNull(VQI_HALO_XHR1)) then {
//execVM "vqi_halo\VQI-DemonDropper\vqi_jetengine.sqf";};
	

//Equipment EFX
H1 = [] execVM "vqi_halo\VQI-DemonDropper\vqi_helmet.sqf";
sleep 1;
O2 = [] execVM "vqi_halo\VQI-DemonDropper\vqi_rebreather.sqf";
sleep 1;


//Aircraft EFX
RC = [] execVM "vqi_halo\VQI-DemonDropper\vqi_efx_radiochatter.sqf";
sleep 1;



if (VQI_HINTS_HALO == 1) then {sleep 3;
	hint "Altimeter: Hold 'Watch' Button"; sleep 3;
	//hint "En-route: DO NOT Jump too soon or you will be OFF COURSE \n WAIT for GREEN/GO Signal";
};
		
sleep 1;
hint "Jump when Ready";


// Cargo Ramp
if (!isNull(VQI_HALO_C130)) then {
	VQIHALO2 animate ["ramp_bottom", 1];		// MC-130J Commando II
	VQIHALO2 animate ["Ramp_top", 1];			// MC-130J Commando II
};

sleep 2;
addCamShake [2,2,7];
//hint "Open Ramp - Get into position...";








		
//enableCamShake true; 
waitUntil {((animationState player == "HaloFreeFall_non") || (animationState player == "HaloFreeFall_F") || (animationState player == "HaloFreeFall_B"))};

//Simulated Velocity - Need -180* Direction of Aircraft
//player setVelocity [0, 150, 10];
//player setVelocity [(sin getDir VQIHALO2* 1),(cos getDir VQIHALO2* -150), 10];
player setVelocity [30 * (sin (getDir jumpV)), 30 * (cos (getDir jumpV)), 5];



//HIT THE ATMO!!!  -- ParaJump!
addCamShake [90, 10, 10]; //power, duration, frequency
playSound "grunt1";
playSound "Wind_Ext_PARA"; //Para
playSound "HALOExt";
addCamShake [20, 10, 10];
addCamShake [10, 20,  5];


sleep 1;

// Off Course? HALO
//ANTSY = [] execVM "vqi_halo\VQI-DemonDropper\vqi_antsypants.sqf";
//sleep 1;

33 cutText ["", "BLACK IN", 3];
		"DynamicBlur" ppEffectEnable true;  
		"DynamicBlur" ppEffectAdjust [8.0];  
		"DynamicBlur" ppEffectCommit 0.01;
		sleep 1;
		"DynamicBlur" ppEffectAdjust [0.0]; 
		"DynamicBlur" ppEffectCommit 23;
		sleep 3;
		"DynamicBlur" ppEffectEnable false;
		"RadialBlur" ppEffectAdjust [0.0, 0.0, 0.0, 0.0]; //WIP
		"RadialBlur" ppEffectCommit 1.0; 
		"RadialBlur" ppEffectEnable false;
/* HALO
if ((cameraView == "INTERNAL") && ((getposASL player select 2) < 10111)) then { //M not FT, 11111m=36.6K'
3 cutRsc ["VQI_HALO_HELMET_FOGGED1_EFX", "PLAIN"];
addCamShake [10, 20, 12];
};
if ((cameraView == "INTERNAL") && ((getposASL player select 2) > 10111)) then { //33.3K'
3 cutRsc ["VQI_HALO_HELMET_FOGGED2_EFX", "PLAIN"];
addCamShake [10, 20, 12];
};
if ((cameraView == "INTERNAL") && ((getposASL player select 2) > 11111)) then { //36.6K'
4 cutRsc ["VQI_HALO_HELMET_ICE1_EFX", "PLAIN"];
addCamShake [10, 20, 12];
};
*/


sleep 1;		// Set AI ----- W-I-P
execVM "vqi_halo\VQI-DemonDropper\vqi_ai_halo.sqf";

//More EFX & better immersion Coming in V2 release...
sleep 1;		// Atmosphere EFX!
efxATMO = [] execVM "vqi_halo\VQI-DemonDropper\vqi_efx_atmo.sqf";
sleep 1;

// Enemy Radar System
if (VQI_EnemyRadar_HALO == 1) then {
	// PARA - Scramble QRF Team: X %
	if (random 100 < 95) then {
		execVM "\vqi_dark\VQI-DeadDARK\vqi_dark_reinforcements_heli_cargotroops.sqf";
	};
};

sleep 20;
player allowDamage true;






if (VQI_HINTS_HALO == 1) then { sleep 10;
hint "Altimeter: Hold 'Watch' Button";};
		
		
sleep 5;			
//BOOTS-ON-THE-GROUND		(WATER?)		W-I-P   HOW in FUCK to FIX!?
waitUntil {isTouchingGround player || (getPos player select 2) < 2};
//if (surfaceIsWater position player) then {player playMove "AdvePercMstpSnonWnonDnon"};

terminate O2;
terminate efxATMO;
terminate efxFFn;
terminate efxFFf;
resetCamShake;




CARGO_HALOCRATE setVelocity [0, 0, -1];
////////////////////////////////////////////////////


	
if (true) then {	
	// Landing Immersion EFX & Sound - WIP
	playSound "grunt_equip";
	//detach jumpLightRED;

	33 cutText ["", "BLACK IN", 2];
	addCamShake [30, 5, 5];
	playSound "close_chute";
	"dynamicBlur" ppEffectEnable true;   
	"dynamicBlur" ppEffectAdjust [6];   
	"dynamicBlur" ppEffectCommit 0;     
	"dynamicBlur" ppEffectAdjust [0.0];  
	"dynamicBlur" ppEffectCommit 5;
	
	
	
	sleep 5;
	resetCamShake;
	//_unit setDamage 0; - heal player to 100% in case of injury?   WIP!
	//if (isTouchingGround player) then {player playMove "AmovPpneMstpSrasWrflDnon"};
	
	// W-I-P Visual Range, Better Immersion? FPS Lag???
	setViewDistance 2500;
	
	showGPS True;
	showMAP True;
	showCompass True;
};

sleep 30;
if (isServer) then {
	if ((VQI_AIRCRAFT_DEL == 2) || (VQI_AIRCRAFT_DEL == 3)) then {
	deleteVehicle VQIHALO2;
	};
};



//	