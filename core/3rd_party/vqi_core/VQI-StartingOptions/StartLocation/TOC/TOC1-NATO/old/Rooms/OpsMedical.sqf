// OpsCenter perspective (from door)
// R/-L, F/-B, U/-D
if (VQI_CORE_HINTS == 1) then { hint "OpsMedical.sqf"; };
sleep 1;

/*
deleteVehicle MED_ACE3_1a;
deleteVehicle MED_Shelf_1;
deleteVehicle MED_Shelf_2;
deleteVehicle MED_Shelf_3;
deleteVehicle MED_Shelf_4;
deleteVehicle MED_Table_1;
deleteVehicle MED_DESK_1;
deleteVehicle MED_CHAIR_1;
deleteVehicle MED_FRIG_1;
deleteVehicle MED_BENCH_1;
deleteVehicle MED_CRATE_1;
deleteVehicle MED_Misc_0;
deleteVehicle MED_Misc_1;
deleteVehicle MED_Misc_2;
deleteVehicle MED_Misc_3;
deleteVehicle MED_Misc_4;
deleteVehicle MED_Misc_5;
deleteVehicle MED_Misc_6;
sleep 1;
*/

private ["_OpsCenterStart"];

_OpsCenterStart = [-100,-100,0];

// ACE3 Crates ////////////////////////////////////////////////////////////
MED_ACE3_1a = "ACE_medicalSupplyCrate_advanced" createVehicle _OpsCenterStart;
MED_ACE3_1a attachTo [OpsCenter,[-0.8, -3, -2.7]];
MED_ACE3_1a setDir 80;


// Shelves ///////////////////////////////////////////////////////////
MED_Shelf_1 = "Land_Metal_rack_Tall_F" createVehicle _OpsCenterStart;
MED_Shelf_1 attachTo [OpsCenter,[2.7, -5.7, -2.9]];
MED_Shelf_1 setDir 180;

MED_Shelf_2 = "Land_Metal_rack_Tall_F" createVehicle _OpsCenterStart;
MED_Shelf_2 attachTo [OpsCenter,[1.92, -5.7, -2.9]];
MED_Shelf_2 setDir 180;

MED_Shelf_3 = "Land_Metal_rack_Tall_F" createVehicle _OpsCenterStart;
MED_Shelf_3 attachTo [OpsCenter,[1.13, -5.7, -2.9]];
MED_Shelf_3 setDir 180;

MED_Shelf_4 = "Land_Metal_rack_Tall_F" createVehicle _OpsCenterStart;
MED_Shelf_4 attachTo [OpsCenter,[0.35, -5.7, -2.9]];
MED_Shelf_4 setDir 180;



// Table //////////////////////////////////////////////////////////////
MED_Table_1 = "Land_WoodenTable_large_F" createVehicle _OpsCenterStart;
MED_Table_1 attachTo [OpsCenter,[-0.65, -4.78, -2.5]];




// Desk/Chair ////////////////////////////////////////////////
MED_DESK_1 = "Land_TableDesk_F" createVehicle _OpsCenterStart;
MED_DESK_1 attachTo [OpsCenter,[2.7, -3.45, -2.5]];
MED_DESK_1 setDir -90;

MED_CHAIR_1 = "Land_CampingChair_V2_F" createVehicle _OpsCenterStart;
MED_CHAIR_1 attachTo [OpsCenter,[2.3, -3.45, -2.5]];
MED_CHAIR_1 setDir -100;
sleep 1;


// Refrigerator ///////////////////////////////////////////////
MED_FRIG_1 = "Fridge_01_closed_F" createVehicle _OpsCenterStart;
MED_FRIG_1 attachTo [OpsCenter,[-0.8, -0.95, -2.5]];
MED_FRIG_1 setDir -90;

MED_Misc_0 = "Land_Bloodbag_F" createVehicle _OpsCenterStart;
MED_Misc_0 attachTo [MED_FRIG_1,[0.1, -0.2, 0.52]];
MED_Misc_0 setDir 90;


// -L/R, -B/F, U/-D (Desk)
// Medical Misc ///////////////////////////////////////////////
MED_Misc_1 = "Land_Defibrillator_F" createVehicle _OpsCenterStart;
MED_Misc_1 attachTo [MED_DESK_1,[0.6, 0, 0.49]];
MED_Misc_1 setDir 90;

// F/-B, R/-L, U/-D (Table)
MED_Misc_2 = "Land_Antibiotic_F" createVehicle _OpsCenterStart;
MED_Misc_2 attachTo [MED_Table_1,[0.4, 0.9, 0.44]];

MED_Misc_3 = "Land_Painkillers_F" createVehicle _OpsCenterStart;
MED_Misc_3 attachTo [MED_Table_1,[0.2, 1, 0.47]];
MED_Misc_3 setDir 250;

MED_Misc_4 = "Land_Bandage_F" createVehicle _OpsCenterStart;
MED_Misc_4 attachTo [MED_Table_1,[0, 1, 0.43]];

MED_Misc_5 = "Land_Heatpack_F" createVehicle _OpsCenterStart;
MED_Misc_5 attachTo [MED_Table_1,[0.2, 3, -0.35]];
MED_Misc_5 setDir 5;

MED_Misc_6 = "Land_Bandage_F" createVehicle _OpsCenterStart;
MED_Misc_6 attachTo [MED_Table_1,[0.2, 3.2, -0.35]];


// CRATES ///////////////////////////////////////////////////////
MED_CRATE_1 = "Box_NATO_Support_F" createVehicle _OpsCenterStart;
MED_CRATE_1 attachTo [OpsCenter,[-0.9, -1.5, -2.6]];
MED_CRATE_1 setDir 90;
sleep 1;

clearWeaponCargoGlobal MED_CRATE_1; clearMagazineCargoGlobal MED_CRATE_1; clearItemCargoGlobal MED_CRATE_1;
MED_CRATE_1 addItemCargoGlobal ["FirstAidKit",25];
MED_CRATE_1 addItemCargoGlobal ["MediKit",4];





// Bench /////////////////////////////////////////////////////
MED_BENCH_1 = "Land_Bench_F" createVehicle _OpsCenterStart;
MED_BENCH_1 attachTo [OpsCenter,[2.1, -0.9, -2.7]];
MED_BENCH_1 setDir 90;


//