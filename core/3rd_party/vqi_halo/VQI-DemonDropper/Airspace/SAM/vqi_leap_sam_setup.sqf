// Enemy Surface-to-Air Missile Systems
//
if (VQI_HINTS_HALO == 1) then { hint "sam_setup.sqf"; };
sleep 1;


private ["_mapSize","_mapHalf","_mapCent","_samCount","_mkrSAM","_sType","_sRange","_sTech","_sTrack","_posXYZ","_posBIS","_sPROB",
		"_marker","_markerB","_markerC","_markerD","_markerE","_markerF","_markerG","_markerH","_markerI","_sam"];

_mapSize = worldSize;
_mapHalf = _mapSize / 2;
_mapCent = [_mapHalf, _mapHalf, 0];


// How many AO's on Map
if (VQI_LEAP_SAM_NUM >= 0) then { 
	_samCount = VQI_LEAP_SAM_NUM; 
} else { 
	VQI_LEAP_SAM_NUM = (VQI_LEAP_SAM_NUM * -1);		// convert to positive
	_samCount = round (random (VQI_LEAP_SAM_NUM)); 	// randomize upTo -X
};


// defaults
_mkrSAM = "mil_triangle";
_sRange = 3000;
_sTrack = 1;



if (VQI_HINTS_HALO == 1) then { hint format ["MapSize: %1 \n \n SAM AO -- %2",_mapSize,_samCount]; sleep 5;};

hint "- INTEL REPORT -";






