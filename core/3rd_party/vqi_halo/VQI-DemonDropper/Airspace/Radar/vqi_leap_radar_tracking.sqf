// RADAR SYSTEMS
//
if (VQI_HINTS_HALO == 1) then { hint "radar_trigger.sqf"; };
sleep 1;


private ["_RADAR"];

_RADAR = _this select 0;




if (VQI_HINTS_HALO == 1) then { hint format ["RADAR TECH: %1",_RADAR]; sleep 3; };



// Not sure REINFORCEMENTS can find player in air...
waitUntil { sleep 5; ((getposATL player select 2) < 10); };

if (random 100 < _RADAR) then {
	
	[player] execVM "vqi_halo\VQI-DemonDropper\Airspace\Radar\QRF\vqi_leap_radar_qrf.sqf";
	sleep 1; if (VQI_HINTS_HALO == 1) then { hint "RADAR COMMANDER: \n \n SCRAMBLE QRF TEAM!"; };

} else {

	if (VQI_HINTS_HALO == 1) then { sleep 3; hint "RADAR COMMANDER: \n \n \n Probably Nothing... \n \n - No Response -";  };
};






/////////////////////
/* NOTES:



*/