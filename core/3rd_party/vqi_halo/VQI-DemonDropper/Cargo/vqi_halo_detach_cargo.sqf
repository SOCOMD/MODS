//
//

detach CARGO_PARACARGO;
CARGO_PARACARGO setVelocity [15 * (sin (getDir jumpV)), 15 * (cos (getDir jumpV)), 0];

sleep 1;
removeAllActions CARGO_PARACARGO; //work in MP?

////////////////////////////////////////
// Non-Steerable Parachute - Cargo Chute
waitUntil {(getPosATL CARGO_PARACARGO select 2) < 200};


CARGO_PARACHUTE = "B_parachute_02_F" createVehicle [0,0,0];
CARGO_PARACHUTE setPosATL (getPosATL CARGO_PARACARGO);
CARGO_PARACARGO attachTo [CARGO_PARACHUTE, [0,0,0]];



// Stupid Bouncing Crate?
waitUntil {((((position CARGO_PARACARGO) select 2) < 1) || (isNil "CARGO_PARACHUTE"))};
detach CARGO_PARACARGO;
CARGO_PARACARGO setVelocity [0,0,-5];

sleep 0.5;

CARGO_PARACARGO setPos [(position CARGO_PARACARGO) select 0, (position CARGO_PARACARGO) select 1, 1];
CARGO_PARACARGO setVelocity [0,0,0]; 

sleep 5;
CARGO_PARACARGO allowDamage true;




/////////////////////////////////////////////////////////
//------------------------------------------------------
// Locate/Find - Smoke/Chem/IR - User set minute Timer - Beacon
//sleep 120;
if (beaconTimer == 1)  then { sleep 60; };
if (beaconTimer == 10) then { sleep 600; };
if (beaconTimer == 20) then { sleep 1200; };
if (beaconTimer == 30) then { sleep 1800; };

if (!isNil "CARGO_BEACONRADAR") then {
	chemBLUE = "Chemlight_Blue" createVehicle (position CARGO_BEACONRADAR);
	chemBLUE attachTo [CARGO_BEACONRADAR, [0,0,0]];
};
if (!isNil "CARGO_BEACONRADAR") then {
	smokeBLUE1 = "SmokeShellBLUE" createVehicle (position CARGO_BEACONRADAR);
	smokeBLUE1 attachTo [CARGO_BEACONRADAR, [0,0,0]];
	sleep 90;
};
if (!isNil "CARGO_BEACONRADAR") then {
	smokeBLUE2 = "SmokeShellBLUE" createVehicle (position CARGO_BEACONRADAR);
	smokeBLUE2 attachTo [CARGO_BEACONRADAR, [0,0,0]];
	sleep 90;
};
if (!isNil "CARGO_BEACONRADAR") then {
	smokeBLUE3 = "SmokeShellBLUE" createVehicle (position CARGO_BEACONRADAR);
	smokeBLUE3 attachTo [CARGO_BEACONRADAR, [0,0,0]];
	sleep 90;
};
if (!isNil "CARGO_BEACONRADAR") then {
	smokeBLUE4 = "SmokeShellBLUE" createVehicle (position CARGO_BEACONRADAR);
	smokeBLUE4 attachTo [CARGO_BEACONRADAR, [0,0,0]];
	sleep 90;
};
if (!isNil "CARGO_BEACONRADAR") then {
	smokeBLUE5 = "SmokeShellBLUE" createVehicle (position CARGO_BEACONRADAR);
	smokeBLUE5 attachTo [CARGO_BEACONRADAR, [0,0,0]];
};







///////////////////
/* NOTES:


*/