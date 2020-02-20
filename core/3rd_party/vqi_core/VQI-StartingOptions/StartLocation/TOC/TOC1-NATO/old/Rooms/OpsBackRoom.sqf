// OpsCenter perspective (from door)
// R/-L, F/-B, U/-D
if (VQI_CORE_HINTS == 1) then { hint "OpsBackRoom.sqf"; };
sleep 1;

/*
deleteVehicle OC_CargoNet1;
deleteVehicle OC_CargoNet2;
deleteVehicle OC_CargoNet3;
deleteVehicle OC_CargoNet4;
deleteVehicle WR_Shelf_BRa;
deleteVehicle WR_Shelf_BRb;
deleteVehicle WR_Shelf_BRc;
deleteVehicle WR_Shelf_BRd;
deleteVehicle WR_Shelf_BRe;
deleteVehicle WR_Shelf_BRf;
deleteVehicle BRTABLE_1a;
deleteVehicle BRTABLE_1b;
deleteVehicle BRTABLE_1c;
deleteVehicle BRTABLE_1d;
deleteVehicle BRDESK_1;
deleteVehicle BRCHAIR_1;
deleteVehicle BR_File_1;
deleteVehicle BR_Radio_1;

deleteVehicle BR_Misc_1;
deleteVehicle BR_Misc_2;
deleteVehicle BR_Misc_3;

deleteVehicle BR_ConLock_1;
deleteVehicle BR_ConLock_2;
deleteVehicle BR_ConLock_3;
sleep 1;
*/

private ["_OpsCenterStart"];

_OpsCenterStart = [-100,-100,100];

// Gear & Equipment -------------------------------------
OC_CargoNet1 = "O_CargoNet_01_ammo_F" createVehicle _OpsCenterStart;
OC_CargoNet1 attachTo [OpsCenter,[16.25, 3.2, -2]];	// 
OC_CargoNet1 setDir 180;

OC_CargoNet2 = "B_CargoNet_01_ammo_F" createVehicle _OpsCenterStart;
OC_CargoNet2 attachTo [OpsCenter,[16.25, 0.5, -2]];

OC_CargoNet3 = "I_CargoNet_01_ammo_F" createVehicle _OpsCenterStart;
OC_CargoNet3 attachTo [OpsCenter,[16.25, -2.2, -2]];
OC_CargoNet3 setDir 90;

OC_CargoNet4 = "B_CargoNet_01_ammo_F" createVehicle _OpsCenterStart;
OC_CargoNet4 attachTo [OpsCenter,[16.25, -5, -2]];
OC_CargoNet4 setDir 180;
//-------------------------------------------------------


//-----------------------------------------------------------------------------
execVM "vqi_core\VQI-CreepyCORE\StartLocation\OpsCenter1\Rooms\Crates_OpsBackRoom.sqf";
sleep 1;



// Shelves //////////////////////////////////////////////////////////
WR_Shelf_BRa = "Land_Metal_rack_Tall_F" createVehicle _OpsCenterStart;
WR_Shelf_BRa attachTo [OpsCenter,[17, 1.85, -2.9]];
WR_Shelf_BRa setDir 90;

WR_Shelf_BRb = "Land_Metal_rack_Tall_F" createVehicle _OpsCenterStart;
WR_Shelf_BRb attachTo [OpsCenter,[17, -0.85, -2.9]];
WR_Shelf_BRb setDir 90;

WR_Shelf_BRc = "Land_Metal_rack_Tall_F" createVehicle _OpsCenterStart;
WR_Shelf_BRc attachTo [OpsCenter,[17, -3.6, -2.9]];
WR_Shelf_BRc setDir 90;
//
WR_Shelf_BRd = "Land_Metal_rack_Tall_F" createVehicle _OpsCenterStart;
WR_Shelf_BRd attachTo [OpsCenter,[7.7, 0.2, -2.9]];
WR_Shelf_BRd setDir 180;

WR_Shelf_BRe = "Land_Metal_rack_Tall_F" createVehicle _OpsCenterStart;
WR_Shelf_BRe attachTo [OpsCenter,[6.9, 0.2, -2.9]];
WR_Shelf_BRe setDir 180;

WR_Shelf_BRf = "Land_Metal_rack_Tall_F" createVehicle _OpsCenterStart;
WR_Shelf_BRf attachTo [OpsCenter,[6.1, 0.2, -2.9]];
WR_Shelf_BRf setDir 180;





// Tables ////////////////////////////////////////////////////////////
BRTABLE_1a = "Land_WoodenTable_large_F" createVehicle _OpsCenterStart;
BRTABLE_1a attachTo [OpsCenter,[13.3, -2, -2.5]];

BRTABLE_1b = "Land_WoodenTable_large_F" createVehicle _OpsCenterStart;
BRTABLE_1b attachTo [OpsCenter,[13.3, 0.2, -2.5]];

/*
BRTABLE_1c = "Land_WoodenTable_large_F" createVehicle _OpsCenterStart;
BRTABLE_1c attachTo [OpsCenter,[6.7, 0.55, -2.5]];
BRTABLE_1c setDir 90;
*/




// Desk/Chair ///////////////////////////////////////////////
BRDESK_1 = "Land_TableDesk_F" createVehicle _OpsCenterStart;
BRDESK_1 attachTo [OpsCenter,[10, 0.9, -2.5]];
BRDESK_1 setDir -90;

BRCHAIR_1 = "Land_CampingChair_V2_F" createVehicle _OpsCenterStart;
BRCHAIR_1 attachTo [OpsCenter,[9.5, 0.9, -2.5]];
BRCHAIR_1 setDir -100;

BR_File_1 = "Land_File2_F" createVehicle _OpsCenterStart;
BR_File_1 attachTo [OpsCenter,[10, 0.9, -2.08]];
BR_File_1 setDir 10;

BR_Radio_1 = "Land_SurvivalRadio_F" createVehicle _OpsCenterStart;
BR_Radio_1 attachTo [OpsCenter,[10.25, 0.05, -1.98]];


sleep 1;



// Gear, Bags, Misc, etc ////////////////////////////////////////////////
BR_Misc_1 = "Land_Sleeping_bag_folded_F" createVehicle _OpsCenterStart;
BR_Misc_1 attachTo [BRTABLE_1a,[0, 0.7, 0.52]];
BR_Misc_1 setDir 25;

BR_Misc_2 = "Headgear_H_HelmetB_black" createVehicle _OpsCenterStart;
BR_Misc_2 attachTo [BRTABLE_1a,[0.3, -0.5, 0.25]];








// Block Doors //////////////////////////////////////////////////////////
BR_ConLock_1 = "Land_Cargo20_white_F" createVehicle _OpsCenterStart;
BR_ConLock_1 attachTo [OpsCenter,[4, -7.35, -2]];

BR_ConLock_2 = "Land_Cargo20_white_F" createVehicle _OpsCenterStart;
BR_ConLock_2 attachTo [OpsCenter,[12, -7.35, -2]];

BR_ConLock_3 = "Land_Cargo20_white_F" createVehicle _OpsCenterStart;
BR_ConLock_3 attachTo [OpsCenter,[-12, 13, -2]];

