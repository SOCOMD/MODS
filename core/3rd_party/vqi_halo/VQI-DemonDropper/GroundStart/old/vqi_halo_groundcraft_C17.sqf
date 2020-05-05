//
//


if (isServer) then  {
	
	_start0 = [0,0,0];


sleep 1;


//JumpMaster
//JumpMaster = "B_Helipilot_F" createVehicle _start0;
_grpJC1 = createGroup WEST;
JumpMaster = _grpJC1 createUnit ["B_Helipilot_F", position player, [], 25, "NONE"];
publicVariable "JumpMaster";
removeAllweapons JumpMaster; removeAllItems JumpMaster;  removeAllAssignedItems JumpMaster;  removeBackpack JumpMaster;  removeVest JumpMaster; JumpMaster addHeadgear "H_Cap_headphones";

//CrewMaster
//CrewMaster = "B_Helipilot_F" createVehicle _start0;
_grpJC2 = createGroup WEST;
CrewMaster = _grpJC2 createUnit ["B_Helipilot_F", position player, [], 25, "NONE"]; 
publicVariable "CrewMaster";
removeAllweapons CrewMaster; removeAllItems CrewMaster;  removeAllAssignedItems CrewMaster;  removeBackpack CrewMaster;  removeVest CrewMaster; CrewMaster addHeadgear "H_Cap_oli";


sleep 1;
JumpMaster SetGroupID ["JumpMaster"];
CrewMaster SetGroupID ["CrewMaster"];

JumpMaster attachTo [VQI_HALO_C17,[ 0,  -30, -3.4]]; 	//C17
CrewMaster attachTo [VQI_HALO_C17,[-1.7, 10, -1.2]];	//C17
sleep 1;
CrewMaster setDir 160;


sleep 1;
[] spawn { JumpMaster switchMove "AmovPercMstpSnonWnonDnon_Ease"; };
[] spawn { CrewMaster switchMove "AmovPercMstpSnonWnonDnon_Ease"; };
//Acts_A_M01_briefing - Not MP friendly?


sleep 1;
detach JumpMaster;
detach CrewMaster;

//Required HALO Equipment & Gear Crate
//Custom Gear W-I-P, coming soon...?
_jumpCrate = "VQI_HALO_Crate" createVehicle _start0;
_jumpCrate attachTo [VQI_HALO_C17,[5,-30,-2.5]]; 	//
_jumpCrate allowDamage false;



sleep 1;
execVM "vqi_halo\VQI-DemonDropper\vqi_crate_extra.sqf";








sleep 1;

//Inside Night Lighting for ground C-17
lightC130 = "chemlight_blue" createVehicle _start0;  
lightC130 attachTo [VQI_HALO_C17,[0, 15,-1.5]];


//NEW MP Menu
//[[JumpMaster, [("<t color='#006699'>" + ("Request Flight SITREP") + "</t>"), "execVM 'vqi_halo\VQI-DemonDropper\vqi_mkrjumpplane.sqf'; [JumpMaster, 5]"]], "addAction", true, true] call BIS_fnc_MP;
//[[JumpMaster, ["Request Flight SITREP", "execVM 'vqi_halo\VQI-DemonDropper\vqi_mkrjumpplane.sqf'; [JumpMaster, 5]"]], "addAction", true, true] call BIS_fnc_MP;
[[JumpMaster, ["Flight Plan: C-17 - HALO", "missionNamespace setVariable ['planeType', 2]; execVM 'vqi_halo\VQI-DemonDropper\JumpCraft\vqi_halo_flightplan_halo.sqf'; [JumpMaster, 3]"]], "addAction", true, true] call BIS_fnc_MP;
[[JumpMaster, ["H.A.L.O. Inspection", "execVM 'vqi_halo\VQI-DemonDropper\vqi_JumpMaster_halo.sqf'; [JumpMaster, 2]"]], "addAction", true, true] call BIS_fnc_MP;

[[CrewMaster, ["CLEARED for HALO Flight", "execVM 'vqi_halo\VQI-DemonDropper\vqi_CrewMaster_halo.sqf'; [CrewMaster, 2]"]], "addAction", true, true] call BIS_fnc_MP;








sleep 1;
// animate ground plane options
VQI_HALO_C17 animate ["back_ramp",1];
VQI_HALO_C17 animate ["back_ramp_st",1];
VQI_HALO_C17 animate ["back_ramp_p",1];
VQI_HALO_C17 animate ["back_ramp_p_2",1];
VQI_HALO_C17 animate ["back_ramp_door_main",1]
};