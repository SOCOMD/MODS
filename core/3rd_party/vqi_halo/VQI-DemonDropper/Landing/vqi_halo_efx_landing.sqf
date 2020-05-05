// Landing EFX & Immersion!
//


private ["_unit"];
_unit = _this select 0;



// BOOTS-ON-THE-GROUND		(WATER?)		W-I-P
waitUntil { isTouchingGround _unit || (getPos _unit select 2) < 2 };

resetCamShake;



// Landing EFX
if (true) then {	
	
	playSound "grunt_equip";

	33 cutText ["", "BLACK IN", 2];
	addCamShake [30, 5, 5]; // p,d,f
	playSound "close_chute";
	
	"dynamicBlur" ppEffectEnable true;   
	"dynamicBlur" ppEffectAdjust [6];   
	"dynamicBlur" ppEffectCommit 0;     
	"dynamicBlur" ppEffectAdjust [0];  
	"dynamicBlur" ppEffectCommit 5;
	
	
	
	sleep 5;
	resetCamShake;
	
	// W-I-P Visual Range
	showGPS True;
	showMAP True;
	showCompass True;
};



// forgot why I needed this...
if (!isNil "CARGO_HALOCRATE") then { CARGO_HALOCRATE setVelocity [0, 0, -1]; };



// ADD Parachute and Hide/Bury Equipment?
//execVM "vqi_halo\VQI-DemonDropper\Landing\vqi_halo_burychute.sqf";













sleep 1200;
if (isServer) then {
	if (VQI_AIRCRAFT_DEL == 1) then { deleteVehicle VQI_HALO_JUMPCRAFT; };
};


/////////
/* NOTES:



*/