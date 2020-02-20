// Spawn Ground Craft with Flight Crew -- C-130X Nightmare
// 
if (VQI_HINTS_HALO == 1) then { hint "groundcraft_XC130.sqf"; };
sleep 1;



private ["_start0","_flightCrew3","_flightCrew4",];
if (!isServer) exitWith {};


_start0 = [0,0,0];


if (isServer) then {
	_flightCrew3 = createGroup WEST; // BLUFOR Black-Ops HALO/PARA Crew
	_flightCrew4 = createGroup WEST; // BLUFOR Black-Ops HALO/PARA Crew

	// SYNTAX:   "classname" createUnit [position, group, init, skill, rank]
	//_FlightCrew1 = "B_Helipilot_F" createUnit [position player, _groupHALO1, "Commander = this", 0.9, "MAJOR"];
	//_FlightCrew2 = "B_Helipilot_F" createUnit [position player, _groupHALO2, "Pilot = this", 0.8, "CAPTAIN"];
	//_FlightCrew3 = "USAF_SFS_Officer_Green3" createUnit [position player, _groupHALO3, "JumpMaster = this", 0.7, "LIEUTENANT"];
	//_FlightCrew4 = "USAF_SFS_Officer_Green2" createUnit [position player, _groupHALO4, "LoadMaster = this", 0.6, "SERGEANT"];
	//_FlightCrew5 = "USAF_SFS_Officer_Green1" createUnit [position player, _groupHALO5, "FlightMedic = this", 0.6, "SERGEANT"];
	//_FlightCrew6 = "B_Helipilot_F" createUnit [position player, _groupHALO6, "SecurityOps = this", 0.6, "SERGEANT"];

	JumpMaster  = _flightCrew3 createUnit ["B_Helipilot_F", position player, [], 25, "NONE"]; publicVariable "JumpMaster";
	LoadMaster  = _flightCrew4 createUnit ["B_Helipilot_F", position player, [], 25, "NONE"]; publicVariable "LoadMaster";

	{ removeAllweapons _x; removeAllItems _x;  removeAllAssignedItems _x;  removeBackpack _x;  removeVest _x; } forEach units _flightCrew3;
	{ removeAllweapons _x; removeAllItems _x;  removeAllAssignedItems _x;  removeBackpack _x;  removeVest _x; } forEach units _flightCrew4;


	JumpMaster  addHeadgear "H_Cap_headphones";
	LoadMaster  addHeadgear "H_Cap_headphones";


	JumpMaster  SetGroupID ["JumpMaster"];
	LoadMaster  SetGroupID ["LoadMaster"];

	JumpMaster  attachTo [VQI_HALO_XC130,[ -2,-6,-5.5]]; 		// 
	LoadMaster  attachTo [VQI_HALO_XC130,[ -1, 5,-4.6]];		// 

	sleep 1;

	detach JumpMaster;
	detach LoadMaster;
	//detach FlightMedic;

	JumpMaster  setFormDir (getDir VQI_HALO_XC130 + 1);
	LoadMaster  setFormDir (getDir VQI_HALO_XC130 + 160);
	//FlightMedic setFormDir (getDir VQI_HALO_XC130 + 200);

	// https://community.bistudio.com/wiki/BIS_fnc_ambientAnim
	//[JumpMaster,"LISTEN_BRIEFING","ASIS"] call BIS_fnc_ambientAnim;
	
	[[JumpMaster,"Acts_A_M01_briefing"],
	"switchMove"] call BIS_fnc_MP;
	
	[[LoadMaster,"Acts_A_M01_briefing"],
	"switchMove"] call BIS_fnc_MP;
	


	// HALO/PARA Operations Flight Crew Menu
	[[JumpMaster, ["Flight Plan: XC-130 Nightmare -- H.A.L.O.", "missionNamespace setVariable ['planeType', 2, true]; missionNamespace setVariable ['flightHALO', 1, true];  execVM 'vqi_halo\VQI-DemonDropper\FlightPlan\vqi_halo_flightplan.sqf'; [JumpMaster, 1]"]], "addAction", true, true] call BIS_fnc_MP;

	[[JumpMaster, ["H.A.L.O. Inspection", "[player] execVM 'vqi_halo\VQI-DemonDropper\FlightCrew\vqi_halo_inspection_halo.sqf'; [JumpMaster, 2]"]], "addAction", true, true] call BIS_fnc_MP;
	

	[[LoadMaster, ["CLEARED for TakeOff", "[player] execVM 'vqi_halo\VQI-DemonDropper\FlightCrew\vqi_halo_takeoff.sqf'; [LoadMaster, 1]"]], "addAction", true, true] call BIS_fnc_MP; // Cleared for Take-Off

	//[[VQI_HALO_XC130, ["Cargo Lighting - ON", "execVM 'vqi_halo\VQI-DemonDropper\GroundStart\vqi_halo_lighting_groundplane.sqf'; [VQI_HALO_XC130, 1]"]], "addAction", true, true] call BIS_fnc_MP;


	sleep 1;
	
	// H.A.L.O Gear Crate
	jumpCrate = "VQI_HALO_Crate" createVehicle position VQI_HALO_XC130;
	jumpCrate attachTo [VQI_HALO_XC130,[-1.5, -7.7, -4.63]]; 	//
	jumpCrate allowDamage false;
	
	
	// Extra Crates
	execVM "vqi_halo\VQI-DemonDropper\Cargo\vqi_halo_crate_extra.sqf";
	
	
	
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



	_floorfix1 attachTo [VQI_HALO_XC130,[ 0.68, 0.6, -4.7]];			// XC-130
	_floorfix2 attachTo [VQI_HALO_XC130,[-0.75, 0.6, -4.7]];			// XC-130

		
	_lightBLUE = "chemlight_blue" createVehicle _start0;
	_lightBLUE attachTo [VQI_HALO_XC130,[0,  9, -1.85]]; 	// XC-130 Nightmare
	
	

	// Open Cargo Ramp
	VQI_HALO_XC130 animate ["ramp_bottom", 1];			// XC-130 Nightmare
	VQI_HALO_XC130 animate ["ramp_top", 1];				// XC-130 Nightmare
};











sleep 5;
if (VQI_HINTS_HALO == 1) then { hint "groundcraft_XC130.sqf -END-"; };

///////////////////
/* NOTES:




*/