//
//
if (VQI_CORE_HINTS == 1) then { hint "BlackOps.sqf"; };
sleep 1;

/*
deleteVehicle VQI_SOCOM_DESK1;
deleteVehicle VQI_SOCOM_1;
deleteVehicle TableDesk1;
deleteVehicle TableDesk2;
deleteVehicle WaterCooler2;
deleteVehicle OfficeCabinet1;
deleteVehicle SuitCase1;
sleep 1;
*/

private ["_OpsCenterStart"];

_OpsCenterStart = [-100,-100,0];
_startX = [0,0,0];

//-------------------------------------------------------------------------
//SOCOM Operations
VQI_SOCOM_DESK1 = "Land_TableDesk_F" createVehicle _OpsCenterStart;
VQI_SOCOM_DESK1 attachTo [OpsCenter,[-13.8,3,-2.5]];
VQI_SOCOM_DESK1 setDir -90;

VQI_SOCOM_LAPTOP = "Land_Laptop_Unfolded_F" createVehicle _OpsCenterStart;
VQI_SOCOM_LAPTOP attachTo [VQI_SOCOM_DESK1,[0,0,0.56]];

//sleep 2;
//execVM "\vqi_socom\VQI-SOCOM\vqi_socom_init.sqf";	NOT NEEDED if Module

// SOCOM -----------------------------------------------
TableDesk1 = "Land_TableDesk_F" createVehicle _startX;
TableDesk1 attachTo [OpsCenter,[-16.15,0.05,-2.45]];

TableDesk2 = "Land_TableDesk_F" createVehicle _startX;
TableDesk2 attachTo [OpsCenter,[-16.7684,5,-2.45]]; //90
TableDesk2 setDir 90;

WaterCooler2 = "Land_WaterCooler_01_old_F" createVehicle _startX;
WaterCooler2 attachTo [OpsCenter,[-16.9231,2,-2.2]]; //270
WaterCooler2 setDir 270;

OfficeCabinet1 = "Land_OfficeCabinet_01_F" createVehicle _startX;
OfficeCabinet1 attachTo [OpsCenter,[-16.9573,2.7,-2.1]]; //270 
OfficeCabinet1 setDir 270;

SuitCase1 = "Land_Suitcase_F" createVehicle _startX;
SuitCase1 attachTo [OpsCenter,[-17.0149,3.8,-2.63]]; //55
SuitCase1 setDir 55;
//-------------------------------------------------------




/* =======================================================================================
NOTES:


*/