//
//
//hint "radar_analyze.sqf";
sleep 1;


_RADAR = _this select 0;
trgDAR = 0;


// ABOVE SEA LEVEL 200m (fictional RADAR - 650')
if ((getPosASL player select 2) > 200) then {


	// RADAR Detect - Free Fall...		QRF: N
	if ("B_Parachute" == Backpack player) exitWith {  };		// C-130 okay to PASS OVER?


	// RADAR Detect - Parachute			QRF: Y
	if (animationState player == "para_pilot") exitWith { [_RADAR] execVM "vqi_halo\VQI-DemonDropper\Airspace\Radar\vqi_leap_radar_tracking.sqf"; };

	
	// RADAR Detect - Vehicle			QRF: Y
	if (vehicle player != player) then { [_RADAR] execVM "vqi_halo\VQI-DemonDropper\Airspace\Radar\vqi_leap_radar_tracking.sqf"; };
};
sleep 10;
trgDAR = 1;



////////////
/* NOTES:


*/