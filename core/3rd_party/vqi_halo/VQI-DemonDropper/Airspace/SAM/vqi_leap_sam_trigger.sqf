// Simulate S.A.M.s - Proximity Fuses
//
if (VQI_HINTS_HALO == 1) then { hint "sam_trigger.sqf"; };
sleep 1;


private ["_mapSize","_mapHalf","_mapCent","_pDist","_posX","_posY","_posZ","_BUK1","_RADAR","_GUIDE","_mLaunched"];

_RADAR = _this select 0; // SAM Technology 0-100%
_GUIDE = 1000;

_mapSize = worldSize;
_mapHalf = _mapSize / 2;
_mapCent = [_mapHalf, _mapHalf, 0];


_pDist = player distance VQI_HALO_JUMPCRAFT;








if (_pDist < 50) then {

	hint "- ALERT - \n \n INCOMING S.A.M. \n \n -ALERT-";



	if (VQI_HINTS_HALO == 1) then { hint format ["RADAR TECH: %1",_RADAR]; sleep 3; };

	// HALO  vs  PARA (2x lethal) - RADAR Guidance Technology being used
	if ( _RADAR == 100) then { if (flightHALO == 1) then { _GUIDE = 950; } else { _GUIDE = 975; }; };	// best system - 100%
	if ( _RADAR == 90 ) then { if (flightHALO == 1) then { _GUIDE = 900; } else { _GUIDE = 950; }; };
	if ( _RADAR == 80 ) then { if (flightHALO == 1) then { _GUIDE = 800; } else { _GUIDE = 900; }; };
	if ( _RADAR == 70 ) then { if (flightHALO == 1) then { _GUIDE = 700; } else { _GUIDE = 850; }; };
	if ( _RADAR == 60 ) then { if (flightHALO == 1) then { _GUIDE = 600; } else { _GUIDE = 800; }; };
	if ( _RADAR == 50 ) then { if (flightHALO == 1) then { _GUIDE = 500; } else { _GUIDE = 750; }; };
	if ( _RADAR == 40 ) then { if (flightHALO == 1) then { _GUIDE = 400; } else { _GUIDE = 700; }; };
	if ( _RADAR == 30 ) then { if (flightHALO == 1) then { _GUIDE = 300; } else { _GUIDE = 650; }; };
	if ( _RADAR == 20 ) then { if (flightHALO == 1) then { _GUIDE = 200; } else { _GUIDE = 600; }; };
	if ( _RADAR == 10 ) then { if (flightHALO == 1) then { _GUIDE = 100; } else { _GUIDE = 550; }; };	// worst system - 10%

	SAMdistMax = 1000 - _GUIDE; 		// Guidance Accuracy
	_mLaunched = 10 + (random 20);		// Missiles Launched

	for "_i" from 1 to _mLaunched do {

		_posX = (random SAMdistMax) - (random SAMdistMax);
		_posY = (random SAMdistMax) - (random SAMdistMax);
		_posZ = (random SAMdistMax) - (random SAMdistMax);

		// RGO Grenade, C4 Explosive, Satchel Charge, 155mm Arty Shell
		_BUK1 = "SatchelCharge_Remote_Ammo_Scripted" createVehicle _mapCent;
		_BUK1 attachTo [VQI_HALO_JUMPCRAFT,[_posX,_posY,_posZ]];  sleep 0.2;
		_BUK1 setDamage 1;

		sleep (random 10);
	};







	sleep 1;
	if (VQI_HINTS_HALO == 1) then { hint "sam_trigger -END-.sqf"; };
};




/////////////////////
/* NOTES:



*/