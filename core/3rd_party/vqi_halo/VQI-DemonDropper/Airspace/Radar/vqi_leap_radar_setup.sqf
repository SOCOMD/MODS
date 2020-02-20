// Enemy RADAR Air-Defence & Surveillance System
// Scrambles REINFORCEMENTS Team to investigate
if (VQI_HINTS_HALO == 1) then { hint "radar_setup.sqf"; };
sleep 1;


private ["_mapSize","_mapHalf","_mapCent","_aoCount","_mkrRAD","_rType","_rTech","_rRange","_rTrack","_txtRange","_txtTrack","_marker","_markerA","_markerB","_markerC",
		"_markerD","_markerE","_markerF","_markerG","_markerH","_markerI","_markerJ","_markerK","_markerL","_markerM","_markerN","_markerO","_markerP","_markerQ","_markerR",
		"_posXYZ","_posBIS","_nameAO","_nameAO2","_nameAO3","_nameAO4","_nameAO5","_nameAO6","_nameAO7","_nameAO8","_nameAO9","_nameAO10","_nameAO11","_nameAO12","_nameAO13",
		"_nameAO14","_nameAO15","_nameAO16","_nameAO17","_nameAO18","_radar"];

		

_mapSize = worldSize;
_mapHalf = _mapSize / 2;
_mapCent = [_mapHalf, _mapHalf, 0];


// How many AO's on Map - Set or Scale
if (VQI_LEAP_RAD_NUM >= 0) then { 
	_aoCount = VQI_LEAP_RAD_NUM; 
} else { 
	VQI_LEAP_RAD_NUM = (VQI_LEAP_RAD_NUM * -1);		// convert to positive
	_aoCount = round (random (VQI_LEAP_RAD_NUM)); 		// randomize upTo -X
};


// Defaults
_mkrRAD = "mil_box";
_rRange = 3000;
_rTrack = 1;
_radar = 0;


if (VQI_HINTS_HALO == 1) then { hint format ["MapSize: %1 \n \n RADAR \n AO -- %2",_mapSize,_aoCount]; sleep 5;};

hint "- INTEL REPORT -";






