//
//


if (isServer) then  {
	
	_start0 = [0,0,0];

/* Ignore for now... TBD
/////////////////////////////////////// SOCOM SYSTEM ////////////////////////////////////////////////
missionNamespace setVariable ["HALO_SOCOM", 1];
//socomORDERS = true;
// set-up the reference objects
_socomJSOC = call VQI_fnc_locX;
/////////////////////////////////////////////////////////////////////////////////////////////////////
sleep 10;



//JumpPlane Location
if (!isNull(Loc1)) then {
	_startPos = [(getPos Loc1 select 0), (getPos Loc1 select 1), 7500 + HALO_RndAlt_Number10];
	demonPortal setPosASL _startPos;
	_jumpPos = [getPos demonPortal, random 2000, random 359] call BIS_fnc_relPos;
	demonPortal setPosASL _jumpPos; //by SOCOM
} else {
	//find & move out to random X% of map + 360*		||		Or OVER Objective!  ???????
	_jumpPos = [getPos demonPortal, (random (_half*0.90)), random 359] call BIS_fnc_relPos;
	demonPortal setPosASL _jumpPos; //by Map
};
//////////////////////////////////////////////////////////////////////////////////////////////////////
*/

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

JumpMaster attachTo [VQI_HALO_C130,[ 0, -2,-5.5]]; 	// -13
CrewMaster attachTo [VQI_HALO_C130,[-1, 17,-4.6]];	//  6
sleep 1;
CrewMaster setDir 160;


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
_jumpCrate attachTo [VQI_HALO_C130,[5,-2,-4.7]]; 	//
_jumpCrate allowDamage false;



sleep 1;
execVM "vqi_halo\VQI-DemonDropper\vqi_crate_extra.sqf";








sleep 1;

//Inside Night Lighting for ground C-130
lightC130 = "chemlight_blue" createVehicle _start0;  
lightC130 attachTo [VQI_HALO_C130,[0, 15,-1.5]];


//NEW MP Menu
//[[JumpMaster, [("<t color='#006699'>" + ("Request Flight SITREP") + "</t>"), "execVM 'vqi_halo\VQI-DemonDropper\vqi_mkrjumpplane.sqf'; [JumpMaster, 5]"]], "addAction", true, true] call BIS_fnc_MP;
//[[JumpMaster, ["Request Flight SITREP", "execVM 'vqi_halo\VQI-DemonDropper\vqi_mkrjumpplane.sqf'; [JumpMaster, 5]"]], "addAction", true, true] call BIS_fnc_MP;
[[JumpMaster, ["Flight Plan: MC-130J - HALO", "missionNamespace setVariable ['planeType', 1]; execVM 'vqi_halo\VQI-DemonDropper\JumpCraft\vqi_halo_flightplan_halo.sqf'; [JumpMaster, 3]"]], "addAction", true, true] call BIS_fnc_MP;
[[JumpMaster, ["H.A.L.O. Inspection", "execVM 'vqi_halo\VQI-DemonDropper\vqi_JumpMaster_halo.sqf'; [JumpMaster, 2]"]], "addAction", true, true] call BIS_fnc_MP;

[[CrewMaster, ["CLEARED for HALO Flight", "execVM 'vqi_halo\VQI-DemonDropper\vqi_CrewMaster_halo.sqf'; [CrewMaster, 2]"]], "addAction", true, true] call BIS_fnc_MP;


[[VQI_HALO_C130, ["Cargo Lighting - ON", "execVM 'vqi_halo\VQI-DemonDropper\vqi_lighting_groundplane.sqf'; [VQI_HALO_C130, 1]"]], "addAction", true, true] call BIS_fnc_MP;







sleep 1;
// animate ground plane options
VQI_HALO_C130 animate ["ramp_bottom", 1];		// MC-130J Commando II
VQI_HALO_C130 animate ["Ramp_top", 1];			// MC-130J Commando II
};





////////////////////////////////////////////////////////////////////////
/* NOTES:

{_x in thisList} count (playableUnits + switchableUnits) > 1
lightBLUE = "chemlight_blue" createVehicle [getPos trigChemBLUE select 0, getPos trigChemBLUE select 1,0.15];  lightBLUE attachTo [x,[0,4,-1.5]];

 [nil,nil,rPLAYSOUND,"ns_intro"] call RE;
 
 
_this addAction [("<t color='#006699'>" + ("Request NEW ParaJump Flight Plan") + "</t>"),"vqi_halo\VQI-DemonDropper\vqi_requestflight_para.sqf","",4,true,true,"","(_target distance _this) < 4"]
*/