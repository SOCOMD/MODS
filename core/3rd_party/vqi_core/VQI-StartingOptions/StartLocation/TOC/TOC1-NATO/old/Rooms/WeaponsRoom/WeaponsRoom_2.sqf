// Table perspective
// B/-F, L/-R, U/-D
if (VQI_CORE_HINTS == 1) then { hint "WeaponsRoom_2.sqf"; };
sleep 1;



/*
deleteVehicle WR_Shelf2;
deleteVehicle WR_Gre1;
deleteVehicle WR_Gre2;
deleteVehicle WR_Gre3;
deleteVehicle WR_Exp1;
deleteVehicle WR_Exp2;
deleteVehicle WR_Exp3;

deleteVehicle WH_2a;
deleteVehicle WH_2b;
deleteVehicle WH_2c;
deleteVehicle WH_2d;
deleteVehicle WH_2e;
deleteVehicle WH_2f;
deleteVehicle WH_2g;
deleteVehicle WH_2h;
deleteVehicle WH_2i;
deleteVehicle WH_2j;
deleteVehicle WH_2k;
deleteVehicle WH_2m;
sleep 1;
*/

private ["_opsCenterStart"];

_OpsCenterStart = [-100,-100,100];

// Shelves //////////////////////////////////////////////////////////
WR_Shelf2 = "Land_Metal_rack_Tall_F" createVehicle _OpsCenterStart;
WR_Shelf2 attachTo [WRTABLE_2b,[0.3, 2.8, 0.4]];
WR_Shelf2 setDir 90;



// Grenades - Exp /////////////////////////////////////////////
WR_Gre1 = "Box_NATO_Grenades_F" createVehicle _OpsCenterStart;
WR_Gre1 attachTo [WRTABLE_2b,[0.2, 1.7, 0.68]];

// Grenades - Smoke ////////////////////////////////////////
WR_Gre2 = "Box_IND_Grenades_F" createVehicle _OpsCenterStart;
WR_Gre2 attachTo [WRTABLE_2b,[0.2, 1, 0.68]];

// Grenades - 203 ///////////////////////////////////////////
WR_Gre3 = "Box_IND_AmmoOrd_F" createVehicle _OpsCenterStart;
WR_Gre3 attachTo [WRTABLE_2b,[0.2, 0, 0.68]];



/////////////////////////////////////////////////////////////
// Explosives - Small ///////////////////////////////////////
WR_Exp1 = "Box_IND_WpsSpecial_F" createVehicle _OpsCenterStart;
WR_Exp1 attachTo [WRTABLE_2b,[-0.1, 1.7, -0.18]];
WR_Exp1 setDir 90;

// Explosives - C4 ////////////////////////////////////////////
WR_Exp2 = "Box_NATO_Grenades_F" createVehicle _OpsCenterStart;
WR_Exp2 attachTo [WRTABLE_2b,[-0.5, 0.3, -0.18]];
WR_Exp2 setDir 20;

// Explosives - Large ////////////////////////////////////////
WR_Exp3 = "Box_IND_WpsSpecial_F" createVehicle _OpsCenterStart;
WR_Exp3 attachTo [WRTABLE_2b,[-1.56, -0.3, -0.18]];



//--------------------------------------------------------------------------------------





// Grenades - Throw
wH_2a = "groundWeaponHolder" createVehicle _OpsCenterStart; 
wH_2a attachTo [WRTABLE_2b,[-0.2,2,1.08]];   
wH_2a addItemCargoGlobal ["HandGrenade", 1];
[wH_2a,[0,0,-90]] call VQI_fnc_SetPitchBankYaw; // pitch, bank, yaw

wH_2b = "groundWeaponHolder" createVehicle _OpsCenterStart; 
wH_2b attachTo [WRTABLE_2b,[-0.15,2,1.08]];   
wH_2b addItemCargoGlobal ["HandGrenade", 1];
[wH_2b,[0,0,0]] call VQI_fnc_SetPitchBankYaw; // pitch, bank, yaw

wH_2c = "groundWeaponHolder" createVehicle _OpsCenterStart; 
wH_2c attachTo [WRTABLE_2b,[-0.2,2.1,1.08]];   
wH_2c addItemCargoGlobal ["HandGrenade", 1];
[wH_2c,[0,20,-90]] call VQI_fnc_SetPitchBankYaw; // pitch, bank, yaw

wH_2d = "groundWeaponHolder" createVehicle _OpsCenterStart; 
wH_2d attachTo [WRTABLE_2b,[-0.2,1.3,1.08]];   
wH_2d addItemCargoGlobal ["SmokeShellBlue", 1];
[wH_2d,[0,0,0]] call VQI_fnc_SetPitchBankYaw; // pitch, bank, yaw

wH_2e = "groundWeaponHolder" createVehicle _OpsCenterStart; 
wH_2e attachTo [WRTABLE_2b,[-0.2,0.1,1.08]];   
wH_2e addItemCargoGlobal ["3Rnd_HE_Grenade_shell", 1];
[wH_2e,[0,0,0]] call VQI_fnc_SetPitchBankYaw; // pitch, bank, yaw

wH_2f = "groundWeaponHolder" createVehicle _OpsCenterStart; 
wH_2f attachTo [WRTABLE_2b,[-0.4,0.1,1.08]];   
wH_2f addItemCargoGlobal ["3Rnd_HE_Grenade_shell", 1];
[wH_2f,[0,0,20]] call VQI_fnc_SetPitchBankYaw; // pitch, bank, yaw
//


// Explosives - Put
wH_2g = "groundWeaponHolder" createVehicle _OpsCenterStart; 
wH_2g attachTo [WRTABLE_2b,[-0.5,0.3,0.8]];   
wH_2g addItemCargoGlobal ["DemoCharge_Remote_Mag", 1];
[wH_2g,[0,0,180]] call VQI_fnc_SetPitchBankYaw; // pitch, bank, yaw

wH_2h = "groundWeaponHolder" createVehicle _OpsCenterStart; 
wH_2h attachTo [WRTABLE_2b,[-1.2,0.05,0.3]];   
wH_2h addItemCargoGlobal ["SatchelCharge_Remote_Mag", 1];
[wH_2h,[0,0,180]] call VQI_fnc_SetPitchBankYaw; // pitch, bank, yaw

wH_2i = "groundWeaponHolder" createVehicle _OpsCenterStart; 
wH_2i attachTo [WRTABLE_2b,[-0.4,2.3,0.3]];   
wH_2i addItemCargoGlobal ["ClaymoreDirectionalMine_Remote_Mag", 1];
[wH_2i,[0,0,180]] call VQI_fnc_SetPitchBankYaw; // pitch, bank, yaw

wH_2j = "groundWeaponHolder" createVehicle _OpsCenterStart; 
wH_2j attachTo [WRTABLE_2b,[-0.4,1.9,0.3]];   
wH_2j addItemCargoGlobal ["APERSTripMine_Wire_Mag", 1];
[wH_2j,[0,0,195]] call VQI_fnc_SetPitchBankYaw; // pitch, bank, yaw

wH_2k = "groundWeaponHolder" createVehicle _OpsCenterStart; 
wH_2k attachTo [WRTABLE_2b,[-0.45,2,0.67]];   
wH_2k addItemCargoGlobal ["APERSMine_Range_Mag", 1];

wH_2m = "groundWeaponHolder" createVehicle _OpsCenterStart; 
wH_2m attachTo [WRTABLE_2b,[-0.4,2.1,0.67]];   
wH_2m addItemCargoGlobal ["APERSMine_Range_Mag", 1];






