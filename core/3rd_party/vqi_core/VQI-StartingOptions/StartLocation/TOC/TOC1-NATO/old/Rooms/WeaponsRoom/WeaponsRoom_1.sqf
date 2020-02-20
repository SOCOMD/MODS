// Table persective
// F/-B, -L/R, U/-D
if (VQI_CORE_HINTS == 1) then { hint "WeaponsRoom_1.sqf"; };
sleep 1;

/*
deleteVehicle WR_Scope1;
deleteVehicle WR_Bipod1;
deleteVehicle WR_Muzzle1;
deleteVehicle WR_Shelf1a;
deleteVehicle WR_Shelf1b;
deleteVehicle WR_Shelf1c;
deleteVehicle WH_1a;
deleteVehicle WR_Target_1;
deleteVehicle WR_Target_2;
sleep 1;
*/

private ["_opsCenterStart"];

_OpsCenterStart = [-100,-100,150];

// Scopes - Crate ///////////////////////////////////////////////
WR_Scope1 = "Box_IND_WpsSpecial_F" createVehicle _OpsCenterStart;
WR_Scope1 attachTo [WRTABLE_1b,[0.2, 0, 0.57]];
WR_Scope1 setDir 90;

// Bipods - Crate ///////////////////////////////////////////////
WR_Bipod1 = "Land_Box_AmmoOld_F" createVehicle _OpsCenterStart;
WR_Bipod1 attachTo [WRTABLE_1b,[-0.4, -1.6, 0.68]];
WR_Bipod1 setDir 10;

// Muzzle - Crate ///////////////////////////////////////////////
WR_Muzzle1 = "Box_NATO_Support_F" createVehicle _OpsCenterStart;
WR_Muzzle1 attachTo [WRTABLE_1b,[-0.4, 1.6, 0.68]];
sleep 1;

//--------------------------------------------------------------------------------------



// Shelves //////////////////////////////////////////////////////////
WR_Shelf1a = "Land_Metal_rack_Tall_F" createVehicle _OpsCenterStart;
WR_Shelf1a attachTo [WRTABLE_1b,[-0.4, -0.8, 0.4]];
WR_Shelf1a setDir -90;

WR_Shelf1b = "Land_Metal_rack_Tall_F" createVehicle _OpsCenterStart;
WR_Shelf1b attachTo [WRTABLE_1b,[-0.4, 0, 0.4]];
WR_Shelf1b setDir -90;

WR_Shelf1c = "Land_Metal_rack_Tall_F" createVehicle _OpsCenterStart;
WR_Shelf1c attachTo [WRTABLE_1b,[-0.4, 0.8, 0.4]];
WR_Shelf1c setDir -90;


// Scope
wH_1a = "groundWeaponHolder" createVehicle _OpsCenterStart; 
wH_1a attachTo [WRTABLE_1b,[0,-0.3,1.4]];   
wH_1a addItemCargoGlobal ["optic_LRPS", 1];
[wH_1a,[0,0,30]] call VQI_fnc_SetPitchBankYaw; // pitch, bank, yaw



// Misc //////////////////////////////////////////////////////////
WR_Target_1 = "VQI_Target_Black" createVehicle _OpsCenterStart;
WR_Target_1 attachTo [WRTABLE_1b,[-0.38, -3.9, 0.4]];
WR_Target_1 setDir 180;

WR_Target_2 = "VQI_Target_Black" createVehicle _OpsCenterStart;
WR_Target_2 attachTo [WRTABLE_1b,[-0.4, -3.6, 0.4]];
WR_Target_2 setDir 230;



