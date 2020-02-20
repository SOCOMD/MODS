// Various Effects, ScreenShots, Audio, Camera Work, etc
// W-I-P


private ["_heli","_cam"];   
  
  
// select 0 needed
_heli = coreHELI select 0;
//_camP = _heli modelToWorld [0,800,0];


// Fade In... 
cutText ["", "BLACK IN", 5];

  
// ECHO ONE Helicopter -- L/R - F/B - Z  
_cam = "camera" camCreate (_heli modelToWorld [0,800,-20]);   
_cam camSetTarget _heli;   
_cam cameraEffect ["internal","BACK"];   
_cam camCommit 0;   
   
_cam camSetPos (_heli modelToWorld [0,-100,-20]);   
_cam camCommit 15;   
   
   
  
waitUntil { camCommitted _cam; }; 
 
// Fade In... 
cutText ["", "BLACK IN", 3];








// Terminate Camera
_cam cameraEffect ["terminate","BACK"];
cutText ["", "BLACK IN", 5];









//////////////////
/* NOTES:



*/