// loop
for "_i" from 1 to _samCount do {


	_sType = random 100;	// S.A.M Range	
	if ((_sType > 0)  && (_sType < 75)) then { _sRange = ([3,3] call BIS_fnc_randomInt) * 1000; }; 	// 75% - SAM -- Range 3km
	if ((_sType > 75) && (_sType < 95)) then { _sRange = ([4,6] call BIS_fnc_randomInt) * 1000; }; 	// 20% - SAM -- Range 4-6km
	if ((_sType > 95) && (_sType < 98)) then { _sRange = ([7,9] call BIS_fnc_randomInt) * 1000; }; 	// 03% - SAM -- Range 7-9km
	if ((_sType > 98) && (_sType < 99)) then { _sRange = 10000; };								// 01% - SAM -- Range 10km
	sleep 0.1;
	
	_sTech = random 100; 	// RADAR Tech
	if ((_sTech > 0 ) && (_sTech < 99)) then { _sTrack = ([1,10] call BIS_fnc_randomInt) * 10; }; 	// 99% - RADAR -- Technology
	sleep 0.1;			// TBD - 100% random tech
	
	

	//find & move out to random 95% of map + 360*, random location
	_posXYZ = [_mapCent, (random(_mapHalf*0.95)), random 360] call BIS_fnc_relPos;
	sleep 0.1;
	
	// [center, min, max, object, water-mode, gradient, shore, blacklist, default]
	_posBIS = [_posXYZ, 1, 5000, 10, 0, 0.5, 0] call BIS_fnc_findSafePos;
	sleep 0.5;
	
	
	// SAM System
	_sam = createVehicle ["B_SAM_System_02_F", _posBIS, [], 0, "NONE"];
	
	
	// POOK SAM MOD
	//if (isClass(configFile >> "CfgPatches" >> "pook_SAM")) then {
	//_sam = createVehicle ["pook_sa2_static_root_IND", _posBIS, [], 0, "NONE"]; };
	
	// SAM Team
	//if (random 100 < VQI_HALO_EnemySAM_TEAMp) then {
	
	//	if (VQI_HALO_EnemySAM_TEAM == 1) then { [_posBIS, EAST, (random 5)] call BIS_fnc_spawnGroup; };
	//	if (VQI_HALO_EnemySAM_TEAM == 2) then { [_posBIS, INDEPENDENT, (random 5)] call BIS_fnc_spawnGroup; };
	//};
	
	// trigger setup for AO Spawn System
	_trgAO = createTrigger ["EmptyDetector", _posBIS];			// type, location
	_trgAO setTriggerArea [_sRange, _sRange, 0, false, _sRange];	// x, y, angle, rectangle, Z
	_trgAO setTriggerActivation ["ANY", "PRESENT", true];			// who, how, repeat on/off
	_trgAO setTriggerTimeout [1, 2, 3, true];					// min, ave, max, interupt
	_trgAO setTriggerStatements ["({_x in thisList} count (playableUnits + switchableUnits) > 0) && ((getPosATL player select 2) > 333)",	// 333 NOE
							 format["[%1] execVM ""vqi_halo\VQI-DemonDropper\Airspace\SAM\vqi_leap_sam_trigger.sqf""",_sTrack],			// Technology 0-100%
							 ""];																							//
	sleep 1;
	
	
	
	
	// Text Readout - ie  S3.80
	_txtRange = _sRange / 1000;
	_txtTrack = _sTrack;
	
	
	// primary marker
	_nameAO = "markerSAM0" + str _i;
	_marker = createMarker [_nameAO,_trgAO]; //
	_marker setMarkerType _mkrSAM; //
	_marker setMarkerColor "ColorRED";
	_marker setMarkertext format ["S%1.%2",_txtRange,_txtTrack];
	_marker setMarkerAlpha 0.8;
	sleep 1;
	
	
	// Marker Details
	//if (_rDataX == 1000) then {_mkrGRP = "group_1"; _txtDataX = "?????"; 	_mkrW = 1.2; _mkrH = 1.2; };
	
	
	// Set S.A.M. RADAR Rings ////////////////////
	if (_sRange >= 3000) then {
		_nameAO2 = "markerSAM1" + str _i;
		_markerB = createMarker [_nameAO2,_trgAO]; //
		_markerB setMarkerShape "ELLIPSE";
		_markerB setMarkerBrush "Border";
		_markerB setMarkerColor "ColorBLACK";
		_markerB setMarkerSize [3000,3000];
		//_markerB setMarkerText " SAM";
		_markerB setMarkerAlpha (_sTrack / 100);
	};
	
	if (_sRange >= 4000) then {
		_nameAO2 = "markerSAM2" + str _i;
		_markerC = createMarker [_nameAO2,_trgAO]; //
		_markerC setMarkerShape "ELLIPSE";
		_markerC setMarkerBrush "Border";
		_markerC setMarkerColor "ColorBLACK";
		_markerC setMarkerSize [4000,4000];
		//_mkr1 setMarkerText " SAM";
		_markerC setMarkerAlpha (_sTrack / 100);
	};
	
	if (_sRange >= 5000) then {
		_nameAO2 = "markerSAM3" + str _i;
		_markerD = createMarker [_nameAO2,_trgAO]; //
		_markerD setMarkerShape "ELLIPSE";
		_markerD setMarkerBrush "Border";
		_markerD setMarkerColor "ColorBLACK";
		_markerD setMarkerSize [5000,5000];
		//_mkr1 setMarkerText " SAM";
		_markerD setMarkerAlpha (_sTrack / 100);
	};
	
	if (_sRange >= 6000) then {
		_nameAO2 = "markerSAM4" + str _i;
		_markerE = createMarker [_nameAO2,_trgAO]; //
		_markerE setMarkerShape "ELLIPSE";
		_markerE setMarkerBrush "Border";
		_markerE setMarkerColor "ColorBLACK";
		_markerE setMarkerSize [6000,6000];
		//_mkr1 setMarkerText " SAM";
		_markerE setMarkerAlpha (_sTrack / 100);
	};
	
	if (_sRange >= 7000) then {
		_nameAO2 = "markerSAM5" + str _i;
		_markerF = createMarker [_nameAO2,_trgAO]; //
		_markerF setMarkerShape "ELLIPSE";
		_markerF setMarkerBrush "Border";
		_markerF setMarkerColor "ColorBLACK";
		_markerF setMarkerSize [7000,7000];
		//_mkr1 setMarkerText " SAM";
		_markerF setMarkerAlpha (_sTrack / 100);
	};
	
	if (_sRange >= 8000) then {
		_nameAO2 = "markerSAM6" + str _i;
		_markerG = createMarker [_nameAO2,_trgAO]; //
		_markerG setMarkerShape "ELLIPSE";
		_markerG setMarkerBrush "Border";
		_markerG setMarkerColor "ColorBLACK";
		_markerG setMarkerSize [8000,8000];
		//_mkr1 setMarkerText " SAM";
		_markerG setMarkerAlpha (_sTrack / 100);
	};
	
	if (_sRange >= 9000) then {
		_nameAO2 = "markerSAM7" + str _i;
		_markerH = createMarker [_nameAO2,_trgAO]; //
		_markerH setMarkerShape "ELLIPSE";
		_markerH setMarkerBrush "Border";
		_markerH setMarkerColor "ColorBLACK";
		_markerH setMarkerSize [9000,9000];
		//_mkr1 setMarkerText " SAM";
		_markerH setMarkerAlpha (_sTrack / 100);
	};
	
	if (_sRange == 10000) then {
		_nameAO2 = "markerSAM8" + str _i;
		_markerI = createMarker [_nameAO2,_trgAO]; //
		_markerI setMarkerShape "ELLIPSE";
		_markerI setMarkerBrush "Border";
		_markerI setMarkerColor "ColorBLACK";
		_markerI setMarkerSize [10000,10000];
		//_mkr1 setMarkerText " SAM";
		_markerI setMarkerAlpha (_sTrack / 100);
	};


	

hint (format ["AO INTEL REPORT \n S.A.M. \n \n SAM Range: %1 KM \n Guidance: %2",_txtRange,_txtTrack]+"%"); 

sleep 0.1;
};



sleep 1;
hint "- END OF REPORT -";

sleep 1;
execVM "vqi_halo\VQI-DemonDropper\Airspace\SAM\vqi_leap_sam_mkrs_data.sqf";






sleep 5;
ao_sam_done = true;

sleep 1;
if (VQI_HINTS_HALO == 1) then { hint "sam_setup.sqf -END-"; };

//////////////////////////
/* NOTES:



*/