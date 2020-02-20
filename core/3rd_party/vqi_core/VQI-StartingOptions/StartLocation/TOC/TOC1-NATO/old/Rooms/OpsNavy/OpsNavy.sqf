// Template: Operations Centre
// Ref. N.Door: -L/R, -B/F, -D/U
if (VQI_CORE_HINTS == 1) then { hint "OpsNavy.sqf"; };
sleep 1;

/*
deleteVehicle VQI_DIVER_DESK1;
deleteVehicle VQI_DIVER_HMSPROTEUS;
deleteVehicle OPCZodiac1;
deleteVehicle CrewNavy1;
deleteVehicle CrewNavy2;
deleteVehicle CrewNavy3;
deleteVehicle NAVY_Chair_1;
deleteVehicle NAVY_Shelf_1;
deleteVehicle NAVY_Bucket_1;
deleteVehicle NAVY_Bench_1;
deleteVehicle NAVY_Table_1;
deleteVehicle NAVY_O2tank_1;
deleteVehicle NAVY_Goggles_1;
sleep 1;
*/


private ["_OpsCenterStart"];

_OpsCenterStart = [-100,-100,0];


//-----------------------------------------------------------------------------
//Diver/Submarine Operations
VQI_DIVER_DESK1 = "Land_TableDesk_F" createVehicle _OpsCenterStart;
VQI_DIVER_DESK1 attachTo [OpsCenter,[0,11,-2.5]];
VQI_DIVER_DESK1 setDir 180;

VQI_DIVER_HMSPROTEUS1 = "Land_Laptop_Unfolded_F" createVehicle _OpsCenterStart;
VQI_DIVER_HMSPROTEUS1 attachTo [VQI_DIVER_DESK1,[0,0,0.56]];

//Zodiac
OPCZodiac1 = "B_Boat_Transport_01_F" createVehicle _OpsCenterStart;
OPCZodiac1 attachTo [OpsCenter,[4,9,-1.5]];
OPCZodiac1 setDir 1;
OPCZodiac1 enableSimulation false;

//Goggles
//NAVY_Goggles_1 = "Goggles_G_Diving" createVehicle _OpsCenterStart;
//NAVY_Goggles_1 attachTo [OpsCenter,[0, 10, -2]];

//Shelf
NAVY_Shelf_1 = "Land_Metal_rack_Tall_F" createVehicle _OpsCenterStart;
NAVY_Shelf_1 attachTo [OpsCenter,[-1.5, 11.3, -2.9]];

//Bucket
NAVY_Bucket_1 = "Land_BucketNavy_F" createVehicle _OpsCenterStart;
NAVY_Bucket_1 attachTo [OpsCenter,[-1.1, 10.8, -2.7]];

// Bench /////////////////////////////////////////////////////
NAVY_Bench_1 = "Land_Bench_F" createVehicle _OpsCenterStart;
NAVY_Bench_1 attachTo [OpsCenter,[-1.9, 7.1, -2.7]];

// Table //////////////////////////////////////////////////////////////
NAVY_Table_1 = "Land_WoodenTable_large_F" createVehicle _OpsCenterStart;
NAVY_Table_1 attachTo [OpsCenter,[1.45, 6.58, -2.5]];
NAVY_Table_1 setDir 90;

sleep 5;

// (Table) F/-B, L/-R, U/-D
// O2 //////////////////////////////////////////////////////////////
NAVY_O2tank_1 = "Vest_V_RebreatherB" createVehicle _OpsCenterStart;
NAVY_O2tank_1 attachTo [NAVY_Table_1,[0.4, -0.4, 0.65]];
[NAVY_O2tank_1,[-75,0,90]] call VQI_fnc_SetPitchBankYaw; // pitch, bank, yaw


sleep 5;


