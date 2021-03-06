//
//
if ((leader group player != player)) exitWith {
	systemChat 'Sorry, Section commanders only.';
};
if (VQI_HINTS_HALO == 1) then { hint "flightplan.sqf"; };

private ["_start0","_flightAlt1","_flightAlt2","_flightALT","_rDir","_flightFOWx","_flightFOWy","_floorfix1","_floorfix2","_logicC","_logicG"];

	// menus
	//[[JumpMaster, ["H.A.L.O. Inspection", "[player] execVM 'vqi_halo\VQI-DemonDropper\FlightCrew\vqi_halo_inspection_halo.sqf'; [JumpMaster, 6]"]], "addAction", true, true] call BIS_fnc_MP;
	//[[JumpMaster, ["ParaJump Inspection", "[player] execVM 'vqi_halo\VQI-DemonDropper\FlightCrew\vqi_halo_inspection_para.sqf'; [JumpMaster, 7]"]], "addAction", true, true] call BIS_fnc_MP;

if (!isNil "VQI_HALO_JUMPCRAFT") then { deleteVehicle VQI_HALO_JUMPCRAFT; };
if (!isNil "trgCargo") then { deleteVehicle trgCargo; };
if (!isNil "jumpV") then { deleteVehicle jumpV; };

deleteMarker "mkrFP";
deleteMarker "mkrHT";
deleteMarker "mkrHT1";
deleteMarker "mkrHT2";
deleteMarker "mkrHT3";
deleteMarker "mkrHT4";

_start0 = [0,0,1000];

_flightAlt1 = random 610;		// 2,000'  -- random 2k for C-XXX
_flightAlt2 = random 3000;		// 9,800'  -- random 10k for XSR-72
_flightHALO = 1;

if (flightHALO == 1) then {	// H.A.L.O.
	if (planeType == 1) then { _flightALT = 10700 + _flightAlt1; };	// MC-130J Commando II		35,000' - 37,000'
	if (planeType == 2) then { _flightALT = 5500 + _flightAlt1; };	// XC-130 "Nightmare"		35,000' - 37,000'
	if (planeType == 3) then { _flightALT = 13700 + _flightAlt1; };	// C-17 Globemaster III	45,000' - 47,000'
	if (planeType == 4) then { _flightALT = 22000 + _flightAlt2; };	// XHR-1 "Vampyre"		72,000' - 82,000'
};

openMap true;
hint "L-Click to File Flight Plan";


// Map Click Option ///////////////------------------------------------------------
MapClickedHALO = false;
onMapSingleClick "posFLIGHTPLAN = _pos; MapClickedHALO = true; onMapSingleClick ''; true";
waitUntil {MapClickedHALO}; publicVariable "posFLIGHTPLAN"; sleep 1;

_logicC = createCenter sideLogic;
_logicG = createGroup _logicC;
objHALO = _logicG createUnit ["Logic", posFLIGHTPLAN, [], 0, "NONE"];
//objHALO = createUnit ["Logic", posFLIGHTPLAN, [], 0, "NONE"];
objHALO setPos (objHALO modelToWorld [0,0,-1]);
objHALO setVectorUp [0,0,1]; publicVariable "objHALO"; // Sign_Sphere25cm_F
///////////////////////////////////------------------------------------------------

hint "Stand by...";


// Create Jump Craft! 			
if (planeType == 1) then { VQI_HALO_JUMPCRAFT = "USAF_MC130" createVehicle _start0; };					// MC-130J Commando II ---	"USAF_MC130"
if (planeType == 2) then { VQI_HALO_JUMPCRAFT = "VQI_C130_Nightmare" createVehicle _start0; }; 			// XC-130 Nightmare  -----	"VQI_C130_Nightmare"
if (planeType == 3) then { VQI_HALO_JUMPCRAFT = "USAF_C17" createVehicle _start0; }; 					// C-17 Globemaster III --	"USAF_C17"
if (planeType == 4) then { VQI_HALO_JUMPCRAFT = "VQI_XHR1_Vampyre" createVehicle _start0; }; 				// XHR-1 Vampyre (Drone)--	"VQI_XHR1_Vampyre"


//_rDir = random 360;
//objHALO setDir _rDir;

if (flightHALO == 1) then {
	// set Fog-of-War (pilot error, wind, etc)  ----> HALO ONLY
	_flightFOWx = (random VQI_HALO_FFOW) - (random VQI_HALO_FFOW);
	_flightFOWy = (random VQI_HALO_FFOW) - (random VQI_HALO_FFOW);
};



