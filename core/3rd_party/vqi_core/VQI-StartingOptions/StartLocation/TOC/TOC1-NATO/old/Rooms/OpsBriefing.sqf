//
//
if (VQI_CORE_HINTS == 1) then { hint "OpsBriefing.sqf"; };
sleep 1;

/*
deleteVehicle OPCTABLE1;
deleteVehicle OPCTABLE2;
deleteVehicle OPCTABLE3;
deleteVehicle OPCTABLE4;

deleteVehicle OPCMAPBOARD1;
deleteVehicle OPCMAPBOARD2;
deleteVehicle OPCMAPBOARD3;

deleteVehicle OPCCHAIR1a;
deleteVehicle OPCCHAIR1b;
deleteVehicle OPCCHAIR1c;
deleteVehicle OPCCHAIR1d;

deleteVehicle OPCCHAIR2a;
deleteVehicle OPCCHAIR2b;
deleteVehicle OPCCHAIR2c;
deleteVehicle OPCCHAIR2d;

deleteVehicle OPCCHAIR3a;
deleteVehicle OPCCHAIR3b;
deleteVehicle OPCCHAIR3c;
deleteVehicle OPCCHAIR3d;

deleteVehicle OPCCHAIR4a;
deleteVehicle OPCCHAIR4b;
deleteVehicle OPCCHAIR4c;
deleteVehicle OPCCHAIR4d;

deleteVehicle WaterCooler0;
deleteVehicle WaterCooler1;

deleteVehicle OPCMonitor1;
deleteVehicle OPCMonitor2;
deleteVehicle OPCMonitor3;
deleteVehicle OPCMonitor4;
deleteVehicle OPCRadio1;
deleteVehicle OPCComSat1;
deleteVehicle OPCComDesk1;
deleteVehicle OPCComChair1;
deleteVehicle OPCComChair2;
deleteVehicle OPCComChair3;
deleteVehicle NAV_SHELF_1;
deleteVehicle NAV_SHELF_2;

deleteVehicle OPCMap1;
deleteVehicle OPCMap2;
deleteVehicle OPCMap3;
deleteVehicle OPCMap4;
deleteVehicle OPCNav1;
deleteVehicle OPCNavCrate;
deleteVehicle OPCComCrate;
deleteVehicle OPCVRCrate;
*/

private ["_OpsCenterStart"];

_OpsCenterStart = [-100,-100,0];


//--------------------------------------------------------------------
OPCTABLE1 = "Land_WoodenTable_large_F" createVehicle _OpsCenterStart;
OPCTABLE1 attachTo [OpsCenter,[-12.7,3,-2.5]];
OPCTABLE1 setDir 0;

OPCMAPBOARD1 = "Land_MapBoard_F" createVehicle _OpsCenterStart;
OPCMAPBOARD1 attachTo [OpsCenter,[-12.8,1.4,-1.9]];
OPCMAPBOARD1 setDir -110;

OPCMAPBOARD2 = "MapBoard_altis_F" createVehicle _OpsCenterStart;
OPCMAPBOARD2 attachTo [OpsCenter,[-12.8,4.65,-1.9]];
OPCMAPBOARD2 setDir -70;

OPCMAPBOARD3 = "MapBoard_seismic_F" createVehicle _OpsCenterStart;
OPCMAPBOARD3 attachTo [OpsCenter,[6.2,-5.5,-1.9]];
OPCMAPBOARD3 setDir 145;
sleep 1;


// Chairs ----------------------------------------------------------
OPCCHAIR1a = "Land_CampingChair_V2_F" createVehicle _OpsCenterStart;
OPCCHAIR1a attachTo [OpsCenter,[-9,1.7,-2.4]];
OPCCHAIR1a setDir 90;

OPCCHAIR1b = "Land_CampingChair_V2_F" createVehicle _OpsCenterStart;
OPCCHAIR1b attachTo [OpsCenter,[-9,2.3,-2.4]];
OPCCHAIR1b setDir 90;

OPCCHAIR1c = "Land_CampingChair_V2_F" createVehicle _OpsCenterStart;
OPCCHAIR1c attachTo [OpsCenter,[-9,3.7,-2.4]];
OPCCHAIR1c setDir 90;

OPCCHAIR1d = "Land_CampingChair_V2_F" createVehicle _OpsCenterStart;
OPCCHAIR1d attachTo [OpsCenter,[-9,4.3,-2.4]];
OPCCHAIR1d setDir 90;

OPCCHAIR2a = "Land_CampingChair_V2_F" createVehicle _OpsCenterStart;
OPCCHAIR2a attachTo [OpsCenter,[-8,1.7,-2.4]];
OPCCHAIR2a setDir 90;

OPCCHAIR2b = "Land_CampingChair_V2_F" createVehicle _OpsCenterStart;
OPCCHAIR2b attachTo [OpsCenter,[-8,2.3,-2.4]];
OPCCHAIR2b setDir 90;

