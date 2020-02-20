//
//
if (VQI_CORE_HINTS == 1) then { hint "WeaponsRoom_Center.sqf"; };
sleep 1;

private ["_OpsCenterStart"];

_OpsCenterStart = [-100,-100,100];




//---------------------------------------------------------
// Launchers - Crate //////////////////////////////////////
WRCRATER = "B_supplyCrate_F" createVehicle _OpsCenterStart;
WRCRATER attachTo [OpsCenter,[13.2, 8, -2]]; //
WRCRATER allowDamage false;
sleep 1;

// Misc Equipment? ////////////////////////////////////////
WRCRATEC = "B_supplyCrate_F" createVehicle _OpsCenterStart;
WRCRATEC attachTo [OpsCenter,[10.6, 8, -2]]; //
WRCRATEC allowDamage false;
sleep 1;




//---------------------------------------------------------------
wH_L0 = "groundWeaponHolder" createVehicle _OpsCenterStart; 
wH_L0 attachTo [WRCRATER,[0, -0.7, -0.33]];   
wH_L0 addWeaponCargoGlobal ["launch_NLAW_F", 1];
[wH_L0,[90,90,90]] call VQI_fnc_SetPitchBankYaw; // pitch, bank, yaw
sleep 1;
wH_R0 = "groundWeaponHolder" createVehicle _OpsCenterStart; 
wH_R0 attachTo [WRCRATER,[1.4, 0, -0.01]];   
wH_R0 addMagazineCargoGlobal ["NLAW_F", 1];
[wH_R0,[90,2,180]] call VQI_fnc_SetPitchBankYaw; // pitch, bank, yaw
sleep 1;
wH_R1 = "groundWeaponHolder" createVehicle _OpsCenterStart; 
wH_R1 attachTo [WRCRATER,[0.4, 0.1, 0.16]];   
wH_R1 addMagazineCargoGlobal ["Titan_AP", 1];
[wH_R1,[90,99,70]] call VQI_fnc_SetPitchBankYaw; // pitch, bank, yaw
sleep 1;



//--------------------------------------------------------------------------------------------
