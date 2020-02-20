//
//

if (!isNil "CARGO_PARACARGO") then { deleteVehicle CARGO_PARACARGO; };
if (!isNil "CARGO_PARACHUTE") then { deleteVehicle CARGO_PARACHUTE; };
if (!isNil "CARGO_BEACONRADAR") then { deleteVehicle CARGO_BEACONRADAR; };
sleep 1;
LoadMaster SideChat "No problem! I'll take care it."; sleep 2;
LoadMaster SideChat "...And don't forget to set the Beacon Timer if needed.";


// Create the Cargo
// CARGO_HALOCRATE = "B_CargoNet_01_ammo_F" createVehicle position VQIHALO2;
CARGO_PARACARGO = "B_Boat_Transport_01_F" createVehicle position VQI_HALO_JUMPCRAFT;
CARGO_PARACARGO attachTo [VQI_HALO_JUMPCRAFT,[0.5, 3, -3.3]];
CARGO_PARACARGO allowDamage false;
publicVariable "CARGO_PARACARGO";

sleep 1; // Menu Options
[[CARGO_PARACARGO, ["CARGO - UNLOCK/DETACH", "execVM 'vqi_halo\VQI-DemonDropper\Cargo\vqi_halo_detach_cargo.sqf'; [CARGO_PARACARGO, 1]"]], "addAction", true, true] call BIS_fnc_MP;
sleep 5;


// Create Beacon/Smoke/Locator
CARGO_BEACONRADAR = "Land_GasCanister_F" createVehicle position CARGO_PARACARGO;
CARGO_BEACONRADAR attachTo [CARGO_PARACARGO,[0, 2.35, -1]];
publicVariable "CARGO_BEACONRADAR";



beaconTimer = 0;
publicVariable "beaconTimer";

sleep 1; // Menu Options
[[CARGO_BEACONRADAR, ["BEACON/LIGHT/SMOKE - Timer: OFF", "missionNamespace setVariable ['beaconTimer', 0]; [CARGO_BEACONRADAR, 1]"]], "addAction", true, true] call BIS_fnc_MP;
[[CARGO_BEACONRADAR, ["BEACON/LIGHT/SMOKE - Timer: 1 min", "missionNamespace setVariable ['beaconTimer', 1]; [CARGO_BEACONRADAR, 2]"]], "addAction", true, true] call BIS_fnc_MP;
[[CARGO_BEACONRADAR, ["BEACON/LIGHT/SMOKE - Timer: 10min", "missionNamespace setVariable ['beaconTimer', 10]; [CARGO_BEACONRADAR, 3]"]], "addAction", true, true] call BIS_fnc_MP;
[[CARGO_BEACONRADAR, ["BEACON/LIGHT/SMOKE - Timer: 20min", "missionNamespace setVariable ['beaconTimer', 20]; [CARGO_BEACONRADAR, 4]"]], "addAction", true, true] call BIS_fnc_MP;
[[CARGO_BEACONRADAR, ["BEACON/LIGHT/SMOKE - Timer: 30min", "missionNamespace setVariable ['beaconTimer', 30]; [CARGO_BEACONRADAR, 5]"]], "addAction", true, true] call BIS_fnc_MP;
[[CARGO_BEACONRADAR, ["BEACON/LIGHT/SMOKE - REMOVE/OFF", "deleteVehicle CARGO_BEACONRADAR; [CARGO_BEACONRADAR, 6]"]], "addAction", true, true] call BIS_fnc_MP;


/////////////////////
/* NOTES:


*/