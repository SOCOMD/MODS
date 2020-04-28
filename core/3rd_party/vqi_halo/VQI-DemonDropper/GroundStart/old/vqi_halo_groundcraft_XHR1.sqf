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

JumpMaster attachTo [VQI_HALO_XHR1,[0,-10,-1.7]]; 	//XHR1
CrewMaster attachTo [VQI_HALO_XHR1,[1.6,-2,-1.3]]; 	//XHR1
sleep 1;
CrewMaster setDir 200;


sleep 1;
[] spawn { JumpMaster switchMove "AmovPercMstpSnonWnonDnon_Ease"; };
[] spawn { CrewMaster switchMove "AmovPercMstpSnonWnonDnon_Ease"; };
//Acts_A_M01_briefing - Not MP friendly?


sleep 1;
detach JumpMaster;
detach CrewMaster;
JumpMaster setVelocity [0,0,0.3];


//Required HALO Equipment & Gear Crate
//Custom Gear W-I-P, coming soon...?
_jumpCrate = "VQI_HALO_Crate" createVehicle _start0;
_jumpCrate attachTo [VQI_HALO_XHR1,[5,-10,-1]]; //?
_jumpCrate allowDamage false;

sleep 1;
detach _jumpCrate;
_jumpCrate setVelocity [0,0,0.3];


sleep 1;
execVM "vqi_halo\VQI-DemonDropper\vqi_crate_extra.sqf";








sleep 1;

//Inside Night Lighting for ground XHR-1:Vampyre
lightXHR1 = "chemlight_red" createVehicle _start0;  
lightXHR1 attachTo [VQI_HALO_XHR1,[0,-4,0.75]];


//NEW MP Menu
//[[JumpMaster, [("<t color='#006699'>" + ("Request Flight SITREP") + "</t>"), "execVM 'vqi_halo\VQI-DemonDropper\vqi_mkrjumpplane.sqf'; [JumpMaster, 5]"]], "addAction", true, true] call BIS_fnc_MP;
//[[JumpMaster, ["Request Flight SITREP", "execVM 'vqi_halo\VQI-DemonDropper\vqi_mkrjumpplane.sqf'; [JumpMaster, 5]"]], "addAction", true, true] call BIS_fnc_MP;
[[JumpMaster, ["Flight Plan: XHR-1 - HALO", "missionNamespace setVariable ['planeType', 3]; execVM 'vqi_halo\VQI-DemonDropper\JumpCraft\vqi_halo_flightplan_halo.sqf'; [JumpMaster, 3]"]], "addAction", true, true] call BIS_fnc_MP;
[[JumpMaster, ["H.A.L.O. Inspection", "execVM 'vqi_halo\VQI-DemonDropper\vqi_JumpMaster_halo.sqf'; [JumpMaster, 2]"]], "addAction", true, true] call BIS_fnc_MP;

[[CrewMaster, ["CLEARED for HALO Flight", "execVM 'vqi_halo\VQI-DemonDropper\vqi_CrewMaster_halo.sqf'; [CrewMaster, 2]"]], "addAction", true, true] call BIS_fnc_MP;


[[VQI_HALO_XHR1, ["Cargo Lighting - Red OFF / Blue ON", "execVM 'vqi_halo\VQI-DemonDropper\vqi_lighting_groundplane.sqf'; [VQI_HALO_XHR1, 2]"]], "addAction", true, true] call BIS_fnc_MP;







sleep 1;
// animate ground plane options
VQI_HALO_XHR1 animate ["AnimateRAMP1", 1];
};





////////////////////////////////////////////////////////////////////////
/* NOTES:


*/