// set the Jump Aircraft
VQI_HALO_JUMPCRAFT allowDamage false; 
VQI_HALO_JUMPCRAFT attachTo [objHALO,[_flightFOWx,_flightFOWy,_flightALT]]; //
VQI_HALO_JUMPCRAFT engineOn true;
VQI_HALO_JUMPCRAFT setDamage 0;
VQI_HALO_JUMPCRAFT setVectorUp [0,0,1];
player action ["LandGearUp", VQI_HALO_JUMPCRAFT];
publicVariable "VQI_HALO_JUMPCRAFT";


hint "";
// Markers & Intel
execVM "vqi_halo\VQI-DemonDropper\FlightPlan\vqi_halo_flightplan_markers.sqf";



// setVelocity Ref object
jumpV = "Land_PenBlack_F" createVehicle (position player); // "Sign_Sphere25cm_F"
jumpV attachTo [VQI_HALO_JUMPCRAFT,[0,0,0]];
jumpV setDir -180; publicVariable "jumpV";



// Add Altimeters to JumpCraft?
//VQI_HALO_JUMPCRAFT addItemCargoGlobal ["VQI_JumpBuddy_1",8];

// WIP TBD
//hint "SAM Sites Detected: \n -UNKNOWN-";



//if (flightHALO == 1) then {
	/*
	//////////////////////////////////////////////////////////
	// Trigger for EFX or use waitUntil? First Player starts sequence...
	trgCargo = createTrigger["EmptyDetector",getPos VQI_HALO_JUMPCRAFT];
	sleep 1;

	trgCargo setTriggerArea [25,25,0,false,20];
	trgCargo setTriggerActivation ["WEST","PRESENT",false];
	trgCargo setTriggerTimeout [60,60,60,false];
	trgCargo setTriggerStatements ["({_x in thisList} count (playableUnits + switchableUnits) > 0)", 
	"execVM 'vqi_halo\VQI-DemonDropper\JumpCraft\HALO\vqi_halo_cargohold_signals.sqf'; ",
	""];
	///////////////////////////////////////////////////////////
	trgCargo attachTo [VQI_HALO_JUMPCRAFT,[0,0,0]];
	detach trgCargo;
	*/
	
	
//};




//Fix the Damn Floor, or you'll trip and go into FreeFall animation!
_floorfix1 = "Box_NATO_WpsSpecial_F" createVehicle _start0; //HotFix
_floorfix2 = "Box_NATO_WpsSpecial_F" createVehicle _start0; //HotFix
clearWeaponCargoGlobal _floorfix1;
clearWeaponCargoGlobal _floorfix2;
clearMagazineCargoGlobal _floorfix1;
clearMagazineCargoGlobal _floorfix2;
clearItemCargoGlobal _floorfix1;
clearItemCargoGlobal _floorfix2;
_floorfix1 enableSimulation false;
_floorfix2 enableSimulation false;

if (planeType == 1) then {
	_floorfix1 attachTo [VQI_HALO_JUMPCRAFT,[ 0.68, 7.8, -4.7]];		// MC-130J Commando II --	"USAF_MC130"
	_floorfix2 attachTo [VQI_HALO_JUMPCRAFT,[-0.75, 7.8, -4.7]];		// MC-130J Commando II --	"USAF_MC130"
};

if (planeType == 2) then {
	_floorfix1 attachTo [VQI_HALO_JUMPCRAFT,[ 0.68, 0.6, -4.7]];		// XC-130
	_floorfix2 attachTo [VQI_HALO_JUMPCRAFT,[-0.75, 0.6, -4.7]];		// XC-130
	_pos = getPos VQI_HALO_JUMPCRAFT;
	_light = "#lightpoint" createVehicleLocal _pos;
	_light setLightBrightness 0.3;
	_light setLightAmbient [0.5, 0.0, 0.0];
	_light setLightColor [0.5, 0.0, 0.0];
	_light lightAttachObject [VQI_HALO_JUMPCRAFT, [ 0.71, 4, 0]];
};


// Set/Reset
BLUElightON = 0;
REDlight1ON = 0;
REDlight2ON = 0;
RampOpenYES = 0;

publicVariable "BLUElightON";
publicVariable "REDlight1ON";
publicVariable "REDlight2ON";
publicVariable "RampOpenYES";






if (VQI_HINTS_HALO == 1) then { hint "flightplan.sqf -END-"; };

/////////////////////////////
/* NOTES:




*/