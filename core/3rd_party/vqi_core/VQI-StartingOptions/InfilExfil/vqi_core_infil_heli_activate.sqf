//
//


private ["_emptySeats","_heli","_emptySeats","_wpH1","_wpH2","_noe","_noeP","_aslP","_seats","_ROE"];


_ROE = "CARELESS";
_heli = "B_Heli_Light_01_F";

// Heli Classname
if (VQI_CORE_SUPPORT_HELI == 1) then { _heli = VQI_CORE_COREHELI_1; };
if (VQI_CORE_SUPPORT_HELI == 2) then { _heli = VQI_CORE_COREHELI_2; };
if (VQI_CORE_SUPPORT_HELI == 3) then { _heli = VQI_CORE_COREHELI_3; };
if (VQI_CORE_SUPPORT_HELI == 4) then { _heli = VQI_CORE_COREHELI_4; };

// Heli
coreHELI = createVehicle [_heli, getMarkerPos "mkrCORE_IN", [], 0, "FLY"];
createVehicleCrew coreHELI;
publicVariable "coreHELI"; 
sleep 2;


// set helicopter options?
if (typeOf coreHELI == "C_Heli_Light_01_civil_F") then { coreHELI animate ["AddDoors",1]; coreHELI setObjectTextureGlobal [0,"A3\Air_F\Heli_light_01\Data\heli_light_01_ext_co.paa"]; };
if (typeOf coreHELI == "B_Heli_Light_01_F") then { coreHELI allowDamage false; /* coreHELI setCaptive true;*/ coreHELI setObjectTextureGlobal [0,"A3\Air_F\Heli_light_01\Data\heli_light_01_ext_ion_co.paa"]; };
if (typeOf coreHELI == "B_Heli_Transport_01_camo_F") then { coreHELI allowDamage false; };
if (typeOf coreHELI == "B_Heli_Transport_03_F") then { if (random 100 < 75) then { coreHELI allowDamage false; }; };		// 75% of armor


// feedback
//if (VQI_CORE_SUPPORT_HELI == 1) then { hint "CIA - SAD/SOG MH-9: \n Standing by..."; };
//if (VQI_CORE_SUPPORT_HELI == 2) then { hint "USAF - 160th SOAR MH-9: \n Standing by..."; };
//if (VQI_CORE_SUPPORT_HELI == 3) then { hint "NATO - UH-80 GhostHawk: \n Standing by..."; };
//if (VQI_CORE_SUPPORT_HELI == 4) then { hint "NATO - CH-67 Huron: \n Standing by... \n \n CAS - AH-99 Blackfoot: \n Standing by..."; };
hint "Support Heli Standing by... \n Flight Crew Ready!";

//[[LogisticsDesk, ["ECHO ONE -- Board Heli", "player moveInCargo (coreHELI select 0); [LogisticsDesk, 3]"]], "addAction", true, true] call BIS_fnc_MP;
sleep 5;

/*
// set height
if (VQI_CORE_SUPPORT_HELI == 1) then { (coreHELI select 0) setPos ((coreHELI select 0) modelToWorld [0,0,100]); };
if (VQI_CORE_SUPPORT_HELI == 2) then { (coreHELI select 0) setPos ((coreHELI select 0) modelToWorld [0,0,200]); };
if (VQI_CORE_SUPPORT_HELI == 3) then { (coreHELI select 0) setPos ((coreHELI select 0) modelToWorld [0,0,400]); };
if (VQI_CORE_SUPPORT_HELI == 4) then { (coreHELI select 0) setPos ((coreHELI select 0) modelToWorld [0,0,800]); };
*/














