// Enemy AA Ack-Ack Batteries (low-altitude)
//
if (VQI_HINTS_HALO == 1) then { hint "ack_setup.sqf"; };
sleep 1;


private ["_mapSize","_mapHalf","_mapCent","_ackCount","_mkrACK","_sType","_aRange","_sTech","_sTrack","_posXYZ","_posBIS","_sPROB",
		"_marker","_markerB","_markerC","_markerD","_markerE","_markerF","_markerG","_markerH","_markerI","_ack"];

_mapSize = worldSize;
_mapHalf = _mapSize / 2;
_mapCent = [_mapHalf, _mapHalf, 0];


// How many AO's on Map
if (VQI_LEAP_ACK_NUM >= 0) then { 
	_ackCount = VQI_LEAP_ACK_NUM; 
} else { 
	VQI_LEAP_ACK_NUM = (VQI_LEAP_ACK_NUM * -1);		// convert to positive
	_ackCount = round (random (VQI_LEAP_ACK_NUM)); 	// randomize upTo -X
};


// defaults
_mkrACK = "mil_dot";
_aRange = 2000;		// 2 KM Range
_sTrack = 1;



if (VQI_HINTS_HALO == 1) then { hint format ["MapSize: %1 \n \n AA AO -- %2",_mapSize,_ackCount]; sleep 5;};

hint "- INTEL REPORT -";






// loop
for "_i" from 1 to _ackCount do {

	/*
	_sType = random 100;	// S.A.M Range	
	if ((_sType > 0)  && (_sType < 75)) then { _aRange = ([3,3] call BIS_fnc_randomInt) * 1000; }; 	// 75% - SAM -- Range 3km
	if ((_sType > 75) && (_sType < 95)) then { _aRange = ([4,6] call BIS_fnc_randomInt) * 1000; }; 	// 20% - SAM -- Range 4-6km
	if ((_sType > 95) && (_sType < 98)) then { _aRange = ([7,9] call BIS_fnc_randomInt) * 1000; }; 	// 03% - SAM -- Range 7-9km
	if ((_sType > 98) && (_sType < 99)) then { _aRange = 10000; };								// 01% - SAM -- Range 10km
	sleep 0.1;
	
	_sTech = random 100; 	// RADAR Tech
	if ((_sTech > 0 ) && (_sTech < 99)) then { _sTrack = ([1,10] call BIS_fnc_randomInt) * 10; }; 	// 99% - RADAR -- Technology
	sleep 0.1;			// TBD - 100% random tech
	*/
	

	//find & move out to random 95% of map + 360*, random location
	_posXYZ = [_mapCent, (random(_mapHalf*0.95)), random 360] call BIS_fnc_relPos;
	sleep 0.1;
	
	// [center, min, max, object, water-mode, gradient, shore, blacklist, default]
	_posBIS = [_posXYZ, 1, 5000, 10, 0, 0.5, 0] call BIS_fnc_findSafePos;
	sleep 0.5;
	
	
	// ACK System
	_ack = createVehicle ["B_SAM_System_01_F", _posBIS, [], 0, "NONE"];
	
	

	
	
	
	

	
	
	
	
	
	// trigger setup for AO Spawn System
	_trgAO = createTrigger ["EmptyDetector", _posBIS];			// type, location
	_trgAO setTriggerArea [_aRange, _aRange, 0, false, _aRange];	// x, y, angle, rectangle, Z
	_trgAO setTriggerActivation ["ANYPLAYER", "PRESENT", true];	// who, how, repeat on/off
	_trgAO setTriggerTimeout [2, 5, 10, true];					// min, ave, max, interupt
	_trgAO setTriggerStatements ["({_x in thisList} count (playableUnits + switchableUnits) > 0) && ((getPosVisual Player select 2) > 100)",	// 100 NOE, ANY SURFACE (land or sea)
							 "execVM 'vqi_halo\VQI-DemonDropper\Airspace\ACK\vqi_leap_ack_trigger.sqf' ",			// 
							 ""];																		//
	sleep 1;
	
	
	
	
	// Text Readout - ie  Ack
	//_txtRange = _aRange / 1000;
	//_txtTrack = _sTrack;
	
	
	// primary marker
	_nameAO = "markerACK0" + str _i;
	_marker = createMarker [_nameAO,_trgAO]; //
	_marker setMarkerType _mkrACK; 			//
	_marker setMarkerColor "ColorBLACK";
	_marker setMarkerText " ";
	_marker setMarkerAlpha (random 1) - 0.1;
	sleep 1;
	
	


	

hint "AO INTEL REPORT \n AA Gun \n \n Flak Range: 2 KM \n Fuse: 250m"; 

sleep 0.1;
};



sleep 1;
hint "- END OF REPORT -";

sleep 1;
execVM "vqi_halo\VQI-DemonDropper\Airspace\ACK\vqi_leap_ack_mkrs_data.sqf";






sleep 5;
ao_ack_done = true;

sleep 1;
if (VQI_HINTS_HALO == 1) then { hint "ack_setup.sqf -END-"; };

//////////////////////////
/* NOTES:



*/