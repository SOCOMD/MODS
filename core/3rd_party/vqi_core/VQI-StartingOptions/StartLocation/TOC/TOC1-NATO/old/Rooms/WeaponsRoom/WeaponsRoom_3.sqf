// Table Perspective
// B/-F, L/-R, U/-D
if (VQI_CORE_HINTS == 1) then { hint "WeaponsRoom_3.sqf"; };
sleep 1;


/*
deleteVehicle WR_Night;
deleteVehicle WR_Equip3;
deleteVehicle WR_Shelf3;
deleteVehicle WR_Shelf3a;
deleteVehicle WR_Shelf3b;
deleteVehicle WR_Shelf3c;

deleteVehicle WH_3a;
deleteVehicle WH_3b;
deleteVehicle WH_3c;
deleteVehicle WH_3d;
deleteVehicle WH_3e;
deleteVehicle WH_3f;
deleteVehicle RemoteDes1;
deleteVehicle DarterUAV;
sleep 1;
*/


private ["_opsCenterStart"];

_OpsCenterStart = [-100,-100,100];

// Shelves //////////////////////////////////////////////////////////
WR_Shelf3 = "Land_Metal_rack_Tall_F" createVehicle _OpsCenterStart;
WR_Shelf3 attachTo [WRTABLE_3a,[0.3, -0.6, 0.4]];
WR_Shelf3 setDir 90;

// Equipment - Crate ////////////////////////////////////////////
WR_Equip3 = "Box_East_Wps_F" createVehicle _OpsCenterStart;
WR_Equip3 attachTo [WRTABLE_3b,[0.2, 0, 0.57]];
WR_Equip3 setDir 85;
sleep 1;




// Night - Crate /////////////////////////////////////////////////
WR_Night = "Box_IND_WpsSpecial_F" createVehicle _OpsCenterStart;
WR_Night attachTo [WRTABLE_3c,[-0.2, -1.9, -0.2]];
WR_Night setDir 90;
sleep 1;

// Shelves //////////////////////////////////////////////////////////
WR_Shelf3a = "Land_Metal_rack_Tall_F" createVehicle _OpsCenterStart;
WR_Shelf3a attachTo [WRTABLE_3c,[0.3, -1.7, -0.4]];
WR_Shelf3a setDir 90;

WR_Shelf3b = "Land_Metal_rack_Tall_F" createVehicle _OpsCenterStart;
WR_Shelf3b attachTo [WRTABLE_3c,[0.3, -2.5, -0.4]];
WR_Shelf3b setDir 90;

WR_Shelf3c = "Land_Metal_rack_Tall_F" createVehicle _OpsCenterStart;
WR_Shelf3c attachTo [WRTABLE_3c,[0.3, -3.3, -0.4]];
WR_Shelf3c setDir 90;

//--------------------------------------------------------------------------------------


// NV Goggles
wH_3a = "groundWeaponHolder" createVehicle _OpsCenterStart; 
wH_3a attachTo [WRTABLE_3c,[0.4, -2.3, -0.68]];   
wH_3a addItemCargoGlobal ["NVGoggles_OPFOR", 1];
[wH_3a,[90,0,-90]] call VQI_fnc_SetPitchBankYaw; // pitch, bank, yaw

wH_3b = "groundWeaponHolder" createVehicle _OpsCenterStart; 
wH_3b attachTo [WRTABLE_3c,[1, -1.6, -0.6]];   
wH_3b addItemCargoGlobal ["NVGoggles_INDEP", 1];
[wH_3b,[90,0,-90]] call VQI_fnc_SetPitchBankYaw; // pitch, bank, yaw


// Flashlight
wH_3c = "groundWeaponHolder" createVehicle _OpsCenterStart; 
wH_3c attachTo [WRTABLE_3c,[0.2, -1.9, 0.72]];   
wH_3c addItemCargoGlobal ["acc_pointer_IR", 1];

wH_3d = "groundWeaponHolder" createVehicle _OpsCenterStart; 
wH_3d attachTo [WRTABLE_3c,[0.2, -1.8, 0.72]];   
wH_3d addItemCargoGlobal ["acc_flashlight", 1];

// Binocs
wH_3e = "groundWeaponHolder" createVehicle _OpsCenterStart; 
wH_3e attachTo [WRTABLE_3b,[0.7, 0.1, 0.8]];   
wH_3e addItemCargoGlobal ["Binocular", 1];
[wH_3e,[90,0,-90]] call VQI_fnc_SetPitchBankYaw; // pitch, bank, yaw

// RangeFinder
wH_3f = "groundWeaponHolder" createVehicle _OpsCenterStart; 
wH_3f attachTo [WRTABLE_3b,[0.7, -0.8, 0.47]];   
wH_3f addItemCargoGlobal ["RangeFinder", 1];
[wH_3f,[90,0,-90]] call VQI_fnc_SetPitchBankYaw; // pitch, bank, yaw

// Remote Designator
RemoteDes1 = "B_Static_Designator_01_F" createVehicle _OpsCenterStart;
RemoteDes1 allowDamage false;
RemoteDes1 attachTo [WRTABLE_3a,[0,0.7,0.93]];
RemoteDes1 setDir 180;

// UAV
DarterUAV = "B_UAV_01_F" createVehicle _OpsCenterStart;
DarterUAV allowDamage false;
DarterUAV attachTo [WRTABLE_3c,[0,-0.6,0.55]];











