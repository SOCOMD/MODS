// Template: Operations Centre
// Ref. N.Door: -L/R, -B/F, -D/U
if (VQI_CORE_HINTS == 1) then { hint "OpsAirForce.sqf"; };
sleep 1;

/*
deleteVehicle VQI_HALO_DESK1;
deleteVehicle VQI_HALO_LAPTOP1;
deleteVehicle JumpMaster;
deleteVehicle LoadMaster;
deleteVehicle JumpCrate;
sleep 1;
*/


private ["_OpsCenterStart"];

_OpsCenterStart = [-100,-100,0];



//-----------------------------------------------------------------------------
//Air Force Operations
VQI_HALO_DESK1 = "Land_TableDesk_F" createVehicle _OpsCenterStart;
VQI_HALO_DESK1 attachTo [OpsCenter,[-5,11,-2.5]];
VQI_HALO_DESK1 setDir 180;

VQI_HALO_LAPTOP1 = "Land_Laptop_Unfolded_F" createVehicle _OpsCenterStart;
VQI_HALO_LAPTOP1 attachTo [VQI_HALO_DESK1,[0,0,0.56]];


// FlightCrew
_groupHALO3 = createGroup WEST; // BLUFOR U.S.A.F HALO/PARA Crew
_groupHALO4 = createGroup WEST; // BLUFOR U.S.A.F HALO/PARA Crew

// SYNTAX:   "classname" createUnit [position, group, init, skill, rank]
//_FlightCrew1 = "B_Helipilot_F" createUnit [position player, _groupHALO1, "Commander = this", 0.9, "MAJOR"];
//_FlightCrew2 = "B_Helipilot_F" createUnit [position player, _groupHALO2, "Pilot = this", 0.8, "CAPTAIN"];
//_FlightCrew3 = "USAF_SFS_Officer_Green3" createUnit [position player, _groupHALO3, "JumpMaster = this", 0.7, "LIEUTENANT"];
//_FlightCrew4 = "USAF_SFS_Officer_Green2" createUnit [position player, _groupHALO4, "LoadMaster = this", 0.6, "SERGEANT"];
//_FlightCrew5 = "USAF_SFS_Officer_Green1" createUnit [position player, _groupHALO5, "FlightMedic = this", 0.6, "SERGEANT"];
//_FlightCrew6 = "B_Helipilot_F" createUnit [position player, _groupHALO6, "SecurityOps = this", 0.6, "SERGEANT"];

JumpMaster  = _groupHALO3 createUnit ["B_Helipilot_F", position player, [], 25, "NONE"]; publicVariable "JumpMaster";
LoadMaster  = _groupHALO4 createUnit ["B_Helipilot_F", position player, [], 25, "NONE"]; publicVariable "LoadMaster";

{ removeAllweapons _x; removeAllItems _x;  removeAllAssignedItems _x;  removeBackpack _x;  removeVest _x; } forEach units _groupHALO3;
{ removeAllweapons _x; removeAllItems _x;  removeAllAssignedItems _x;  removeBackpack _x;  removeVest _x; } forEach units _groupHALO4;

JumpMaster  addHeadgear "H_Cap_headphones";
LoadMaster  addHeadgear "H_Cap_headphones";

JumpMaster  SetGroupID ["JumpMaster"];
LoadMaster  SetGroupID ["LoadMaster"];
sleep 1;

JumpMaster attachTo [OpsCenter,[-6.0, 10, -2.8]];
LoadMaster attachTo [OpsCenter,[-2.8,  8, -2.8]];
JumpMaster setDir 180;
LoadMaster setDir 235;

sleep 1;

//[] spawn { JumpMaster switchMove "AmovPercMstpSnonWnonDnon_Ease"; };
//[] spawn { LoadMaster switchMove "AmovPercMstpSnonWnonDnon_Ease"; };
	[[JumpMaster,"AmovPercMstpSnonWnonDnon_Ease"],
	"switchMove"] call BIS_fnc_MP;
	[[LoadMaster,"AmovPercMstpSnonWnonDnon_Ease"],
	"switchMove"] call BIS_fnc_MP;

sleep 5; // hotfix
detach JumpMaster; JumpMaster switchMove ""; 
sleep 5;
detach LoadMaster; LoadMaster switchMove "";
	
	
	
	
	
// CRATE
JumpCrate = "VQI_HALO_Crate" createVehicle _OpsCenterStart;
JumpCrate attachTo [OpsCenter,[-3.2,11,-2]]; //
JumpCrate allowDamage false;





sleep 10;


if (true) then {

	// HALO/PARA Operations Flight Crew Menu
	[[JumpMaster, ["Flight Plan: XC-130 Nightmare -- H.A.L.O.", "missionNamespace setVariable ['planeType', 2, true]; missionNamespace setVariable ['flightHALO', 1, true]; missionNamespace setVariable ['flightPARA', 0, true]; execVM 'vqi_halo\VQI-DemonDropper\FlightPlan\vqi_halo_flightplan.sqf'; [JumpMaster, 1]"]], "addAction", true, true] call BIS_fnc_MP;
	[[JumpMaster, ["Flight Plan: XC-130 Nightmare -- ParaJump", "missionNamespace setVariable ['planeType', 2, true]; missionNamespace setVariable ['flightPARA', 1, true]; missionNamespace setVariable ['flightHALO', 0, true]; execVM 'vqi_halo\VQI-DemonDropper\FlightPlan\vqi_halo_flightplan.sqf'; [JumpMaster, 2]"]], "addAction", true, true] call BIS_fnc_MP;
	[[JumpMaster, ["S.A.M. Intel Report", "execVM 'vqi_halo\VQI-DemonDropper\Airspace\vqi_halo_sam_mkrs_intel.sqf'; [JumpMaster, 3]"]], "addAction", true, true] call BIS_fnc_MP;
	[[JumpMaster, ["H.A.L.O. Inspection", "[player] execVM 'vqi_halo\VQI-DemonDropper\FlightCrew\vqi_halo_inspection_halo.sqf'; [JumpMaster, 4]"]], "addAction", true, true] call BIS_fnc_MP;
	[[JumpMaster, ["ParaJump Inspection", "[player] execVM 'vqi_halo\VQI-DemonDropper\FlightCrew\vqi_halo_inspection_para.sqf'; [JumpMaster, 5]"]], "addAction", true, true] call BIS_fnc_MP;

	[[LoadMaster, ["CLEARED for TakeOff", "[player] execVM 'vqi_halo\VQI-DemonDropper\FlightCrew\vqi_halo_takeoff.sqf'; [LoadMaster, 1]"]], "addAction", true, true] call BIS_fnc_MP; // Cleared for Take-Off
	//[[LoadMaster, ["CLEARED for PARA Flight", "execVM 'vqi_halo\VQI-DemonDropper\FlightCrew\vqi_halo_takeoff_para.sqf'; [LoadMaster, 2]"]], "addAction", true, true] call BIS_fnc_MP; // remove
	//[[LoadMaster, ["Request Cargo Drop", "execVM 'vqi_halo\VQI-DemonDropper\FlightCrew\vqi_halo_crewmaster_cargodrop.sqf'; [LoadMaster, 3]"]], "addAction", true, true] call BIS_fnc_MP;

	//[[VQI_HALO_XC130, ["Cargo Lighting - ON", "execVM 'vqi_halo\VQI-DemonDropper\GroundStart\vqi_halo_lighting_groundplane.sqf'; [VQI_HALO_XC130, 1]"]], "addAction", true, true] call BIS_fnc_MP;
};


/* =======================================================================================
NOTES:


*/