// CARGO - Weapons & Equipment
clearWeaponCargoGlobal coreHELI;
clearMagazineCargoGlobal coreHELI;
clearItemCargoGlobal coreHELI;
clearBackpackCargoGlobal coreHELI;
/*
if (VQI_CORE_SUPPORT_HELI == 1) then { 	// MH-9 SAD/SOG
	coreHELI addWeaponCargoGlobal ["SMG_05_F",2];
	coreHELI addMagazineCargoGlobal ["30Rnd_9x21_Mag_SMG_02",10];
	coreHELI addWeaponCargoGlobal ["arifle_AKS_F",1];
	coreHELI addMagazineCargoGlobal ["30Rnd_545x39_Mag_F",5];
};
*/
if (VQI_CORE_SUPPORT_HELI == 2) then { 	// MH-9 160th SOAR
	coreHELI addWeaponCargoGlobal ["SMG_02_F",4];
	coreHELI addMagazineCargoGlobal ["30Rnd_9x21_Mag_SMG_02",40];
	coreHELI addWeaponCargoGlobal ["srifle_DMR_03_DMS_F",1];
	coreHELI addMagazineCargoGlobal ["20Rnd_762x51_Mag",20];
	coreHELI addItemCargoGlobal ["optic_MRCO",4];
	coreHELI addItemCargoGlobal ["optic_Nightstalker",1];
	coreHELI addItemCargoGlobal ["acc_flashlight",4];
	coreHELI addItemCargoGlobal ["Rangefinder",1];
	coreHELI addMagazineCargoGlobal ["MiniGrenade",16];
	coreHELI addMagazineCargoGlobal ["HandGrenade",8];
	coreHELI addMagazineCargoGlobal ["B_IR_Grenade",4];
	coreHELI addMagazineCargoGlobal ["Chemlight_red",10];
	coreHELI addMagazineCargoGlobal ["SmokeShellBlue",4];
};
if (VQI_CORE_SUPPORT_HELI == 3) then {	// UH-80 Ghost Hawk
	coreHELI addWeaponCargoGlobal ["arifle_SPAR_01_blk_F",4];
	coreHELI addMagazineCargoGlobal ["30Rnd_556x45_Stanag",80];
	coreHELI addWeaponCargoGlobal ["arifle_SPAR_02_blk_F",1];
	coreHELI addMagazineCargoGlobal ["150Rnd_556x45_Drum_Mag_F",6];
	coreHELI addWeaponCargoGlobal ["arifle_SPAR_03_blk_MOS_Pointer_Bipod_F",1];
	coreHELI addMagazineCargoGlobal ["20Rnd_762x51_Mag",16];
	coreHELI addWeaponCargoGlobal ["launch_NLAW_F",1];
	coreHELI addMagazineCargoGlobal ["NLAW_F",4];
	coreHELI addMagazineCargoGlobal ["ClaymoreDirectionalMine_Remote_Mag",4];
	coreHELI addMagazineCargoGlobal ["DemoCharge_Remote_Mag",2];
	coreHELI addItemCargoGlobal ["optic_DMS",4];
	coreHELI addItemCargoGlobal ["optic_NVS",1];
	coreHELI addItemCargoGlobal ["optic_tws",1];
	coreHELI addItemCargoGlobal ["acc_flashlight",4];
	coreHELI addItemCargoGlobal ["acc_pointer_IR",4];
	coreHELI addItemCargoGlobal ["Rangefinder",2];
	coreHELI addMagazineCargoGlobal ["MiniGrenade",30];
	coreHELI addMagazineCargoGlobal ["HandGrenade",20];
	coreHELI addMagazineCargoGlobal ["B_IR_Grenade",4];
	coreHELI addMagazineCargoGlobal ["Chemlight_green",20];
	coreHELI addMagazineCargoGlobal ["SmokeShellGreen",8];
	coreHELI addMagazineCargoGlobal ["SmokeShell",16];
	coreHELI addWeaponCargoGlobal ["arifle_TRG21_GL_MRCO_F",1];
	coreHELI addMagazineCargoGlobal ["1Rnd_HE_Grenade_shell",20];
	coreHELI addMagazineCargoGlobal ["UGL_FlareWhite_F",10];
};
if (VQI_CORE_SUPPORT_HELI == 4) then {	// CH-67 Huron -- w/ CAS
	coreHELI addWeaponCargoGlobal ["arifle_SPAR_01_blk_F",4];
	coreHELI addMagazineCargoGlobal ["30Rnd_556x45_Stanag",80];
	coreHELI addWeaponCargoGlobal ["arifle_SPAR_02_blk_F",1];
	coreHELI addMagazineCargoGlobal ["150Rnd_556x45_Drum_Mag_F",6];
	coreHELI addWeaponCargoGlobal ["arifle_SPAR_03_blk_MOS_Pointer_Bipod_F",1];
	coreHELI addMagazineCargoGlobal ["20Rnd_762x51_Mag",16];
	coreHELI addWeaponCargoGlobal ["launch_NLAW_F",1];
	coreHELI addMagazineCargoGlobal ["NLAW_F",4];
	coreHELI addWeaponCargoGlobal ["launch_I_Titan_short_F",1];
	coreHELI addWeaponCargoGlobal ["launch_I_Titan_F",1];
	coreHELI addMagazineCargoGlobal ["Titan_AP",4];
	coreHELI addMagazineCargoGlobal ["Titan_AT",4];
	coreHELI addMagazineCargoGlobal ["Titan_AA",4];
	coreHELI addMagazineCargoGlobal ["ClaymoreDirectionalMine_Remote_Mag",4];
	coreHELI addMagazineCargoGlobal ["DemoCharge_Remote_Mag",2];
	coreHELI addItemCargoGlobal ["optic_DMS",4];
	coreHELI addItemCargoGlobal ["optic_NVS",1];
	coreHELI addItemCargoGlobal ["optic_tws",1];
	coreHELI addItemCargoGlobal ["acc_flashlight",4];
	coreHELI addItemCargoGlobal ["acc_pointer_IR",4];
	coreHELI addItemCargoGlobal ["Rangefinder",2];
	coreHELI addMagazineCargoGlobal ["MiniGrenade",30];
	coreHELI addMagazineCargoGlobal ["HandGrenade",20];
	coreHELI addMagazineCargoGlobal ["B_IR_Grenade",4];
	coreHELI addMagazineCargoGlobal ["Chemlight_green",20];
	coreHELI addMagazineCargoGlobal ["SmokeShellGreen",8];
	coreHELI addMagazineCargoGlobal ["SmokeShell",16];
	coreHELI addWeaponCargoGlobal ["arifle_TRG21_GL_MRCO_F",1];
	coreHELI addMagazineCargoGlobal ["1Rnd_HE_Grenade_shell",20];
	coreHELI addMagazineCargoGlobal ["UGL_FlareWhite_F",10];
	coreHELI addBackpackCargoGlobal ["B_Mortar_01_Support_F",1];
	coreHELI addBackpackCargoGlobal ["B_Mortar_01_Weapon_F",1];
	coreHELI addBackpackCargoGlobal ["B_UAV_01_Backpack_F",1];
	coreHELI addWeaponCargoGlobal ["B_UAVTerminal",2];
};
sleep 1;


