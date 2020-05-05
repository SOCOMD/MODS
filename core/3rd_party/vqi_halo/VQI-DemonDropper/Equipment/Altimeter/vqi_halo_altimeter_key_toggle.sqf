//
//

if (AltimeterKeyToggle) then {
	terminate JUMPBUDDY1; 2 cutText ["","PLAIN"]; sleep 0.2;
	missionNamespace setVariable ["AltimeterKeyToggle", false];
} else {
	JUMPBUDDY1 = [_this] execVM "\vqi_halo\VQI-DemonDropper\Equipment\Altimeter\vqi_halo_altimeter.sqf";
};