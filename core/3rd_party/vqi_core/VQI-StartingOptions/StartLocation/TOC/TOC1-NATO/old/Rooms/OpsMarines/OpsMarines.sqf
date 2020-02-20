//
//
if (VQI_CORE_HINTS == 1) then { hint "OpsMarines.sqf"; };
sleep 1;

/*
deleteVehicle VQI_GROUND_DESK1;
deleteVehicle VQI_GROUND_LAPTOP1;
deleteVehicle PaperBox1;
deleteVehicle TargetHuman1;
sleep 1;
*/


private ["_OpsCenterStart"];

_OpsCenterStart = [-100,-100,0];
_startX = [0,0,0];


//-----------------------------------------------------------------------------
//Ground Operations
VQI_GROUND_DESK1 = "Land_TableDesk_F" createVehicle _OpsCenterStart;
VQI_GROUND_DESK1 attachTo [OpsCenter,[-15,11,-2.5]];
VQI_GROUND_DESK1 setDir 180;

VQI_GROUND_LAPTOP1 = "Land_Laptop_Unfolded_F" createVehicle _OpsCenterStart;
VQI_GROUND_LAPTOP1 attachTo [VQI_GROUND_DESK1,[0,0,0.56]];



// USMC -------------------------------------------------
PaperBox1 = "Land_PaperBox_closed_F" createVehicle _startX;
PaperBox1 attachTo [OpsCenter,[-16.4,6.8,-2.23]];

TargetHuman1 = "TargetBootcampHumanSimple_F" createVehicle _startX;
TargetHuman1 attachTo [OpsCenter,[-16.7942,11.2,-2.02]]; 
//-------------------------------------------------------