/*
// Create LZ
LZPad = createVehicle ["Land_HeliPadEmpty_F", getMarkerPos "mkrCORE_LZ", [], 0, "NONE"];
publicVariable "LZPad";
sleep 2;

// Set Direction (for camera)
coreHELI setDir getDir LZPad;
sleep 1;
*/







// Wait for Players... (empty seat count)
_cargoSeatsW = coreHELI emptyPositions "cargo";	// x

waitUntil {
	_cargoSeatsR = coreHELI emptyPositions "cargo"; sleep 3; 
	_cargoSeatsR < _cargoSeatsW;
 };

 
 
 
 
 
 
 
// CAS
if (VQI_CORE_SUPPORT_HELI == 4) then { execVM "vqi_core\VQI-StartingOptions\InfilExfil\vqi_core_infil_heli_cas.sqf"; };

// Camera
//execVM "vqi_core\VQI-CreepyCORE\InfilExfil\vqi_core_infil_heli_activate_camera.sqf";

// Text
//execVM "vqi_core\VQI-CreepyCORE\InfilExfil\vqi_core_infil_heli_activate_text.sqf";






/*
(coreHELI select 0) addAction ["--------------"," "];
(coreHELI select 0) addAction ["ECHO ONE - Request TRANSPORT","vqi_core\VQI-CreepyCORE\InfilExfil\vqi_core_transport_heli_move.sqf"];
(coreHELI select 0) addAction ["ECHO ONE - Request HELOCAST","vqi_core\VQI-CreepyCORE\InfilExfil\vqi_core_transport_heli_helocast.sqf"];
(coreHELI select 0) addAction ["--------------"," "];
(coreHELI select 0) addAction ["ECHO ONE - Keep it on the DECK!",{ (coreHELI select 0) flyInHeight 20; (coreHELI select 0) setSpeedMode "FULL"; player sideChat "Stay Low!!!"; }];
(coreHELI select 0) addAction ["ECHO ONE - Low and Slow...",{ (coreHELI select 0) flyInHeight 10; (coreHELI select 0) setSpeedMode "LIMITED"; player sideChat "Mow the lawn! Treetop level."; }];
(coreHELI select 0) addAction ["ECHO ONE - Take it UP! Climb 200m",{ (coreHELI select 0) flyInHeight 200; (coreHELI select 0) setSpeedMode "NORMAL"; player sideChat "Grab some altitude! Up Up Up!"; }];
(coreHELI select 0) addAction ["--------------"," "];
(coreHELI select 0) addAction ["ECHO ONE - FULL Exfil - Return ROC","vqi_core\VQI-CreepyCORE\InfilExfil\vqi_core_exfil_return_toc.sqf"];
(coreHELI select 0) addAction ["ECHO ONE - FULL Exfil - Mission End","vqi_core\VQI-CreepyCORE\InfilExfil\vqi_core_exfil_missionend.sqf"];
*/


// En Route
_heli = coreHELI;
_heli allowFleeing 0;


_wpH1 = (group coreHELI) addWaypoint [getMarkerPos "mkrCORE_LZ", 0];
_wpH1 setWaypointType "MOVE";
_wpH1 setWaypointSpeed "FULL";
_wpH1 setWaypointBehaviour _ROE;
_wpH1 setWaypointCombatMode "GREEN";	// Defend ONLY