// loop
for "_i" from 1 to _aoCount do {


	_rType = random 100;	// RADAR Range
	if ((_rType > 0)  && (_rType < 70)) then { _rRange = ([3,3] call BIS_fnc_randomInt) * 1000; }; 	// 70% - RADAR -- Range 3km
	if ((_rType > 70) && (_rType < 90)) then { _rRange = ([4,6] call BIS_fnc_randomInt) * 1000; }; 	// 20% - RADAR -- Range 4-6km
	if ((_rType > 90) && (_rType < 98)) then { _rRange = ([7,9] call BIS_fnc_randomInt) * 1000; }; 	//  8% - RADAR -- Range 7-9km
	if ((_rType > 98) && (_rType < 99)) then { _rRange = 10000; };								//  1% - RADAR -- Range 10km
	sleep 0.1;
	
	_rTech = random 100; 	// RADAR Tech
	if ((_rTech > 0 ) && (_rTech < 99)) then { _rTrack = ([1,10] call BIS_fnc_randomInt) * 10; }; 	// 99% - RADAR -- Technology
	sleep 0.1;			// TBD - 100% random tech
	


	// find & move out to random 95% of map + 360*, random location
	_posXYZ = [_mapCent, (random(_mapHalf*0.95)), random 360] call BIS_fnc_relPos;
	sleep 0.1;
	
	// [center, min, max, object, water-mode, gradient, shore, blacklist, default]
	_posBIS = [_posXYZ, 1, 2000, 5, 0, 0.5, 0] call BIS_fnc_findSafePos;
	sleep 0.1;
	
	
	
	
	// POOK SAM MOD
	//if (isClass(configFile >> "CfgPatches" >> "pook_SAM")) then {
	//_radar = createVehicle ["pook_76n6_rTechCHDKZ", _posBIS, [], 0, "NONE"]; };	
	
	// RADAR Array Antenna
	_radar = createVehicle ["Land_TTowerSmall_2_F", _posBIS, [], 0, "NONE"]; sleep 1;
	{ _radar addAction ["Inspect Array","[player] execVM 'vqi_halo\VQI-DemonDropper\Airspace\Radar\radar_node.sqf'"]; } remoteExec ["bis_fnc_call",0]; sleep 0.1;				//
	//[[_radar, ["Inspect Array", "[player] execVM 'vqi_halo\VQI-DemonDropper\Airspace\Radar\radar_node.sqf'; [_radar, 1]"]], "addAction", true, true] call BIS_fnc_MP;			//
	sleep 0.1;
	
	
	trgDAR = 1;
	
	// trigger setup for RADAR System
	_trgAO = createTrigger ["EmptyDetector", _posBIS];			// type, location
	_trgAO setTriggerArea [_rRange, _rRange, 0, false, _rRange];	// x, y, angle, rectangle, Z
	_trgAO setTriggerActivation ["ANYPLAYER", "PRESENT", true];	// who, how, repeat on/off
	_trgAO setTriggerTimeout [2, 5, 10, true];					// min, ave, max, interupt
	_trgAO setTriggerStatements ["({_x in thisList} count (playableUnits + switchableUnits) > 0) && ((getPosASL player select 2) > 200) && (trgDAR == 1)", 			// 200m ABOVE SEA LEVEL
							 format["[%1] execVM ""vqi_halo\VQI-DemonDropper\Airspace\Radar\vqi_leap_radar_analyze.sqf""",_rTrack],								// Technology 0-100%
							 ""]; 																													//
	sleep 1;					
	
	
	
	// RADAR Array Antenna
	//_rad = "C_Offroad_01_F" createVehicle _posBIS;
	
	
	
	
	
	
	
	
	
	
	
	
	// Text Readout - ie  R6.80
	_txtRange = _rRange / 1000;
	_txtTrack = _rTrack;
	
	
	// Primary Marker
	_nameAO = "markerRAD0" + str _i;
	_marker = createMarker [_nameAO,_trgAO]; //
	_marker setMarkerType _mkrRAD; //
	_marker setMarkerColor "ColorBLACK";
	_marker setMarkertext format ["R%1.%2",_txtRange,_txtTrack];
	_marker setMarkerAlpha 0.8;
	sleep 0.1;
	
	
	// Marker Details
	//if (_rDataX == 1000) then {_mkrGRP = "group_1"; _txtDataX = "?????"; 	_mkrW = 1.2; _mkrH = 1.2; };
	
	
	// Set X RADAR Rings /////////////////////////////
	if (_rRange >= 3000) then {
		_nameAO2 = "markerRAD1" + str _i;
		_markerB = createMarker [_nameAO2,_trgAO]; //
		_markerB setMarkerShape "ELLIPSE";
		_markerB setMarkerBrush "Grid";
		_markerB setMarkerColor "ColorBLACK";
		_markerB setMarkerSize [_rRange,_rRange];
		//_markerB setMarkerText " SAM";
		_markerB setMarkerAlpha 0.15;
	};
	
	if (_rRange >= 3000) then {
		_nameAO3 = "markerRAD1a" + str _i;
		_markerC = createMarker [_nameAO3,_trgAO]; //
		_markerC setMarkerShape "ELLIPSE";
		_markerC setMarkerBrush "Border";
		_markerC setMarkerColor "ColorRED";
		_markerC setMarkerSize [2900,2900];
		//_markerB setMarkerText " SAM";
		_markerC setMarkerAlpha (_rTrack / 100);
	};
	
	if (_rRange >= 3000) then {
		_nameAO4 = "markerRAD1b" + str _i;
		_markerD = createMarker [_nameAO4,_trgAO]; //
		_markerD setMarkerShape "ELLIPSE";
		_markerD setMarkerBrush "Border";
		_markerD setMarkerColor "ColorRED";
		_markerD setMarkerSize [3000,3000];
		//_markerB setMarkerText " SAM";
		_markerD setMarkerAlpha (_rTrack / 100);
	};
	
	
	
	if (_rRange >= 4000) then {
		_nameAO5 = "markerRAD2a" + str _i;
		_markerE = createMarker [_nameAO5,_trgAO]; //
		_markerE setMarkerShape "ELLIPSE";
		_markerE setMarkerBrush "Border";
		_markerE setMarkerColor "ColorRED";
		_markerE setMarkerSize [3900,3900];
		//_markerB setMarkerText " SAM";
		_markerE setMarkerAlpha (_rTrack / 100);
	};
	
	if (_rRange >= 4000) then {
		_nameAO6 = "markerRAD2b" + str _i;
		_markerF = createMarker [_nameAO6,_trgAO]; //
		_markerF setMarkerShape "ELLIPSE";
		_markerF setMarkerBrush "Border";
		_markerF setMarkerColor "ColorRED";
		_markerF setMarkerSize [4000,4000];
		//_markerB setMarkerText " SAM";
		_markerF setMarkerAlpha (_rTrack / 100);
	};

	
	
	if (_rRange >= 5000) then {
		_nameAO7 = "markerRAD3a" + str _i;
		_markerG = createMarker [_nameAO7,_trgAO]; //
		_markerG setMarkerShape "ELLIPSE";
		_markerG setMarkerBrush "Border";
		_markerG setMarkerColor "ColorRED";
		_markerG setMarkerSize [4900,4900];
		//_markerB setMarkerText " SAM";
		_markerG setMarkerAlpha (_rTrack / 100);
	};
	
	if (_rRange >= 5000) then {
		_nameAO8 = "markerRAD3b" + str _i;
		_markerH = createMarker [_nameAO8,_trgAO]; //
		_markerH setMarkerShape "ELLIPSE";
		_markerH setMarkerBrush "Border";
		_markerH setMarkerColor "ColorRED";
		_markerH setMarkerSize [5000,5000];
		//_markerB setMarkerText " SAM";
		_markerH setMarkerAlpha (_rTrack / 100);
	};	

	
	
	if (_rRange >= 6000) then {
		_nameAO9 = "markerRAD4a" + str _i;
		_markerI = createMarker [_nameAO9,_trgAO]; //
		_markerI setMarkerShape "ELLIPSE";
		_markerI setMarkerBrush "Border";
		_markerI setMarkerColor "ColorRED";
		_markerI setMarkerSize [5900,5900];
		//_markerB setMarkerText " SAM";
		_markerI setMarkerAlpha (_rTrack / 100);
	};
	
	if (_rRange >= 6000) then {
		_nameAO10 = "markerRAD4b" + str _i;
		_markerJ = createMarker [_nameAO10,_trgAO]; //
		_markerJ setMarkerShape "ELLIPSE";
		_markerJ setMarkerBrush "Border";
		_markerJ setMarkerColor "ColorRED";
		_markerJ setMarkerSize [6000,6000];
		//_markerB setMarkerText " SAM";
		_markerJ setMarkerAlpha (_rTrack / 100);
	};	
	
	
	
	if (_rRange >= 7000) then {
		_nameAO11 = "markerRAD5a" + str _i;
		_markerK = createMarker [_nameAO11,_trgAO]; //
		_markerK setMarkerShape "ELLIPSE";
		_markerK setMarkerBrush "Border";
		_markerK setMarkerColor "ColorRED";
		_markerK setMarkerSize [6900,6900];
		//_markerB setMarkerText " SAM";
		_markerK setMarkerAlpha (_rTrack / 100);
	};
	
	if (_rRange >= 7000) then {
		_nameAO12 = "markerRAD5b" + str _i;
		_markerL = createMarker [_nameAO12,_trgAO]; //
		_markerL setMarkerShape "ELLIPSE";
		_markerL setMarkerBrush "Border";
		_markerL setMarkerColor "ColorRED";
		_markerL setMarkerSize [7000,7000];
		//_markerB setMarkerText " SAM";
		_markerL setMarkerAlpha (_rTrack / 100);
	};
	
	
	
	if (_rRange >= 8000) then {
		_nameAO13 = "markerRAD6a" + str _i;
		_markerM = createMarker [_nameAO13,_trgAO]; //
		_markerM setMarkerShape "ELLIPSE";
		_markerM setMarkerBrush "Border";
		_markerM setMarkerColor "ColorRED";
		_markerM setMarkerSize [7900,7900];
		//_markerB setMarkerText " SAM";
		_markerM setMarkerAlpha (_rTrack / 100);
	};
	
	if (_rRange >= 8000) then {
		_nameAO14 = "markerRAD6b" + str _i;
		_markerN = createMarker [_nameAO14,_trgAO]; //
		_markerN setMarkerShape "ELLIPSE";
		_markerN setMarkerBrush "Border";
		_markerN setMarkerColor "ColorRED";
		_markerN setMarkerSize [8000,8000];
		//_markerB setMarkerText " SAM";
		_markerN setMarkerAlpha (_rTrack / 100);
	};
	
	
	
	if (_rRange >= 9000) then {
		_nameAO15 = "markerRAD7a" + str _i;
		_markerO = createMarker [_nameAO15,_trgAO]; //
		_markerO setMarkerShape "ELLIPSE";
		_markerO setMarkerBrush "Border";
		_markerO setMarkerColor "ColorRED";
		_markerO setMarkerSize [8900,8900];
		//_markerB setMarkerText " SAM";
		_markerO setMarkerAlpha (_rTrack / 100);
	};
	
	if (_rRange >= 9000) then {
		_nameAO16 = "markerRAD7b" + str _i;
		_markerP = createMarker [_nameAO16,_trgAO]; //
		_markerP setMarkerShape "ELLIPSE";
		_markerP setMarkerBrush "Border";
		_markerP setMarkerColor "ColorRED";
		_markerP setMarkerSize [9000,9000];
		//_markerB setMarkerText " SAM";
		_markerP setMarkerAlpha (_rTrack / 100);
	};	

	
	
	if (_rRange >= 10000) then {
		_nameAO17 = "markerRAD8a" + str _i;
		_markerQ = createMarker [_nameAO17,_trgAO]; //
		_markerQ setMarkerShape "ELLIPSE";
		_markerQ setMarkerBrush "Border";
		_markerQ setMarkerColor "ColorRED";
		_markerQ setMarkerSize [9900,9900];
		//_markerB setMarkerText " SAM";
		_markerQ setMarkerAlpha (_rTrack / 100);
	};
	
	if (_rRange == 10000) then {
		_nameAO18 = "markerRAD8b" + str _i;
		_markerR = createMarker [_nameAO18,_trgAO]; //
		_markerR setMarkerShape "ELLIPSE";
		_markerR setMarkerBrush "Border";
		_markerR setMarkerColor "ColorRED";
		_markerR setMarkerSize [10000,10000];
		//_markerB setMarkerText " SAM";
		_markerR setMarkerAlpha (_rTrack / 100);
	};	
	

	
hint (format ["AO INTEL REPORT \n RADAR \n \n Range: %1 KM \n Tech: %2",_txtRange,_txtTrack]+"%"); 

sleep 0.1;
};



sleep 1;
hint "- END OF REPORT -";

sleep 1;
execVM "vqi_halo\VQI-DemonDropper\Airspace\Radar\vqi_leap_radar_mkrs_data.sqf";




sleep 5;
ao_rad_done = true;

sleep 1;
if (VQI_HINTS_HALO == 1) then { hint "radar_setup.sqf -END-"; };

/////////////////////////
/* NOTES:




*/