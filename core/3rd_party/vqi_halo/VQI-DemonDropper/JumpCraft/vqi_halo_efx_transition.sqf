// Various Effects, ScreenShots, Audio, Camera Work, etc
// W-I-P

private ["_unit"]; 

_unit = _this select 0;


// Image
//disableSerialization; // What the heck does this do again?
//999 cutRsc ["WORLD_MAP_1", "PLAIN"]; // Graphic


// Fade-In
cutText ["", "BLACK IN", 10];

// Audio EFX
if (VQI_HALO_T_AUDIO == 1) then { playSound "ns_intro"; };











// Camera FlyBy
[_unit] execVM "vqi_halo\VQI-DemonDropper\JumpCraft\vqi_halo_efx_transition_camera.sqf";

// Text
if (VQI_LEAP_MSG_ON == 1) then { execVM "vqi_halo\VQI-DemonDropper\JumpCraft\vqi_halo_efx_transition_text.sqf"; };











///////////////
/* NOTES:



*/