OPCCHAIR2c = "Land_CampingChair_V2_F" createVehicle _OpsCenterStart;
OPCCHAIR2c attachTo [OpsCenter,[-8,3.7,-2.4]];
OPCCHAIR2c setDir 90;

OPCCHAIR2d = "Land_CampingChair_V2_F" createVehicle _OpsCenterStart;
OPCCHAIR2d attachTo [OpsCenter,[-8,4.3,-2.4]];
OPCCHAIR2d setDir 90;

OPCCHAIR3a = "Land_CampingChair_V2_F" createVehicle _OpsCenterStart;
OPCCHAIR3a attachTo [OpsCenter,[-6,1.7,-2.4]];
OPCCHAIR3a setDir 90;

OPCCHAIR3b = "Land_CampingChair_V2_F" createVehicle _OpsCenterStart;
OPCCHAIR3b attachTo [OpsCenter,[-6,2.3,-2.4]];
OPCCHAIR3b setDir 90;

OPCCHAIR3c = "Land_CampingChair_V2_F" createVehicle _OpsCenterStart;
OPCCHAIR3c attachTo [OpsCenter,[-6,3.7,-2.4]];
OPCCHAIR3c setDir 90;

OPCCHAIR3d = "Land_CampingChair_V2_F" createVehicle _OpsCenterStart;
OPCCHAIR3d attachTo [OpsCenter,[-6,4.3,-2.4]];
OPCCHAIR3d setDir 90;

OPCCHAIR4a = "Land_CampingChair_V2_F" createVehicle _OpsCenterStart;
OPCCHAIR4a attachTo [OpsCenter,[-5,1.7,-2.4]];
OPCCHAIR4a setDir 90;

OPCCHAIR4b = "Land_CampingChair_V2_F" createVehicle _OpsCenterStart;
OPCCHAIR4b attachTo [OpsCenter,[-5,2.3,-2.4]];
OPCCHAIR4b setDir 90;

OPCCHAIR4c = "Land_CampingChair_V2_F" createVehicle _OpsCenterStart;
OPCCHAIR4c attachTo [OpsCenter,[-5,3.7,-2.4]];
OPCCHAIR4c setDir 90;

OPCCHAIR4d = "Land_CampingChair_V2_F" createVehicle _OpsCenterStart;
OPCCHAIR4d attachTo [OpsCenter,[-5,4.3,-2.4]];
OPCCHAIR4d setDir 90;
sleep 1;


// WaterCooler -----------------------------------------
WaterCooler0 = "Land_WaterCooler_01_old_F" createVehicle _OpsCenterStart;
WaterCooler0 attachTo [OpsCenter,[6.5,-0.5,-2.2]];	// 
WaterCooler0 setDir 90;

WaterCooler1 = "Land_WaterCooler_01_new_F" createVehicle _OpsCenterStart;
WaterCooler1 attachTo [OpsCenter,[6.5,-1,-2.2]];		// 
WaterCooler1 setDir 90;



// Tables X -----------------------------------------------------------
OPCTABLE2 = "Land_WoodenTable_large_F" createVehicle _OpsCenterStart;
OPCTABLE2 attachTo [OpsCenter,[-6.77,-5.4,-2.5]];
OPCTABLE2 setDir 90;

OPCTABLE3 = "Land_WoodenTable_large_F" createVehicle _OpsCenterStart;
OPCTABLE3 attachTo [OpsCenter,[-8.95,-5.4,-2.5]];
OPCTABLE3 setDir 90;


// Communication ------------------------------------------------------
OPCMonitor1 = "Land_FlatTV_01_F" createVehicle _OpsCenterStart;
OPCMonitor1 attachTo [OpsCenter,[-6.48,-5.5,-1.77]];	// -6.85
OPCMonitor1 setDir 150;

OPCMonitor2 = "Land_FlatTV_01_F" createVehicle _OpsCenterStart;
OPCMonitor2 attachTo [OpsCenter,[-7.39,-5.7,-1.77]];	// -7.8
OPCMonitor2 setDir 180;

OPCMonitor3 = "Land_FlatTV_01_F" createVehicle _OpsCenterStart;
OPCMonitor3 attachTo [OpsCenter,[-8.33,-5.7,-1.77]];	// -6.85
OPCMonitor3 setDir 180;

OPCMonitor4 = "Land_FlatTV_01_F" createVehicle _OpsCenterStart;
OPCMonitor4 attachTo [OpsCenter,[-9.24,-5.5,-1.77]];	// -7.8
OPCMonitor4 setDir 210;

OPCComCrate = "Box_Ind_WpsSpecial_F" createVehicle _OpsCenterStart;
OPCComCrate attachTo [OpsCenter,[-8.5,-0.95,-2.7]];
sleep 1;