//Tech
CrewNavy1 = "B_Helipilot_F" createVehicle _OpsCenterStart;
removeAllweapons CrewNavy1; removeAllItems CrewNavy1;  removeAllAssignedItems CrewNavy1;  removeBackpack CrewNavy1;  removeVest CrewNavy1; CrewNavy1 addHeadgear "H_MilCap_blue";
CrewNavy1 attachTo [OpsCenter,[2.3, 8, -2.85]];
CrewNavy1 setDir 90;
sleep 1;
//[] spawn { CrewNavy1 switchMove "AidlPknlMstpSnonWnonDnon_AI"; };
	[[CrewNavy1,"AidlPknlMstpSnonWnonDnon_AI"],
	"switchMove"] call BIS_fnc_MP;

sleep 1;


//Flipper
CrewNavy2 = "B_Soldier_survival_F" createVehicle _OpsCenterStart;
removeAllweapons CrewNavy2; removeAllItems CrewNavy2;  removeAllAssignedItems CrewNavy2;  removeBackpack CrewNavy2;  removeVest CrewNavy2; CrewNavy2 addHeadgear "H_MilCap_blue";
CrewNavy2 attachTo [OpsCenter,[1, 10, -2.85]];
CrewNavy2 setDir 320;
sleep 1;
//[] spawn { CrewNavy2 switchMove "AidlPercMstpSnonWnonDnon_AI"; };
	[[CrewNavy2,"AidlPercMstpSnonWnonDnon_AI"],
	"switchMove"] call BIS_fnc_MP;

sleep 1;


//Diver
CrewNavy3 = "B_Diver_F" createVehicle _OpsCenterStart;
removeAllweapons CrewNavy3; removeAllItems CrewNavy3;  removeAllAssignedItems CrewNavy3;  removeBackpack CrewNavy3;  removeVest CrewNavy3; CrewNavy3 addHeadgear "H_MilCap_blue";
CrewNavy3 attachTo [OpsCenter,[1.7, 10.9, -2.28]];
CrewNavy3 setDir 180;
sleep 1;
//[] spawn { CrewNavy3 switchMove "passenger_bench_1_Idle_Unarmed"; };
	[[CrewNavy3,"passenger_bench_1_Idle_Unarmed"],
	"switchMove"] call BIS_fnc_MP;
	
//Chair
NAVY_Chair_1 = "Land_CampingChair_V2_F" createVehicle _OpsCenterStart;
NAVY_Chair_1 attachTo [OpsCenter,[1.7, 11.1, -2.4]];






sleep 5;
// Menu Options ///////////////////////////////////////////////////////////////////

//[[VQI_DIVER_HMSPROTEUS1, ["HMS Proteus: Request Surface Pick-Up", "execVM 'vqi_diver\VQI-DevilDiver\vqi_request_subtransport_pickup.sqf'; [VQI_DIVER_HMSPROTEUS1, 2]"]], "addAction", true, true] call BIS_fnc_MP;
[[VQI_DIVER_HMSPROTEUS1, ["HMS Proteus: Request Transport - Deep", "[player] execVM 'vqi_diver\VQI-DevilDiver\vqi_request_subtransport_deep.sqf'; [VQI_DIVER_HMSPROTEUS1, 3]"]], "addAction", true, true] call BIS_fnc_MP;
[[VQI_DIVER_HMSPROTEUS1, ["HMS Proteus: Request Transport - Shallow", "[player] execVM 'vqi_diver\VQI-DevilDiver\vqi_request_subtransport_shallow.sqf'; [VQI_DIVER_HMSPROTEUS1, 3]"]], "addAction", true, true] call BIS_fnc_MP;


sleep 1;
//if (VQI_DIVER_BOARDING == 2) then {
	[[VQI_DIVER_HMSPROTEUS1, ["HMS Proteus: Board Submarine", "[player] execVM 'vqi_diver\VQI-DevilDiver\vqi_lockoutchamber_int_sub.sqf'; [VQI_DIVER_HMSPROTEUS1, 1]"]], "addAction", true, true] call BIS_fnc_MP;
//};
sleep 1;



//