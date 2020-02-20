// Enemy Airspace - Radar, SAMs, etc
//
if (VQI_HINTS_HALO == 1) then { hint "airspace.sqf"; };
sleep 1;
aoLEAP = true;

if (!isServer) exitWith { };
sleep 30;


// Mod check...
if (!isNil "aoSCAR") then { waitUntil { sleep 2; !isNil "scar_ao_done"}; };


//openMap true;
if ((VQI_LEAP_EnemySAM == 1) || (VQI_LEAP_EnemyRAD == 1) || (VQI_LEAP_EnemyACK == 1)) then { hint "- INTEL REPORT - \n Decrypting L.E.A.P Feed \n \n - Stand By -"; };
sleep 10;



// Areas-of-Operation
if (VQI_LEAP_EnemyACK == 1) then { execVM "vqi_halo\VQI-DemonDropper\Airspace\ACK\vqi_leap_ack_setup.sqf"; waitUntil {sleep 2; !isNil "ao_ack_done"}; };		// ACK
if (VQI_LEAP_EnemySAM == 1) then { execVM "vqi_halo\VQI-DemonDropper\Airspace\SAM\vqi_leap_sam_setup.sqf"; waitUntil {sleep 2; !isNil "ao_sam_done"}; };		// SAMs
if (VQI_LEAP_EnemyRAD == 1) then { execVM "vqi_halo\VQI-DemonDropper\Airspace\Radar\vqi_leap_radar_setup.sqf"; waitUntil {sleep 2; !isNil "ao_rad_done"}; };	// RADAR



sleep 1;
leap_ao_done = true;
///////////////////////
/* NOTES:



*/