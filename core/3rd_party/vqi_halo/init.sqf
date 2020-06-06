waitUntil {sleep 1; !isNil "bis_fnc_init"};
///////////////////////////////////////////


// Functions, EventHandlers, Variables
execVM "vqi_halo\VQI-DemonDropper\vqi_leap_functions.sqf";
_args = _this;
_logic = _this select 0;


if (isServer) then {
	CONTROL_TABLE = "FLAG_ADFU_F" createVehicle (position _logic);
	CONTROL_TABLE setDir (getDir _logic);
	VQI_HALO_XC130 = "VQI_C130_NIGHTMARE";
	if (_HALOAircraftALT == 2) then {  // Wasp/Canberra 16.8m Deck
		CONTROL_TABLE setPosASL [position CONTROL_TABLE select 0, position CONTROL_TABLE select 1, 16.8];
	};
	if (_HALOAircraftALT == 3) then { // Liberty Deck
		CONTROL_TABLE setPosASL [position CONTROL_TABLE select 0, position CONTROL_TABLE select 1, 8.9];
	};
 	if (!isNil "CONTROL_TABLE") then { execVM "vqi_halo\VQI-DemonDropper\GroundStart\vqi_halo_groundcraft_XC130.sqf" }; 
};


sleep 20;


// Equipment - Altimeter
_nul = [player] execVM "vqi_halo\VQI-DemonDropper\Equipment\Altimeter\vqi_halo_altimeter_key_watch.sqf"; // Altimeter


if (isServer) then { 
	// Set Temp V from Server
	R1X_Number = random 5;	 	publicVariable "R1X_Number"; // Temp HotFix
	R2X_Number = random 10; 	publicVariable "R2X_Number";
	R3X_Number = random 15;	publicVariable "R3X_Number";
	
	rCargoTemp1 = random 10;	publicVariable "rCargoTemp1";
	rCargoTemp2 = random 10;	publicVariable "rCargoTemp2";
	rCargoTemp3 = random 10;	publicVariable "rCargoTemp3";
	rCargoTemp4 = random 10;	publicVariable "rCargoTemp4";
	
	BLUElightON = 0;	publicVariable "BLUElightON";
	REDlight1ON = 0;	publicVariable "REDlight1ON";
	REDlight2ON = 0;	publicVariable "REDlight2ON";
	RampOpenYES = 0;	publicVariable "RampOpenYES";
	
	
	flightHALO = 0;	publicVariable "flightHALO";
	sleep 1;
	
	
	
};


sleep 1;
profileNamespace setVariable ["AltimeterKeyToggle", false];


// User Custom KeyBinding --> set config?
execVM "vqi_halo\XEH_postClientInit.sqf";







sleep 1;
//systemChat "L.E.A.P Initialized -- Keybinding: SHIFT + L";
//////////////////////////////////////////
/* NOTES:

JB1 = compile preprocessFileLineNumbers "\vqi_halo\VQI-DemonDropper\Altimeter\vqi_altimeter.sqf";




*/