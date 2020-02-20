//
//
if (VQI_CORE_HINTS == 1) then { hint "startefx.sqf"; };
//sleep 1;


// Start Screen
if (VQI_CORE_STARTSCREEN == 1) then { 999 cutRsc ["WORLD_MAP_CORE_SPOOKWARCOM", "PLAIN"]; };



// Map/Location Dynamic Text EFX
if (VQI_CORE_MSG_ON == 1) then {
execVM "vqi_core\VQI-StartingOptions\StartEFX\vqi_core_startefx_starttext.sqf"; };














/////////////////////////////
/* NOTES:




*/