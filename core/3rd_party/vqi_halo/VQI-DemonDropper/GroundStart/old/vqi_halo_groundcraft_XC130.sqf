//
//
if (VQI_HINTS_HALO == 1) then { hint "groundcraft_XC130.sqf"; };
sleep 1;

if (!isServer) exitWith {};

if (isServer) then  {
	
	
	private ["_pos0"];
	
	_pos0 = [0,0,0];



//Create HALO/PARA BlackOps AirCrew
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

JumpMaster attachTo [VQI_HALO_XC130,[ 0,-13, -5.5]]; 	// -13
CrewMaster attachTo [VQI_HALO_XC130,[-1,  6, -4.6]];	//  6
sleep 1;
CrewMaster setFormDir (getDir VQI_HALO_XC130 + 160);
JumpMaster setFormDir (getDir VQI_HALO_XC130 + 1);




sleep 1;
detach JumpMaster;
detach CrewMaster;
JumpMaster setVelocity [0,0,0.3];




sleep 1;	// playActionNow
[] spawn { JumpMaster playMove "AmovPercMstpSnonWnonDnon_Ease"; };
[] spawn { CrewMaster switchMove "AmovPercMstpSnonWnonDnon_Ease"; };
//Acts_A_M01_briefing - Not MP friendly?

//Required HALO Equipment & Gear Crate
//Custom Gear W-I-P, coming soon...?
_jumpCrate = "VQI_HALO_Crate" createVehicle _start0;
_jumpCrate attachTo [VQI_HALO_XC130,[3,-11,-4.7]]; 	//
_jumpCrate allowDamage false;



sleep 1;
execVM "vqi_halo\VQI-DemonDropper\vqi_crate_extra.sqf";








sleep 1;

//Inside Night Lighting for ground XC-130
lightXC130 = "chemlight_red" createVehicle _start0;  
lightXC130 attachTo [VQI_HALO_XC130,[1.6, -4.5, -3.2]];


//NEW MP Menu
//[[JumpMaster, [("<t color='#006699'>" + ("Request Flight SITREP") + "</t>"), "execVM 'vqi_halo\VQI-DemonDropper\vqi_mkrjumpplane.sqf'; [JumpMaster, 5]"]], "addAction", true, true] call BIS_fnc_MP;
//[[JumpMaster, ["Request Flight SITREP", "execVM 'vqi_halo\VQI-DemonDropper\vqi_mkrjumpplane.sqf'; [JumpMaster, 5]"]], "addAction", true, true] call BIS_fnc_MP;
[[JumpMaster, ["Flight Plan: XC-130 Nightmare -- H.A.L.O.", "missionNamespace setVariable ['planeType', 1, true]; execVM 'vqi_halo\VQI-DemonDropper\JumpCraft\vqi_halo_flightplan_halo.sqf'; [JumpMaster, 3]"]], "addAction", true, true] call BIS_fnc_MP;
[[JumpMaster, ["Flight Plan: XC-130 Nightmare -- ParaJump", "execVM 'vqi_halo\VQI-DemonDropper\JumpCraft\vqi_halo_flightplan_XC130_para.sqf'; [JumpMaster, 3]"]], "addAction", true, true] call BIS_fnc_MP;
[[JumpMaster, ["H.A.L.O. Inspection", "execVM 'vqi_halo\VQI-DemonDropper\vqi_JumpMaster_halo.sqf'; [JumpMaster, 2]"]], "addAction", true, true] call BIS_fnc_MP;
[[JumpMaster, ["ParaJump Inspection", "execVM 'vqi_halo\VQI-DemonDropper\vqi_JumpMaster_para.sqf'; [JumpMaster, 1]"]], "addAction", true, true] call BIS_fnc_MP;

[[CrewMaster, ["CLEARED for HALO Flight", "execVM 'vqi_halo\VQI-DemonDropper\vqi_CrewMaster_halo.sqf'; [CrewMaster, 2]"]], "addAction", true, true] call BIS_fnc_MP;
[[CrewMaster, ["CLEARED for PARA Flight", "execVM 'vqi_halo\VQI-DemonDropper\vqi_CrewMaster_para.sqf'; [CrewMaster, 2]"]], "addAction", true, true] call BIS_fnc_MP;

[[CrewMaster, ["Request Cargo Drop", "execVM 'vqi_halo\VQI-DemonDropper\vqi_CrewMaster_cargodrop.sqf'; [CrewMaster, 5]"]], "addAction", true, true] call BIS_fnc_MP;

[[VQI_HALO_XC130, ["Cargo Lighting - ON", "execVM 'vqi_halo\VQI-DemonDropper\vqi_lighting_groundplane.sqf'; [VQI_HALO_C130, 1]"]], "addAction", true, true] call BIS_fnc_MP;


sleep 1;

	//Fix the Damn Floor, or you'll trip and go into FreeFall animation!
	floorFix2a = "Box_NATO_WpsSpecial_F" createVehicle _start0; //HotFix
	floorFix2b = "Box_NATO_WpsSpecial_F" createVehicle _start0; //HotFix
	clearWeaponCargoGlobal floorFix2a;
	clearWeaponCargoGlobal floorFix2b;
	clearMagazineCargoGlobal floorFix2a;
	clearMagazineCargoGlobal floorFix2b;
	clearItemCargoGlobal floorFix2a;
	clearItemCargoGlobal floorFix2b;
	floorFix2a enableSimulation false;
	floorFix2b enableSimulation false;

	floorFix2a attachTo [VQI_HALO_XC130,[ 0.68,-3.1,-4.77]];		// [VQIHALO2,[ 0.76,-3.1,-4.77]];
	floorFix2b attachTo [VQI_HALO_XC130,[-0.75,-3.1,-4.77]];		// [VQIHALO2,[-0.83,-3.1,-4.77]];


sleep 1;
// animate ground plane options
VQI_HALO_XC130 animate ["ramp_bottom", 1];		// XC-130 Nightmare
VQI_HALO_XC130 animate ["ramp_top", 1];			// XC-130 Nightmare
};











sleep 1;
if (VQI_HINTS_HALO == 1) then { hint "groundcraft_XC130.sqf -END-"; };

////////////////////////////////////////////////////////////////////////
/* NOTES:


*/