// Crate (randomized?)
clearWeaponCargoGlobal OPCComCrate; clearMagazineCargoGlobal OPCComCrate; clearItemCargoGlobal OPCComCrate;
OPCComCrate additemCargoGlobal ["itemRadio",((random 10) + 5)];



OPCRadio1 = "Land_PortableLongRangeRadio_F" createVehicle _OpsCenterStart;
OPCRadio1 attachTo [OPCTABLE2,[-0.3, -0.3, 0.44]];	//

OPCComSat1 = "Land_SatellitePhone_F" createVehicle _OpsCenterStart;
OPCComSat1 attachTo [OpsCenter,[-6.4, -1.05, -1.9]];	//
OPCComSat1 setDir 20;

OPCComDesk1 = "Land_TableDesk_F" createVehicle _OpsCenterStart;
OPCComDesk1 attachTo [OpsCenter,[-6.6,-1.05, -2.5]];	//
OPCComDesk1 setDir 180;

OPCComChair1 = "Land_CampingChair_V2_F" createVehicle _OpsCenterStart;
OPCComChair1 attachTo [OpsCenter,[-6.6,-1.45, -2.5]];	//
OPCComChair1 setDir 185;

OPCComChair2 = "Land_CampingChair_V2_F" createVehicle _OpsCenterStart;
OPCComChair2 attachTo [OpsCenter,[-6.6,-4.45, -2.5]];	//
OPCComChair2 setDir 15;

OPCComChair3 = "Land_CampingChair_V2_F" createVehicle _OpsCenterStart;
OPCComChair3 attachTo [OpsCenter,[-9,-4.8, -2.5]];	//

// Shelves ///////////////////////////////////////////////////////////
NAV_Shelf_1 = "Land_Metal_rack_Tall_F" createVehicle _OpsCenterStart;
NAV_Shelf_1 attachTo [OpsCenter,[-5.9, -2.6, -2.9]];
NAV_Shelf_1 setDir 90;

NAV_Shelf_2 = "Land_Metal_rack_Tall_F" createVehicle _OpsCenterStart;
NAV_Shelf_2 attachTo [OpsCenter,[-5.9, -3.38, -2.9]];
NAV_Shelf_2 setDir 90;







// Navigation -----------------------------------------------------------
OPCTABLE4 = "Land_WoodenTable_large_F" createVehicle _OpsCenterStart;
OPCTABLE4 attachTo [OpsCenter,[-3.4,-3.3,-2.5]];

OPCMap1 = "Land_Map_blank_F" createVehicle _OpsCenterStart;
OPCMap1 attachTo [OpsCenter,[-3.4,-3.1,-2.06]];
OPCMap1 setDir 10;

OPCMap2 = "Land_Map_stratis_F" createVehicle _OpsCenterStart;
OPCMap2 attachTo [OpsCenter,[-3.4,-3.7,-2.07]];
OPCMap2 setDir -10;

OPCMap3 = "Land_Map_unfolded_F" createVehicle _OpsCenterStart;
OPCMap3 attachTo [OpsCenter,[-3.4,-2.5,-2.06]];
OPCMap3 setDir -40;

OPCMap4 = "Land_File2_F" createVehicle _OpsCenterStart;
OPCMap4 attachTo [OpsCenter,[-3.7,-2.5,-2.06]];
OPCMap4 setDir 0;

OPCNav1 = "Land_Compass_F" createVehicle _OpsCenterStart;
OPCNav1 attachTo [OpsCenter,[-3.6,-3.3,-2.06]];
OPCNav1 setDir 0;

OPCNavCrate = "Box_NATO_Support_F" createVehicle _OpsCenterStart;
OPCNavCrate attachTo [OpsCenter,[-1.7,-5.6,-2.6]];
OPCNavCrate setDir 90;
sleep 1;

// Crate (randomized?) 
clearWeaponCargoGlobal OPCNavCrate; clearMagazineCargoGlobal OPCNavCrate; clearItemCargoGlobal OPCNavCrate;
OPCNavCrate additemCargoGlobal ["itemMap",((random 20) - 3)];
OPCNavCrate additemCargoGlobal ["itemCompass",((random 20) - 3)];
OPCNavCrate additemCargoGlobal ["itemGPS",((random 10) - 4)];






sleep 1;
OPCVRCrate = "Land_Pallet_MilBoxes_F" createVehicle _OpsCenterStart;
OPCVRCrate attachTo [OpsCenter,[3, 5, -2.4]];

sleep 1; // Virtual Arsenal
0 = ["AmmoboxInit",[OPCVRCrate,true]] spawn BIS_fnc_arsenal;
sleep 1;







//-----------------------------------------------------------------------------





















//MilPallet1 = "Land_Pallet_MilBoxes_F" createVehicle _OpsCenterStart;
//MilPallet1 attachTo [WRTABLE1e,[0.2,-2,0.05]];
//MilPallet1 setDir 270;