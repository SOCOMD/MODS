waitUntil {sleep 1; !isNil "bis_fnc_init"};
///////////////////////////////////////////
sleep 1;


// Functions, EventHandlers, Variables
execVM "vqi_halo\VQI-DemonDropper\vqi_leap_functions.sqf";





if (isServer) then {

	// MC-130J
	if (!isNil "VQI_HALO_MC130") then { execVM "vqi_halo\VQI-DemonDropper\GroundStart\vqi_halo_groundcraft_MC130.sqf"; };

	// XC-130
	if (!isNil "VQI_HALO_XC130") then { execVM "vqi_halo\VQI-DemonDropper\GroundStart\vqi_halo_groundcraft_XC130.sqf"; };

	// C-17
	if (!isNil "VQI_HALO_C17") then { execVM "vqi_halo\VQI-DemonDropper\GroundStart\vqi_halo_groundcraft_C17.sqf"; };

	// XHR-1
	if (!isNil "VQI_HALO_XHR1") then { execVM "vqi_halo\VQI-DemonDropper\GroundStart\vqi_halo_groundcraft_XHR1.sqf"; };
};


sleep 20;


// Equipment - Altimeter
_nul = [player] execVM "vqi_halo\VQI-DemonDropper\Equipment\Altimeter\vqi_halo_altimeter_key_watch.sqf"; // Altimeter
sleep 1;


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
	
	
	flightPARA = 0;	publicVariable "flightPARA";
	flightHALO = 0;	publicVariable "flightHALO";
	sleep 1;
	
	
	
	// Enemy Airspace AOs
	//execVM "vqi_halo\VQI-DemonDropper\Airspace\vqi_leap_airspace.sqf";			// moved to SCAR
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