// -MP-  JumpLighting/While players in Cargo set-up for SP/MP
// Audio, Lighting, and Ramp ONLY!!!
if (VQI_HINTS_HALO == 1) then { hint "cargohold_signals.sqf"; };
sleep 1;

if (VQI_HINTS_HALO == 1) then { hint "DO NOT Jump too soon - you will be OFF COURSE \n \n WAIT for GREEN/GO Signal"; };







sleep 60; // 1 Minute


/*

WIP ----> Custom Audio, EFX, Gear-Up, etc...

*/











private ["_start0"];

_start0 = [0,0,0];

//deleteVehicle trgCargo;
//sleep 1;


//Blue lighting - en route...
lightBLUE = "chemlight_blue" createVehicle _start0;
if (planeType == 1) then { lightBLUE attachTo [VQI_HALO_JUMPCRAFT,[0, 16, -1.80]]; };	// MC-130J Commando II
if (planeType == 2) then { lightBLUE attachTo [VQI_HALO_JUMPCRAFT,[0,  9, -1.85]]; };	// XC-130 Nightmare
if (planeType == 3) then { lightBLUE attachTo [VQI_HALO_JUMPCRAFT,[0,  7,  3.00]]; };
if (planeType == 4) then { lightBLUE attachTo [VQI_HALO_JUMPCRAFT,[0, -4,  0.75]]; };
BLUElightON = 1; publicVariable "BLUElightON";




sleep 90 + (random 60);
deleteVehicle lightBLUE;


 
//Red 1 Light: de-pressurize, Get Ready! Stand by...
lightRED1 = "chemlight_red" createVehicle _start0;
if (planeType == 1) then { lightRED1 attachTo [VQI_HALO_JUMPCRAFT,[1.6,  6, -3.1]]; };		// MC-130J Commando II
if (planeType == 2) then { lightRED1 attachTo [VQI_HALO_JUMPCRAFT,[1.6, -1, -3.2]]; };		// XC-130 Nightmare
if (planeType == 3) then { lightRED1 attachTo [VQI_HALO_JUMPCRAFT,[2.7,-11,  2.0]]; };
if (planeType == 4) then { lightRED1 attachTo [VQI_HALO_JUMPCRAFT,[0.0, -4,  0.7]]; };
REDlight1ON = 1; publicVariable "REDlight1ON";

[lightRED1,"ns_depress"] call CBA_fnc_globalSay3d;
if (VQI_HINTS_HALO == 1) then { hint "De-Pressurizing..."; };


sleep 30 + random 10;
deleteVehicle lightRED1;


sleep 2; // pause


//Red 2 Light: Open Ramp, Get into position, WAIT for GREEN!!
lightRED2 = "chemlight_red" createVehicle _start0;
if (planeType == 1) then { lightRED2 attachTo [VQI_HALO_JUMPCRAFT,[1.6,  6, -3.1]]; };		// MC-130J Commando II
if (planeType == 2) then { lightRED2 attachTo [VQI_HALO_JUMPCRAFT,[1.6, -1, -3.2]]; };		// XC-130 Nightmare
if (planeType == 3) then { lightRED2 attachTo [VQI_HALO_JUMPCRAFT,[2.7,-11,  2.0]]; };
if (planeType == 4) then { lightRED2 attachTo [VQI_HALO_JUMPCRAFT,[0.0, -4,  0.7]]; };
REDlight2ON = 1; publicVariable "REDlight2ON";
[lightRED2,"CargoDoor_Open_Mech"] call CBA_fnc_globalSay3d;
sleep 3;
[lightRED2,"CargoDoor_Open_HALO"] call CBA_fnc_globalSay3d;

// Open Ramp
if (planeType == 1) then {
	VQI_HALO_JUMPCRAFT animate ["ramp_bottom", 1];		// MC-130J Commando II
	VQI_HALO_JUMPCRAFT animate ["ramp_top", 1];			// MC-130J Commando II
};

if (planeType == 2) then {
	VQI_HALO_JUMPCRAFT animate ["ramp_bottom", 1];		// XC-130 Nightmare
	VQI_HALO_JUMPCRAFT animate ["ramp_top", 1];			// XC-130 Nightmare
};

if (planeType == 3) then {
	VQI_HALO_JUMPCRAFT say "globemaster_c17_doors";		// C-17 Globemaster III
	VQI_HALO_JUMPCRAFT animate ["back_ramp_half",1];		// C-17 Globemaster III
	VQI_HALO_JUMPCRAFT animate ["back_ramp_st_half",1];	// C-17 Globemaster III
	VQI_HALO_JUMPCRAFT animate ["back_ramp_p",1];			// C-17 Globemaster III
	VQI_HALO_JUMPCRAFT animate ["back_ramp_p_2",1];		// C-17 Globemaster III
	VQI_HALO_JUMPCRAFT animate ["back_ramp_door_main",1]	// C-17 Globemaster III
};

if (planeType == 4) then {
	VQI_HALO_JUMPCRAFT animate ["AnimateRAMP1", 1]; 		// XHR-1 "Vampyre" Drone
};





sleep 5; // MP????
addCamShake [2,2,7];
RampOpenYES = 1; 
publicVariable "RampOpenYES";



sleep 10;
[lightRED2,"ns_ongreen"] call CBA_fnc_globalSay3d;

sleep 20 + (random 20);
deleteVehicle lightRED2;



//Green Light: GO-GO-GO!!!
lightGREEN = "chemlight_green" createVehicle _start0; 
if (planeType == 1) then { lightGREEN attachTo [VQI_HALO_JUMPCRAFT,[1.6,  6, -3.1]]; };		// MC-130J Commando II
if (planeType == 2) then { lightGREEN attachTo [VQI_HALO_JUMPCRAFT,[1.6, -1, -3.2]]; };		// XC-130 Nightmare
if (planeType == 3) then { lightGREEN attachTo [VQI_HALO_JUMPCRAFT,[2.7,-11,  2.0]]; };
if (planeType == 4) then { lightGREEN attachTo [VQI_HALO_JUMPCRAFT,[0.0, -4,  0.7]]; };
[lightGREEN,"ns_gogogo"] call CBA_fnc_globalSay3d;





/////////////////////
/* NOTES:



*/