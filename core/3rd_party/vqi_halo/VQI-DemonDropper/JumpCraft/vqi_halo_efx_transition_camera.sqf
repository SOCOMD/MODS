// Various Effects, ScreenShots, Audio, Camera Work, etc
// W-I-P


private ["_unit","_cam"]; 

_unit = _this select 0;
 
 
 
 
// XC-130 Nightmare -- L/R - F/B - Z 
_cam = "camera" camCreate [(position VQI_HALO_JUMPCRAFT select 0) +1, (position VQI_HALO_JUMPCRAFT select 1) +200, (position VQI_HALO_JUMPCRAFT select 2) +30];  
_cam camSetTarget VQI_HALO_JUMPCRAFT;  
_cam cameraEffect ["internal","BACK"];  
_cam camCommit 0;  
  
_cam camSetPos [(position VQI_HALO_JUMPCRAFT select 0) -20, (position VQI_HALO_JUMPCRAFT select 1) -40, (position VQI_HALO_JUMPCRAFT select 2) -10];  
_cam camCommit 15;  
  
  
 
 
waitUntil { camCommitted _cam; };

// Black
cutText ["", "BLACK", 3];







// HALO System
if (flightHALO == 1) then { [_unit] execVM "vqi_halo\VQI-DemonDropper\JumpCraft\HALO\vqi_halo_transition_halo.sqf"; };
// PARA System

// Terminate Camera
_cam cameraEffect ["terminate","BACK"];
cutText ["", "BLACK IN", 10];















//////////////////
/* NOTES:



*/