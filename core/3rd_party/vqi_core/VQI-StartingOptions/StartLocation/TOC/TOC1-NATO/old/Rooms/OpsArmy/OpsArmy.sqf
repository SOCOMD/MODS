//
//
if (VQI_CORE_HINTS == 1) then { hint "OpsArmy.sqf"; };
sleep 1;

/*
deleteVehicle VQI_HELI_DESK1;
deleteVehicle VQI_HELI_LAPTOP1;
sleep 1;
*/


private ["_OpsCenterStart"];

_OpsCenterStart = [-100,-100,0];



//-----------------------------------------------------------------------------
//Helicopter Operations
VQI_HELI_DESK1 = "Land_TableDesk_F" createVehicle _OpsCenterStart;
VQI_HELI_DESK1 attachTo [OpsCenter,[-10,11,-2.5]];
VQI_HELI_DESK1 setDir 180;

VQI_HELI_LAPTOP1 = "Land_Laptop_Unfolded_F" createVehicle _OpsCenterStart;
VQI_HELI_LAPTOP1 attachTo [VQI_HELI_DESK1,[0,0,0.56]];