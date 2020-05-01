// Spawn Ground Craft with Flight Crew -- C-130X Nightmare
// 
if (VQI_HINTS_HALO == 1) then { hint "groundcraft_XC130.sqf"; };
sleep 1;


private ["_start0","_flightCrew3","_flightCrew4"];
if (!isServer) exitWith {};


_start0 = [0,0,0];


if (isServer) then {
if (VQI_HINTS_HALO == 1) then { hint "is server"; };
sleep 1;

	_flightCrew3 = createGroup WEST; // BLUFOR Black-Ops HALO/PARA Crew
	// _flightCrew4 = createGroup WEST; // BLUFOR Black-Ops HALO/PARA Crew

	// SYNTAX:   "classname" createUnit [position, group, init, skill, rank]
	//_FlightCrew1 = "B_Helipilot_F" createUnit [position player, _groupHALO1, "Commander = this", 0.9, "MAJOR"];
	//_FlightCrew2 = "B_Helipilot_F" createUnit [position player, _groupHALO2, "Pilot = this", 0.8, "CAPTAIN"];
	//_FlightCrew3 = "USAF_SFS_Officer_Green3" createUnit [position player, _groupHALO3, "JumpMaster = this", 0.7, "LIEUTENANT"];
	//_FlightCrew4 = "USAF_SFS_Officer_Green2" createUnit [position player, _groupHALO4, "LoadMaster = this", 0.6, "SERGEANT"];
	//_FlightCrew5 = "USAF_SFS_Officer_Green1" createUnit [position player, _groupHALO5, "FlightMedic = this", 0.6, "SERGEANT"];
	//_FlightCrew6 = "B_Helipilot_F" createUnit [position player, _groupHALO6, "SecurityOps = this", 0.6, "SERGEANT"];

	JumpMaster  = _flightCrew3 createUnit ["SOCOMD_unarmed", position player, [], 25, "NONE"]; publicVariable "JumpMaster";
	// LoadMaster  = _flightCrew4 createUnit ["SOCOMD_unarmed", position player, [], 25, "NONE"]; publicVariable "LoadMaster";

if (VQI_HINTS_HALO == 1) then { hint "Units set"; };
sleep 1;
	{ removeAllweapons _x; removeAllItems _x;  removeAllAssignedItems _x;  removeBackpack _x;  removeVest _x; } forEach units _flightCrew3;
	// { removeAllweapons _x; removeAllItems _x;  removeAllAssignedItems _x;  removeBackpack _x;  removeVest _x; } forEach units _flightCrew4;


	JumpMaster  addHeadgear "H_Cap_headphones";
	JumpMaster addVest "V_DeckCrew_white_F";
	JumpMaster addGoggles "G_Aviator";
	[JumpMaster,"asczHead_olson_A3","male01eng"] call BIS_fnc_setIdentity;
	// LoadMaster  addHeadgear "H_Cap_headphones";


	JumpMaster  SetGroupID ["JumpMaster"];
	// LoadMaster  SetGroupID ["LoadMaster"];

	JumpMaster  attachTo [CONTROL_TABLE,[ -1,0,-0.5]]; 		// 
	// LoadMaster  attachTo [CONTROL_TABLE,[ 1,0,0.5]];		// 

	sleep 1;

	detach JumpMaster;
	// detach LoadMaster;
	//detach FlightMedic;


	JumpMaster  setFormDir (getDir CONTROL_TABLE + 1);
	// LoadMaster  setFormDir (getDir CONTROL_TABLE + 40);
	//FlightMedic setFormDir (getDir VQI_HALO_XC130 + 200);

	// https://community.bistudio.com/wiki/BIS_fnc_ambientAnim
	//[JumpMaster,"LISTEN_BRIEFING","ASIS"] call BIS_fnc_ambientAnim;
	
	[[JumpMaster,"Acts_A_M01_briefing"],
	"switchMove"] call BIS_fnc_MP;
	
	// [[LoadMaster,"Acts_A_M01_briefing"],
	// "switchMove"] call BIS_fnc_MP;
	


	// HALO/PARA Operations Flight Crew Menu
	[[JumpMaster, ["Flight Plan -- H.A.L.O.", "missionNamespace setVariable ['planeType', 2, true]; missionNamespace setVariable ['flightHALO', 1, true];  execVM 'vqi_halo\VQI-DemonDropper\FlightPlan\vqi_halo_flightplan.sqf'; [JumpMaster, 1]"]], "addAction", true, true] call BIS_fnc_MP;

	[[JumpMaster, ["H.A.L.O. Inspection", "[player] execVM 'vqi_halo\VQI-DemonDropper\FlightCrew\vqi_halo_inspection_halo.sqf'; [JumpMaster, 2]"]], "addAction", true, true] call BIS_fnc_MP;
	
	[[CONTROL_TABLE, ["CLEARED for TakeOff", "[player] execVM 'vqi_halo\VQI-DemonDropper\FlightCrew\vqi_halo_takeoff.sqf'; [CONTROL_TABLE, 1]"]], "addAction", true, true] call BIS_fnc_MP; // Cleared for Take-Off


};