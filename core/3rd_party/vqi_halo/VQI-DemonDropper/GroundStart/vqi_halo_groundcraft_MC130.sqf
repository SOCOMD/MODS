// Spawn Ground Craft with Flight Crew -- MC-130J Commando II (USAF Pack)
// 
if (VQI_HINTS_HALO == 1) then { hint "groundcraft_MC130.sqf"; };
sleep 1;



private ["_groupHALO","_FlightCrew1","_FlightCrew2","_FlightCrew3","_FlightCrew4","_FlightCrew5","_FlightCrew6","_jumpCrate"];
if (!isServer) exitWith {};


if (isServer) then {
	_groupCREW3 = createGroup WEST; // BLUFOR U.S.A.F HALO/PARA Crew
	_groupCREW4 = createGroup WEST; // BLUFOR U.S.A.F HALO/PARA Crew
	_groupCREW5 = createGroup WEST; // BLUFOR U.S.A.F HALO/PARA Crew

	// SYNTAX:   "classname" createUnit [position, group, init, skill, rank]
	//_FlightCrew1 = "B_Helipilot_F" createUnit [position player, _groupHALO1, "Commander = this", 0.9, "MAJOR"];
	//_FlightCrew2 = "B_Helipilot_F" createUnit [position player, _groupHALO2, "Pilot = this", 0.8, "CAPTAIN"];
	//_FlightCrew3 = "USAF_SFS_Officer_Green3" createUnit [position player, _groupHALO3, "JumpMaster = this", 0.7, "LIEUTENANT"];
	//_FlightCrew4 = "USAF_SFS_Officer_Green2" createUnit [position player, _groupHALO4, "LoadMaster = this", 0.6, "SERGEANT"];
	//_FlightCrew5 = "USAF_SFS_Officer_Green1" createUnit [position player, _groupHALO5, "FlightMedic = this", 0.6, "SERGEANT"];
	//_FlightCrew6 = "B_Helipilot_F" createUnit [position player, _groupHALO6, "SecurityOps = this", 0.6, "SERGEANT"];

	JumpMaster  = _groupCREW3 createUnit ["B_Helipilot_F", position player, [], 25, "NONE"]; publicVariable "JumpMaster";
	LoadMaster  = _groupCREW4 createUnit ["B_Helipilot_F", position player, [], 25, "NONE"]; publicVariable "LoadMaster";
	FlightMedic = _groupCREW5 createUnit ["B_Helipilot_F", position player, [], 25, "NONE"]; publicVariable "FlightMedic";

	{ removeAllweapons _x; removeAllItems _x;  removeAllAssignedItems _x;  removeBackpack _x;  removeVest _x; } forEach units _groupCREW3;
	{ removeAllweapons _x; removeAllItems _x;  removeAllAssignedItems _x;  removeBackpack _x;  removeVest _x; } forEach units _groupCREW4;
	{ removeAllweapons _x; removeAllItems _x;  removeAllAssignedItems _x;  removeBackpack _x;  removeVest _x; } forEach units _groupCREW5;


	JumpMaster  addHeadgear "H_Cap_headphones";
	LoadMaster  addHeadgear "H_Cap_headphones";
	FlightMedic addHeadgear "H_Cap_headphones";


	JumpMaster  SetGroupID ["JumpMaster"];
	LoadMaster  SetGroupID ["LoadMaster"];
	FlightMedic SetGroupID ["FlightMedic"];


	JumpMaster  attachTo [VQI_HALO_MC130,[ 0, -2, -5.5]]; // 
	LoadMaster  attachTo [VQI_HALO_MC130,[-1, 17, -4.6]];	// 
	FlightMedic attachTo [VQI_HALO_MC130,[ 1, 19, -4.6]];	//

	sleep 1;

	detach JumpMaster;
	detach LoadMaster;
	detach FlightMedic;

	JumpMaster  setFormDir (getDir VQI_HALO_MC130 + 1);
	LoadMaster  setFormDir (getDir VQI_HALO_MC130 + 160);
	FlightMedic setFormDir (getDir VQI_HALO_MC130 + 200);

	// https://community.bistudio.com/wiki/BIS_fnc_ambientAnim
	//[JumpMaster,"LISTEN_BRIEFING","ASIS"] call BIS_fnc_ambientAnim;
	
	[[JumpMaster,"Acts_A_M01_briefing"],
	"switchMove"] call BIS_fnc_MP;

	// ACE3 Medical Crate
	if (isClass(configFile >> "CfgPatches" >> "ace_common")) then {
		ACE3MED_Crate = "ACE_medicalSupplyCrate_advanced" createVehicle (position player);
		ACE3MED_Crate attachTo [VQI_HALO_MC130,[ 0, 19.5, -4.3]];
		ACE3MED_Crate setDir 180;
	};


	// HALO/PARA Operations Flight Crew Menu
	[[JumpMaster, ["Flight Plan: MC-130J Commando II -- H.A.L.O.", "missionNamespace setVariable ['planeType', 1, true]; missionNamespace setVariable ['flightHALO', 1, true]; missionNamespace setVariable ['flightPARA', 0, true]; execVM 'vqi_halo\VQI-DemonDropper\FlightPlan\vqi_halo_flightplan.sqf'; [JumpMaster, 1]"]], "addAction", true, true] call BIS_fnc_MP;
	[[JumpMaster, ["Flight Plan: MC-130J Commando II -- ParaJump", "missionNamespace setVariable ['planeType', 1, true]; missionNamespace setVariable ['flightPARA', 1, true]; missionNamespace setVariable ['flightHALO', 0, true]; execVM 'vqi_halo\VQI-DemonDropper\FlightPlan\vqi_halo_flightplan.sqf'; [JumpMaster, 2]"]], "addAction", true, true] call BIS_fnc_MP;
	[[JumpMaster, ["S.A.M. Intel Report", "execVM 'vqi_halo\VQI-DemonDropper\Airspace\vqi_halo_sam_mkrs_intel.sqf'; [JumpMaster, 3]"]], "addAction", true, true] call BIS_fnc_MP;
	[[JumpMaster, ["H.A.L.O. Inspection", "[player] execVM 'vqi_halo\VQI-DemonDropper\FlightCrew\vqi_halo_inspection_halo.sqf'; [JumpMaster, 4]"]], "addAction", true, true] call BIS_fnc_MP;
	[[JumpMaster, ["ParaJump Inspection", "[player] execVM 'vqi_halo\VQI-DemonDropper\FlightCrew\vqi_halo_inspection_para.sqf'; [JumpMaster, 5]"]], "addAction", true, true] call BIS_fnc_MP;

	[[LoadMaster, ["CLEARED for TakeOff", "[player] execVM 'vqi_halo\VQI-DemonDropper\FlightCrew\vqi_halo_takeoff.sqf'; [LoadMaster, 1]"]], "addAction", true, true] call BIS_fnc_MP; // Cleared for Take-Off
	//[[LoadMaster, ["CLEARED for PARA Flight", "execVM 'vqi_halo\VQI-DemonDropper\FlightCrew\vqi_halo_takeoff_para.sqf'; [LoadMaster, 2]"]], "addAction", true, true] call BIS_fnc_MP; // remove
	//[[LoadMaster, ["Request Cargo Drop", "execVM 'vqi_halo\VQI-DemonDropper\FlightCrew\vqi_halo_crewmaster_cargodrop.sqf'; [LoadMaster, 3]"]], "addAction", true, true] call BIS_fnc_MP;

	//[[VQI_HALO_MC130, ["Cargo Lighting - ON", "execVM 'vqi_halo\VQI-DemonDropper\GroundStart\vqi_halo_lighting_groundplane.sqf'; [VQI_HALO_MC130, 1]"]], "addAction", true, true] call BIS_fnc_MP;


	sleep 1;
	
	// H.A.L.O Gear Crate
	_jumpCrate = "VQI_HALO_Crate" createVehicle position VQI_HALO_MC130;
	_jumpCrate attachTo [VQI_HALO_MC130,[6, -2, -4.7]]; 	//
	_jumpCrate allowDamage false;
	
	
	// Extra Crates
	execVM "vqi_halo\VQI-DemonDropper\Cargo\vqi_halo_crate_extra.sqf";
	

	// Open Cargo Ramp
	VQI_HALO_MC130 animate ["ramp_bottom", 1];		// MC-130J Commando II
	VQI_HALO_MC130 animate ["ramp_top", 1];			// MC-130J Commando II
};











sleep 5;
if (VQI_HINTS_HALO == 1) then { hint "groundcraft_MC130.sqf -END-"; };

///////////////////
/* NOTES:




*/