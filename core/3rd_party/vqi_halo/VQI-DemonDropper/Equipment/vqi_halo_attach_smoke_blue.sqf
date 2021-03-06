// Smoke Marker to Left Ankle
// Track/Visual Option.......
if (VQI_HINTS_HALO == 1) then { hint "attach_smoke_blue.sqf"; };
sleep 1;



private ["_smokeBlue"];


	_smokeBlue = "SmokeShellBlue" createVehicle (position player); 
	_smokeBlue attachTo [vehicle player,[-0.05,-0.09,0.1],"lankle"];