sleep 5;
if (VQI_CORE_SUPPORT_HELI == 1) then { _heli flyInHeight VQI_CORE_COREHELI_1_ALTS; 	_heli setSpeedMode "FULL"; };		// CIV MH-9
if (VQI_CORE_SUPPORT_HELI == 2) then { _heli flyInHeight VQI_CORE_COREHELI_2_ALTS;  	_heli setSpeedMode "FULL"; };		// S.O.A.R
if (VQI_CORE_SUPPORT_HELI == 3) then { _heli flyInHeight VQI_CORE_COREHELI_3_ALTS;  	_heli setSpeedMode "FULL"; };		// Ghost Hawk
if (VQI_CORE_SUPPORT_HELI == 4) then { _heli flyInHeight VQI_CORE_COREHELI_4_ALTS; 	_heli setSpeedMode "FULL"; };		// Huron-Twin w/ CAS






// misc text
execVM "vqi_core\VQI-StartingOptions\InfilExfil\vqi_core_infil_heli_radiotext.sqf";

_noe = true;
while {_noe} do {

	_noeP = _heli modelToWorld [0,200,0];
	_aslP = getTerrainHeightASL _noeP;

	if (_aslP > 0) then { _noe = false; };
	sleep 0.2;
};
if (VQI_CORE_SUPPORT_HELI == 1) then { _heli flyInHeight VQI_CORE_COREHELI_1_ALTL; };
if (VQI_CORE_SUPPORT_HELI == 2) then { _heli flyInHeight VQI_CORE_COREHELI_2_ALTL; };
if (VQI_CORE_SUPPORT_HELI == 3) then { _heli flyInHeight VQI_CORE_COREHELI_3_ALTL; };
if (VQI_CORE_SUPPORT_HELI == 4) then { _heli flyInHeight VQI_CORE_COREHELI_4_ALTL; };
_heli vehicleChat "Hang On!";





waitUntil { sleep 5; (getMarkerPos "mkrCORE_LZ") distance2D coreHELI < 3000; };
_heli vehicleChat "Stand By.. On final approach...."; sleep 5;

if (VQI_CORE_SUPPORT_HELI == 3 || VQI_CORE_SUPPORT_HELI == 4) then { _heli vehicleChat "Door Gunners - Lock & Load..."; };






//----LAND-----------------------------------------------

waitUntil {sleep 1; (getMarkerPos "mkrCORE_LZ") distance _heli < 750};
_heli vehicleChat "L.Z. in sight..."; sleep 5;
_heli flyInHeight 20;

if (VQI_CORE_SUPPORT_HELI == 3 || VQI_CORE_SUPPORT_HELI == 4) then { _heli vehicleChat "Door Gunners - FIRE AT WILL!"; };


_wpH2 = (group coreHELI) addWaypoint [getMarkerPos "mkrCORE_LZ", 1];
_wpH2 setWaypointType "MOVE";
_wpH2 setWaypointSpeed "FULL";
_wpH2 setWaypointStatements ["true","(vehicle coreHELI) land 'land';"];
_wpH2 setWaypointBehaviour _ROE;
_wpH2 setWaypointCombatMode "YELLOW";	// FIRE

//---------------------------------------------------------------
/*
"NO CHANGE"
"BLUE"			(Never fire)
"GREEN"			(Hold fire - defend only)
"WHITE"			(Hold fire, engage at will)
"YELLOW"			(Fire at will)
"RED"			(Fire at will, engage at will) 
*/





// Open Doors
if (VQI_CORE_SUPPORT_HELI == 3) then {

	waitUntil { sleep 1; getPosATL coreHELI select 2 < 15; };
	sleep 1 + (random 10);

	coreHELI animateDoor ["Door_L", 1]; sleep 1;
	coreHELI animateDoor ["Door_R", 1];
};
sleep 1;
if (random 100 < 50) then { _heli vehicleChat "Grab any extra Gear if needed, then find cover quickly..."; sleep 1; };
if (random 100 < 50) then { _heli vehicleChat "When we land, get clear of the Heli..."; sleep 1; };





sleep 10;
if (random 100 < 50) then { _heli vehicleChat "We need to GO. Let's Move!"; };
hint "Shift + C \n \n Select 'HELI-RTB' to send \n Support Heli Home";








/////////////////
/* NOTES:

//doStop coreHELI;
//(coreHELI select 0) land "LZPad";		// land at LZ

//{unassignVehicle _x} forEach crew _heli;
//{_x leaveVehicle _heli} forEach playableUnits;

*/